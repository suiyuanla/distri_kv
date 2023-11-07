#include <httplib.h>
#include <json.hpp>
#include <iostream>
int main() {
    using namespace std;
    // HTTP
    httplib::Client cli("http://localhost:8080");

    auto res = cli.Get("/hi");
    cout << res->status << " " << res->body;
    return 0;
}