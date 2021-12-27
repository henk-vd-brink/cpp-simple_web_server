#include <iostream>
#include <served/served.hpp>

int main(int argc, const char *argv[])
{
    served::multiplexer mux;

    mux.handle("/api/greeting")
        .get([&](served::response &res, const served::request &req)
             {
            res.set_header("content-type", "application/json");
            res << "{ \"content\": \"Hello World\"}\n"; });

    std::cout << "Succesfully started the API!" << std::endl;

    served::net::server server("0.0.0.0", "8123", mux);
    server.run(10);

    return (EXIT_SUCCESS);
}