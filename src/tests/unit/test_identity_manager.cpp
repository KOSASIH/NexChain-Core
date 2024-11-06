#include <gtest/gtest.h>
#include "identity/identity_manager.h"

TEST(IdentityManagerTest, CreateIdentity) {
    IdentityManager manager;
    std::string userId = manager.createIdentity("Alice");
    EXPECT_TRUE(manager.verifyIdentity(userId));
    EXPECT_EQ(manager.getIdentity(userId), "Alice");
}

TEST(IdentityManagerTest, VerifyNonExistentIdentity) {
    IdentityManager manager;
    EXPECT_FALSE(manager.verifyIdentity("nonexistent_id"));
}
