#include "server/server.h"


int main(int argc, char** argv)
{
    hcc::server::Server srv;
    srv.run_asio_test();

    return 0;
}
