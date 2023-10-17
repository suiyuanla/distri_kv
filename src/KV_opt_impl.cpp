#include "KV_opt_impl.h"
#include <grpcpp/client_context.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/support/status.h>
#include <iostream>
#include <memory>
#include <string>
#include "kv_opt.grpc.pb.h"

using grpc::ClientContext;
using grpc::ServerContext;
using grpc::Status;
using namespace kv_operate;

Status KV_opt_Impl::Add_KV(ServerContext* context, const Add_Req* request,
                           Reply* response) {
    std::cout << "Add_Req, " << request->kv_json() << std::endl;

    response->set_res("");
    return Status::OK;
}

Status KV_opt_Impl::Delete_KV(ServerContext* context, const Delete_Req* request,
                              Reply* response) {
    std::cout << "Delete_Req, " << request->key() << std::endl;
    response->set_res(request->key());
    return Status::OK;
}

Status KV_opt_Impl::Query_KV(ServerContext* context, const Query_Req* request,
                             Reply* response) {
    std::cout << "Query_Req, " << request->key();
    response->set_res(request->key());
    return Status::OK;
}

std::string KV_opt_client::Add_KV(const std::string& kv_json) {
    Add_Req request;
    request.set_kv_json(kv_json);
    Reply reply;
    ClientContext context;
    Status status = stub_->Add_KV(&context, request, &reply);
    if (status.ok()) {
        return reply.res();
    } else {
        std::cout << status.error_code() << ": " << status.error_message()
                  << std::endl;
        return "Add RPC failed";
    }
}

std::string KV_opt_client::Delete_KV(const std::string& key) {
    Delete_Req request;
    request.set_key(key);
    Reply reply;
    ClientContext context;
    Status status = stub_->Delete_KV(&context, request, &reply);
    if (status.ok()) {
        return reply.res();
    } else {
        std::cout << status.error_code() << ": " << status.error_message()
                  << std::endl;
        return "Del RPC failed";
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
        std::cout << status.error_code() << ": " << status.error_message()
                  << std::endl;
        return "Query RPC failed";
    }
}
