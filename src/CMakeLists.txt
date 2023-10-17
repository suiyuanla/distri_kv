add_library(kv_opt STATIC KV_opt_impl.cpp)
target_include_directories(kv_opt PUBLIC ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/proto)
target_link_directories(kv_opt PUBLIC kv_opt_grpc)

set(target myserver myclient)

foreach(_target ${target})
    add_executable(${_target} "${_target}.cpp")
    target_include_directories(${_target} PUBLIC ${PROJECT_SOURCE_DIR}/include)
    target_link_libraries(${_target} PUBLIC kv_opt kv_opt_grpc)
endforeach()

# add_executable(myserver myserver.cpp)
# target_include_directories(myserver PRIVATE ${PROJECT_SOURCE_DIR}/include)

# add_executable(myclient myclient.cpp)
# target_include_directories(myclient PRIVATE ${PROJECT_SOURCE_DIR}/include)

set(target greeter_server greeter_client)

foreach(_target ${target})
    add_executable(${_target} "${_target}.cc")
    target_include_directories(${_target} PUBLIC ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/proto)
    target_link_libraries(${_target} PUBLIC helloworld)
endforeach()