#include "server.h"

#include "asio.hpp"

#include <iostream>

namespace hcc::server{


void Server::run_asio_test() {
    std::cout << "Start_test function!\n";

    asio::io_context io;

    asio::steady_timer t(io, asio::chrono::seconds(5));
    t.wait();

    std::cout << "Hello Wrold\n";
}


} // namespace hcc::server
