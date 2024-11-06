#include "bft.h"
#include <iostream>

BFT::BFT(int totalNodes) : totalNodes(totalNodes) {
    // Initialize nodes (for simplicity, using dummy IDs)
    for (int i = 0; i < totalNodes; ++i) {
        nodes.push_back("Node_" + std::to_string(i));
    }
}

void BFT::proposeBlock(const std::string& blockData) {
    std::cout << "Block proposed with data: " << blockData << std::endl;
    // Logic to propose a block
}

void BFT::vote(const std::string& nodeId, const std::string& blockId) {
    votes.push_back(nodeId);
    std::cout << nodeId << " voted for block: " << blockId << std::endl;
}

bool BFT::isBlockValid(const std::string& blockId) {
    // Simple validation logic (placeholder)
    return votes.size() > (totalNodes * 2 / 3); // More than two-thirds of the nodes must vote
}
