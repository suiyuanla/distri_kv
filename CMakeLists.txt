# 设置cmake最小版本
cmake_minimum_required(VERSION 3.6)

# 设置项目名称
project(Distri_kv)

# 设置C++标准11
set(CMAKE_CXX_STANDARD 17)

# 设置输出compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS on)

add_subdirectory(proto)
add_subdirectory(src)