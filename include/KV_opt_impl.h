#ifndef KV_OPT_IMPL_H
#define KV_OPT_IMPL_H
// #include "absl/flags/flag.h"
// #include "absl/flags/parse.h"
// #include "absl/strings/str_format.h"

#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/support/status.h>
#include <string>

#include "kv_opt.grpc.pb.h"
#include "kv_opt.pb.h"

class KV_opt_Impl final : public kv_operate::KV_server::Service {
    grpc::Status Add_KV(grpc::ServerContext* context,
                        const kv_operate::Add_Req* request,
                        kv_operate::Reply* response) override;
    grpc::Status Delete_KV(grpc::ServerContext* context,
                           const kv_operate::Delete_Req* request,
                           kv_operate::Reply* response) override;
    grpc::Status Query_KV(grpc::ServerContext* context,
                          const kv_operate::Query_Req* request,
                          kv_operate::Reply* response) override;
};

class KV_opt_client {
   public:
    KV_opt_client(std::shared_ptr<grpc::Channel> channel)
        : stub_(kv_operate::KV_server::NewStub(channel)) {}

    std::string Add_KV(const std::string& kv_json);
    std::string Delete_KV(const std::string& key);
    std::string Query_KV(const std::string& key);

   private:
    std::unique_ptr<kv_operate::KV_server::Stub> stub_;
};

#endif