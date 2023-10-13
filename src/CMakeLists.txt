
set(target greeter_client greeter_server)

foreach(_target
    ${target})
    add_executable(${_target} "${_target}.cc")
    target_include_directories(${_target} PRIVATE ${PROJECT_SOURCE_DIR}/proto)
    target_link_libraries(${_target}
        helloworld
    )
endforeach()

add_executable(myserver myserver.cpp)
target_include_directories(myserver PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_executable(myclient myclient.cpp)
target_include_directories(myclient PRIVATE ${PROJECT_SOURCE_DIR}/include)