#include <vector>

#include "asio/ip/tcp.hpp"

namespace hcc::client::tcp
{


class MyClient
{
  public:
    MyClient();
    void start();

  private:
    std::vector<char> m_data_buffer;

    void grab_some_data(asio::ip::tcp::socket& socket);
};


} // namespace hcc::client::tcp
