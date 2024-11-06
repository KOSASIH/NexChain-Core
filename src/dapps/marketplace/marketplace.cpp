#include "marketplace.h"
#include <iostream>

Marketplace::Marketplace() {}

void Marketplace::listDApp(const Listing& listing) {
    listings.push_back(listing);
    std::cout << "Listed DApp: " << listing.getName() << " for sale." << std::endl;
}

const std::vector<Listing>& Marketplace::getListings() const {
    return listings;
}
