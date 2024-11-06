#include <gtest/gtest.h>
#include "sdk/sdk.h"

TEST(SDKTest, DeployContract) {
    SDK sdk;
    EXPECT_NO_THROW(sdk.deployContract("contract code here"));
}

TEST(SDKTest, CallContract) {
    SDK sdk;
    sdk.deployContract("contract code here");
    std::string result = sdk.callContract("contractAddress", "methodName", {"param1", "param2"});
    EXPECT_EQ(result, "result"); // Placeholder for expected result
}
