#ifndef IDENTITY_MANAGER_H
#define IDENTITY_MANAGER_H

#include <string>
#include <unordered_map>

class IdentityManager {
public:
    IdentityManager();
    std::string createIdentity(const std::string& userName);
    bool verifyIdentity(const std::string& userId);
    std::string getIdentity(const std::string& userId) const;

private:
    std::unordered_map<std::string, std::string> identities; // userId -> userName
};

#endif // IDENTITY_MANAGER_H
