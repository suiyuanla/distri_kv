# 找到grpc lib
find_package(gRPC CONFIG REQUIRED)
set(grpc_LIBRARIES

    # gRPC::grpc++
    # gRPC::grpc
    gRPC::grpc++_reflection
)

# 找到absl lib
find_package(absl REQUIRED)
set(absl_LIBRARIES

    # absl::algorithm
    # absl::base
    # absl::cord
    # absl::debugging
    # absl::flat_hash_map
    absl::flags
    absl::flags_parse

    # absl::memory
    # absl::meta
    # absl::numeric
    # absl::random_random
    # absl::strings
    # absl::synchronization
    # absl::time
    # absl::utility
)

add_library(kv_opt_grpc STATIC kv_opt.pb.cc kv_opt.grpc.pb.cc)
target_link_libraries(kv_opt_grpc ${grpc_LIBRARIES} ${absl_LIBRARIES})