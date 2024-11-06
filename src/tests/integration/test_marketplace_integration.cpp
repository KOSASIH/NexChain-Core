#include <gtest/gtest.h>
#include "marketplace/marketplace.h"
#include "marketplace/listing.h"

TEST(MarketplaceIntegrationTest, ListingManagement) {
    Marketplace marketplace;

    // Create a listing
    Listing listing("MyDApp", "A description of MyDApp", "0.1 ETH");
    marketplace.listDApp(listing);

    // Verify the listing
    auto listings = marketplace.getListings();
    EXPECT_EQ(listings.size(), 1);
    EXPECT_EQ(listings[0].getDescription(), "A description of MyDApp");
}
