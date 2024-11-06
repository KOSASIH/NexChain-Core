#ifndef MARKETPLACE_H
#define MARKETPLACE_H

#include <string>
#include <vector>
#include "listing.h"

class Marketplace {
public:
    Marketplace();
    void listDApp(const Listing& listing);
    std::vector<Listing> getListings() ```cpp
    const std::vector<Listing>& getListings() const;

private:
    std::vector<Listing> listings; // List of DApp listings
};

#endif // MARKETPLACE_H
