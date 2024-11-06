#ifndef LISTING_H
#define LISTING_H

#include <string>

class Listing {
public:
    Listing(const std::string& name, const std::string& description, const std::string& price);
    std::string getName() const;
    std::string getDescription() const;
    std::string getPrice() const;

private:
    std::string name;
    std::string description;
    std::string price;
};

#endif // LISTING_H
