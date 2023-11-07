# FROM ubuntu:20.04
FROM shuiyihang0981/ubuntu20.04_grpc:latest
# 设置时区
ENV TZ=Asia/Shanghai
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo '$TZ' > /etc/timezone

COPY . /app
WORKDIR /app
# RUN apt-get update && apt-get install -y \
#     # build-essential autoconf libtool pkg-config \
#     g++ \
#     cmake

RUN cd proto && \
    protoc -I=. --cpp_out=. --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` kv_opt.proto && \
    cd .. && \
    mkdir build && \
    cd build && \
    cmake .. \
    && make -j 4