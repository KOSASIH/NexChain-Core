#include "block.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <openssl/sha.h>

Block::Block(int index, const std::string& previousHash, const std::vector<Transaction>& transactions)
    : index(index), previousHash(previousHash), transactions(transactions) {
    calculateHash();
}

void Block::calculateHash() {
    std::stringstream ss;
    ss << index << previousHash;
    for (const auto& tx : transactions) {
        ss << tx.getHash();
    }
    std::string input = ss.str();
    
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256(reinterpret_cast<const unsigned char*>(input.c_str()), input.size(), hash);
    
    std::ostringstream oss;
    for (const auto& byte : hash) {
        oss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(byte);
    }
    hash = oss.str();
}

std::string Block::getHash() const {
    return hash;
}

std::string Block::getPreviousHash() const {
    return previousHash;
}

int Block::getIndex() const {
    return index;
}

const std::vector<Transaction>& Block::getTransactions() const {
    return transactions;
}
