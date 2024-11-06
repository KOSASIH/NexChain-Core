#include "listing.h"

Listing::Listing(const std::string& name, const std::string& description, const std::string& price)
    : name(name), description(description), price(price) {}

std::string Listing::getName() const {
    return name;
}

std::string Listing::getDescription() const {
    return description;
}

std::string Listing::getPrice() const {
    return price;
}
