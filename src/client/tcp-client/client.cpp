#include "client.h"

#include "asio/error_code.hpp"
#include "asio/io_context.hpp"
#include "asio/ip/address.hpp"
#include "asio/ip/tcp.hpp"

#include <iostream>
#include <string>
#include <thread>


namespace hcc::client::tcp
{


MyClient::MyClient()
    : m_data_buffer(20 * 1024)
{
}

void MyClient::grab_some_data(asio::ip::tcp::socket& socket)
{
    socket.async_read_some(asio::buffer(m_data_buffer.data(), m_data_buffer.size()),
                           [&](std::error_code ec, std::size_t length) {
                               if (!ec) {
                                   std::cout << "\n\nRead: " << length << " bytes\n\n";
                                   for (int i = 0; i < length; i++) {
                                       std::cout << m_data_buffer[i];
                                   }
                                   grab_some_data(socket);
                               }
                           });
}

void MyClient::start()
{
    asio::error_code ec;

    asio::io_context context;

    asio::io_context::work idleWork(context);

    std::thread thrContext = std::thread([&]() { context.run(); });

    asio::ip::tcp::endpoint endpoint(asio::ip::make_address("93.184.216.24", ec), 80);

    asio::ip::tcp::socket socket(context);

    static_cast<void>(socket.connect(endpoint, ec));

    if (!ec) {
        std::cout << "Connected" << std::endl;
    } else {
        std::cout << "Failed to connect" << ec.message() << std::endl;
    }

    if (socket.is_open()) {

        grab_some_data(socket);

        std::string sRequest = "GET /index.html HTTP/1.1\r\n"
                               "Host: example.com\r\n"
                               "Connection: close\r\n\r\n";

        socket.write_some(asio::buffer(sRequest.c_str(), sRequest.size()), ec);

    }

        thrContext.join();
}


} // namespace hcc::client::tcp