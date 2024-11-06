#include <iostream>
#include <string>

enum class MessageType {
    TRANSACTION,
    BLOCK,
    STATUS,
    CUSTOM
};

struct Message {
    MessageType type;
    std::string content;
};

void sendMessage(const Message& message) {
    std::cout << "Sending message of type: " << static_cast<int>(message.type) 
              << " with content: "<< message.content << std::endl;
    // Placeholder for actual message sending logic
}

Message receiveMessage() {
    // Placeholder for receiving a message
    Message message;
    message.type = MessageType::CUSTOM;
    message.content = "Sample message content";
    std::cout << "Received message of type: " << static_cast<int>(message.type) 
              << " with content: " << message.content << std::endl;
    return message;
}

// Example usage
int main() {
    P2P p2p(8080);
    p2p.start();
    p2p.connectToPeer("192.168.1.2");
    p2p.broadcastMessage("Hello, peers!");

    RPC rpc(8081);
    rpc.start();
    std::string response = rpc.call("getBlock", "{\"index\": 1}");
    std::cout << "RPC Response: " << response << std::endl;

    Message msg = { MessageType::TRANSACTION, "Transaction data" };
    sendMessage(msg);
    receiveMessage();

    return 0;
}
