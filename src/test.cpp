#include <iostream>

#include "asio.hpp"


int main(int argc, char** argv)
{
        
    asio::io_context io;
    
    asio::steady_timer t(io, asio::chrono::seconds(5));
    t.wait();

    std::cout << "Hello Wrold\n";

    return 0;
}
