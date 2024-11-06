#include "transaction.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <openssl/sha.h>

Transaction::Transaction(const std::string& sender, const std::string& receiver, double amount)
    : sender(sender), receiver(receiver), amount(amount) {
    calculateHash();
}

void Transaction::calculateHash() {
    std::stringstream ss;
    ss << sender << receiver << amount;
    std::string input = ss.str();
    
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256(reinterpret_cast<const unsigned char*>(input.c_str()), input.size(), hash);
    
    std::ostringstream oss;
    for (const auto& byte : hash) {
        oss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(byte);
    }
    hash = oss.str();
}

std::string Transaction::getHash() const {
    return hash;
}

std::string Transaction::getSender() const {
    return sender;
}

std::string Transaction::getReceiver() const {
    return receiver;
}

double Transaction::getAmount() const {
    return amount;
}
