#include "p2p.h"
#include <iostream>
#include <thread>
#include <chrono>

P2P::P2P(int port) : port(port) {}

void P2P::start() {
    std::cout << "Starting P2P networking on port " << port << std::endl;
    std::thread listener(&P2P::listenForConnections, this);
    listener.detach();
}

void P2P::connectToPeer(const std::string& peerAddress) {
    peers.push_back(peerAddress);
    std::cout << "Connected to peer: " << peerAddress << std::endl;
}

void P2P::broadcastMessage(const std::string& message) {
    for (const auto& peer : peers) {
        std::cout << "Sending message to " << peer << ": " << message << std::endl;
        // Placeholder for actual message sending logic
    }
}

void P2P::listenForConnections() {
    while (true) {
        // Placeholder for listening logic
        std::this_thread::sleep_for(std::chrono::seconds(1));
        // Simulate receiving a message
        handleIncomingMessage("Hello from peer!");
    }
}

void P2P::handleIncomingMessage(const std::string& message) {
    std::cout << "Received message: " << message << std::endl;
    // Handle the incoming message (e.g., process transactions, blocks, etc.)
}
