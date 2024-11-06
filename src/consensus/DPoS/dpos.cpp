#include "dpos.h"
#include <iostream>

DPoS::DPoS(int totalValidators) : totalValidators(totalValidators) {
    // Initialize validators (for simplicity, using dummy IDs)
    for (int i = 0; i < totalValidators; ++i) {
        validators.push_back("Validator_" + std::to_string(i));
    }
}

void DPoS::proposeBlock(const std::string& blockData) {
    std::cout << "Block proposed with data: " << blockData << std::endl;
    // Logic to propose a block
}

void DPoS::vote(const std::string& validatorId, const std::string& blockId) {
    votes.push_back(validatorId);
    std::cout << validatorId << " voted for block: " << blockId << std::endl;
}

bool DPoS::isBlockValid(const std::string& blockId) {
    // Simple validation logic (placeholder)
    return votes.size() > (totalValidators / 2); // More than half of the validators must vote
}
