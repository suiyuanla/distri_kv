#include <grpcpp/server_builder.h>
#include <sys/types.h>

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

void set_server(httplib::Server &svr, KV_opt_client &kv_client) {
    svr.Post("/", [&](const Request &req, Response &res) {
        // cout << req.body << endl;
        auto rep = kv_client.Add_KV(req.body);
        // cout << "Add_KV: " << rep << endl;
        res.set_content("", "application/json; charset=utf-8");
    });

    svr.Get("/:key", [&](const Request &req, Response &res) {
        auto key = req.path_params.at("key");
        auto rep = kv_client.Query_KV(key);

        res.set_content(rep, "application/json; charset=utf-8");
    });

    svr.Delete("/:key", [&](const Request &req, Response &res) {
        auto key = req.path_params.at("key");
        auto rep = kv_client.Delete_KV(key);

        res.set_content(to_string(rep), "application/json; charset=utf-8");
    });
}

int main() {
    uint16_t port = 9600;

    json test = {{"task", {"task_1", "task_2"}}};

    // GRPC
    std::string server_address = std::string("0.0.0.0:") + std::to_string(port);
    KV_opt_Impl service;
    grpc::EnableDefaultHealthCheckService(true);
    grpc::reflection::InitProtoReflectionServerBuilderPlugin();
    grpc::ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<grpc::Server> grpc_svr(builder.BuildAndStart());
    std::cout << "Grpc Server listening on " << server_address << std::endl;

    // HTTP
    KV_opt_client kv_client(grpc::CreateChannel(
        "localhost:" + to_string(port), grpc::InsecureChannelCredentials()));
    httplib::Server http_svr;
    set_server(http_svr, kv_client);
    http_svr.listen("0.0.0.0", 8080);
    return 0;
}