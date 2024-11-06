#include "identity_manager.h"
#include <iostream>
#include <uuid/uuid.h>

IdentityManager::IdentityManager() {}

std::string IdentityManager::createIdentity(const std::string& userName) {
    uuid_t uuid;
    uuid_generate(uuid);
    char id[37];
    uuid_unparse(uuid, id);
    identities[id] = userName;
    std::cout << "Created identity: " << id << " for user: " << userName << std::endl;
    return id;
}

bool IdentityManager::verifyIdentity(const std::string& userId) {
    return identities.find(userId) != identities.end();
}

std::string IdentityManager::getIdentity(const std::string& userId) const {
    auto it = identities.find(userId);
    if (it != identities.end()) {
        return it->second;
    }
    return "";
}
