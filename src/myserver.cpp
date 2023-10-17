#include <grpcpp/server_builder.h>
#include <sys/types.h>

#include <cstddef>
#include <cstdint>
#include <iostream>
#include <memory>
#include <string>

#include "KV_opt_impl.h"
#include "httplib.h"
#include "json.hpp"

using namespace nlohmann;
using namespace nlohmann::literals;
using namespace std;
using namespace httplib;

uint16_t grpc_port[3] = {9090, 9091, 9092};
uint16_t http_port[3] = {9527, 9528, 9529};

int str_hash(const string &str) {
    int hash = 0;
    for (auto c : str) {
        hash += c;
    }
    return hash % 3;
}

void set_server(httplib::Server &svr) {
    svr.Post("/", [&](const Request &req, Response &res) {
        // cout << req.body << endl;
        json kv_json = json::parse(req.body);
        if (auto it = kv_json.begin(); it != kv_json.end()) {
            KV_opt_client kv_client((grpc::CreateChannel(
                "localhost:" + to_string(grpc_port[str_hash(it.key())]),
                grpc::InsecureChannelCredentials())));
            auto rep = kv_client.Add_KV(req.body);
            // cout << "Add_KV: " << rep << endl;
            res.set_content("", "application/json; charset=utf-8");
        }
    });

    svr.Get("/:key", [&](const Request &req, Response &res) {
        auto key = req.path_params.at("key");
        KV_opt_client kv_client((grpc::CreateChannel(
            "localhost:" + to_string(grpc_port[str_hash(key)]),
            grpc::InsecureChannelCredentials())));
        auto rep = kv_client.Query_KV(key);
        if (rep == "") {
            res.status = 404;
            res.set_content("", "application/json; charset=utf-8");
            return;
        }
        json rep_json;
        rep_json[key] = json::parse(rep);
        res.set_content(rep_json.dump(), "application/json; charset=utf-8");
    });

    svr.Delete("/:key", [&](const Request &req, Response &res) {
        auto key = req.path_params.at("key");
        KV_opt_client kv_client((grpc::CreateChannel(
            "localhost:" + to_string(grpc_port[str_hash(key)]),
            grpc::InsecureChannelCredentials())));
        auto rep = kv_client.Delete_KV(key);

        res.set_content(to_string(rep), "application/json; charset=utf-8");
    });
}

int main(int argc, char **argv) {
    int index = stoi(argv[1]);
    // GRPC
    std::string server_address =
        std::string("0.0.0.0:") + std::to_string(grpc_port[index]);
    KV_opt_Impl service;
    grpc::EnableDefaultHealthCheckService(true);
    grpc::reflection::InitProtoReflectionServerBuilderPlugin();
    grpc::ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<grpc::Server> grpc_svr(builder.BuildAndStart());
    std::cout << "Grpc Server listening on " << server_address << std::endl;

    // HTTP
    httplib::Server http_svr;
    set_server(http_svr);
    http_svr.listen("0.0.0.0", http_port[index]);
    return 0;
}