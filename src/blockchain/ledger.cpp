#include "ledger.h"
#include <iostream>

Ledger::Ledger() {}

void Ledger::addBlock(const Block& block) {
    blocks.push_back(block);
    std::cout << "Block added: " << block.getHash() << std::endl;
}

const std::vector<Block>& Ledger::getBlocks() const {
    return blocks;
}
