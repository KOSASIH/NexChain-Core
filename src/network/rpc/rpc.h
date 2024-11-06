#ifndef RPC_H
#define RPC_H

#include <string>

class RPC {
public:
    RPC(int port);
    void start();
    std::string call(const std::string& method, const std::string& params);
    
private:
    int port;
    void handleRequest(const std::string& request);
};

#endif // RPC_H
