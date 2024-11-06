#ifndef SDK_H
#define SDK_H

#include <string>
#include <vector>

class SDK {
public:
    SDK();
    void deployContract(const std::string& contractCode);
    std::string callContract(const std::string& contractAddress, const std::string& methodName, const std::vector<std::string>& params);
};

#endif // SDK_H
