
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

# 生成helloworld静态库
add_library(helloworld STATIC helloworld.pb.cc helloworld.grpc.pb.cc)

# 添加头文件目录
# target_include_directories(helloworld PRIVATE ${CMAKE_SOURCE_DIR}/proto)

# 链接动态库
target_link_libraries(helloworld ${grpc_LIBRARIES} ${absl_LIBRARIES})