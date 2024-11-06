#ifndef BLOCK_H
#define BLOCK_H

#include <string>
#include <vector>
#include "transaction.h"

class Block {
public:
    Block(int index, const std::string& previousHash, const std::vector<Transaction>& transactions);
    
    std::string getHash() const;
    std::string getPreviousHash() const;
    int getIndex() const;
    const std::vector<Transaction>& getTransactions() const;

private:
    int index;
    std::string previousHash;
    std::vector<Transaction> transactions;
    std::string hash;

    void calculateHash();
};

#endif // BLOCK_H
