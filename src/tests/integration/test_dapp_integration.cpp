#include <gtest/gtest.h>
#include "sdk/sdk.h"
#include "marketplace/marketplace.h"
#include "marketplace/listing.h"

TEST(DAppIntegrationTest, DAppDeploymentAndMarketplaceListing) {
    SDK sdk;
    Marketplace marketplace;

    // Deploy a DApp
    std::string contractCode = "contract code here";
    sdk.deployContract(contractCode);

    // List the DApp in the marketplace
    Listing listing("MyDApp", "A description of MyDApp", "0.1 ETH");
    marketplace.listDApp(listing);

    // Check if the listing exists
    auto listings = marketplace.getListings();
    EXPECT_EQ(listings.size(), 1);
    EXPECT_EQ(listings[0].getName(), "MyDApp");
}
