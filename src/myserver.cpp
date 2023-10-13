#include <httplib.h>
#include <json.hpp>
#include <iostream>
#include <string>

int main() {
    using namespace nlohmann;
    using namespace std;
    json test = {{"task", {"task_1", "task_2"}}};

    // HTTP
    httplib::Server svr;
    svr.Get("/hi", [&](const httplib::Request &, httplib::Response &res) {
        res.set_content(test.dump(), "application/json; charset=utf-8");
    });

    svr.listen("0.0.0.0", 8080);
    return 0;
}