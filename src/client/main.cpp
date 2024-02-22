#include "tcp-client/client.h"


int main(int argc, char** argv)
{
    hcc::client::tcp::MyClient client{};
    client.start();
    return 0;
}
