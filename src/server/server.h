#ifndef __HCC_SERVER_H__
#define __HCC_SERVER_H__

#include "asio.hpp"

namespace hcc::server
{

class Server
{
  public:
    void init();

    // test_func
    void run_asio_test();

  private:
    //     asio::ip m_ip_address;
    //    m_port;
    static int m_member;
};

} // namespace hcc::server
#endif
