#include "DPoS/dpos.h"
#include "BFT/bft.h"
#include <iostream>

class ConsensusManager {
public:
    ConsensusManager(int totalValidators, int totalNodes, const std::string& consensusType);
    void proposeBlock(const std::string& blockData);
    void vote(const std::string& voter Id, const std::string& blockId);
    bool isBlockValid(const std::string& blockId);

private:
    DPoS* dpos;
    BFT* bft;
    std::string consensusType;
};

ConsensusManager::ConsensusManager(int totalValidators, int totalNodes, const std::string& consensusType) 
    : consensusType(consensusType) {
    if (consensusType == "DPoS") {
        dpos = new DPoS(totalValidators);
        bft = nullptr;
    } else if (consensusType == "BFT") {
        bft = new BFT(totalNodes);
        dpos = nullptr;
    } else {
        throw std::invalid_argument("Invalid consensus type");
    }
}

void ConsensusManager::proposeBlock(const std::string& blockData) {
    if (consensusType == "DPoS") {
        dpos->proposeBlock(blockData);
    } else if (consensusType == "BFT") {
        bft->proposeBlock(blockData);
    }
}

void ConsensusManager::vote(const std::string& voterId, const std::string& blockId) {
    if (consensusType == "DPoS") {
        dpos->vote(voterId, blockId);
    } else if (consensusType == "BFT") {
        bft->vote(voterId, blockId);
    }
}

bool ConsensusManager::isBlockValid(const std::string& blockId) {
    if (consensusType == "DPoS") {
        return dpos->isBlockValid(blockId);
    } else if (consensusType == "BFT") {
        return bft->isBlockValid(blockId);
    }
    return false;
}

// Example usage
int main() {
    try {
        ConsensusManager cm(10, 10, "DPoS");
        cm.proposeBlock("Block Data 1");
        cm.vote("Validator_1", "Block ID 1");
        std::cout << "Is block valid? " << cm.isBlockValid("Block ID 1") << std::endl;

        ConsensusManager cmBFT(0, 10, "BFT");
        cmBFT.proposeBlock("Block Data 2");
        cmBFT.vote("Node_1", "Block ID 2");
        std::cout << "Is block valid? " << cmBFT.isBlockValid("Block ID 2") << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
