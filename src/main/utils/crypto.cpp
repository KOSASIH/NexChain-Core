#include "crypto.h"
#include <openssl/sha.h>
#include <sstream>
#include <iomanip>

std::string Crypto::hash(const std::string& input) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256(reinterpret_cast<const unsigned char*>(input.c_str()), input.size(), hash);
    
    std::ostringstream oss;
    for (const auto& byte : hash) {
        oss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(byte);
    }
    return oss.str();
}

std::string Crypto::generateKey() {
    // Placeholder for key generation logic
    return "generated_key";
}
