#include "KV_opt_impl.h"

#include <grpcpp/client_context.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/support/status.h>

#include <iostream>
#include <memory>
#include <string>

#include "json.hpp"
#include "kv_opt.grpc.pb.h"

using grpc::ClientContext;
using grpc::ServerContext;
using grpc::Status;
using namespace kv_operate;
using namespace nlohmann;

Status KV_opt_Impl::Add_KV(ServerContext* context, const Add_Req* request,
                           Reply* response) {
    json kv_json = json::parse(request->kv_json());
    if (auto it = kv_json.begin(); it != kv_json.end() && it.key() != "") {
        // std::cout << "Add_Req, " << it.key() << ": " << it.value() <<
        // std::endl;
        kv_map[it.key()] = it.value().dump();
    } else {
        return Status::CANCELLED;
    }
    // response->set_res("");
    return Status::OK;
}

Status KV_opt_Impl::Delete_KV(ServerContext* context, const Delete_Req* request,
                              Reply* response) {
    auto itr = kv_map.find(request->key());
    if (itr == kv_map.end()) {
        return Status::CANCELLED;
    }

    response->set_res("1");
    kv_map.erase(itr);
    return Status::OK;
}

Status KV_opt_Impl::Query_KV(ServerContext* context, const Query_Req* request,
                             Reply* response) {
    auto itr = kv_map.find(request->key());
    if (itr == kv_map.end()) {
        return Status::CANCELLED;
    }
    response->set_res(itr->second);
    return Status::OK;
}

bool KV_opt_client::Add_KV(const std::string& kv_json) {
    Add_Req request;
    request.set_kv_json(kv_json);
    Reply reply;
    ClientContext context;
    Status status = stub_->Add_KV(&context, request, &reply);

    return status.ok();
    // if (status.ok()) {
    //     return reply.res();
    // } else {
    //     std::cout << status.error_code() << ": " << status.error_message()
    //               << std::endl;
    //     return "Add RPC failed";
    // }
}

int KV_opt_client::Delete_KV(const std::string& key) {
    Delete_Req request;
    request.set_key(key);
    Reply reply;
    ClientContext context;
    Status status = stub_->Delete_KV(&context, request, &reply);
    if (status.ok()) {
        return std::stoi(reply.res());
    } else {
        // std::cout << status.error_code() << ": " << status.error_message()
        //           << std::endl;
        return 0;
    }
}

std::string KV_opt_client::Query_KV(const std::string& key) {
    Query_Req request;
    request.set_key(key);
    Reply reply;
    ClientContext context;
    Status status = stub_->Query_KV(&context, request, &reply);
    if (status.ok()) {
        return reply.res();
    } else {
        // std::cout << status.error_code() << ": " << status.error_message()
        //           << std::endl;
        return "";
    }
}