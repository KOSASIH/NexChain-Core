#ifndef CRYPTO_H
#define CRYPTO_H

#include <string>

class Crypto {
public:
    static std::string hash(const std::string& input);
    static std::string generateKey();
};

#endif // CRYPTO_H
