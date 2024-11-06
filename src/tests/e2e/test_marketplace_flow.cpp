#include <gtest/gtest.h>
#include "marketplace/marketplace.h"
#include "marketplace/listing.h"

TEST(MarketplaceFlowTest, CompleteMarketplaceFunctionality) {
    Marketplace marketplace;

    // Create and list a DApp
    Listing listing("MyDApp", "A description of MyDApp", "0.1 ETH");
    marketplace.listDApp(listing);

    // Verify the listing in the marketplace
    auto listings = marketplace.getListings();
    EXPECT_EQ(listings.size(), 1);
    EXPECT_EQ(listings[0].getName(), "MyDApp");
    EXPECT_EQ(listings[0].getPrice(), "0.1 ETH");
}
