#include <iostream>
#include "httpTcpServer.h"

using namespace std;
using namespace http;

int main() {

    TcpServer server = TcpServer("0.0.0.0", 8080);

    server.startListen();
    

    return 0;
}
