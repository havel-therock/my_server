#ifndef __HCC_SERVER_H__
#define __HCC_SERVER_H__


namespace hcc::server
{

class Server
{
  public:
    void run_asio_test();

  private:
    static int m_member;
};

} // namespace hcc::server
#endif
