#ifndef P2P_H
#define P2P_H

#include <string>
#include <vector>

class P2P {
public:
    P2P(int port);
    void start();
    void connectToPeer(const std::string& peerAddress);
    void broadcastMessage(const std::string& message);
    
private:
    int port;
    std::vector<std::string> peers;
    void listenForConnections();
    void handleIncomingMessage(const std::string& message);
};

#endif // P2P_H
