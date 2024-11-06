#ifndef LEDGER_H
#define LEDGER_H

#include <vector>
#include "block.h"

class Ledger {
public:
    Ledger();
    void addBlock(const Block& block);
    const std::vector<Block>& getBlocks() const;

private:
    std::vector<Block> blocks;
};

#endif // LEDGER_H
