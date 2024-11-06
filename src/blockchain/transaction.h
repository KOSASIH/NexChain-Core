#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
public:
    Transaction(const std::string& sender, const std::string& receiver, double amount);
    
    std::string getHash() const;
    std::string getSender() const;
    std::string getReceiver() const;
    double getAmount() const;

private:
    std::string sender;
    std::string receiver;
    double amount;
    std::string hash;

    void calculateHash();
};

#endif // TRANSACTION_H
