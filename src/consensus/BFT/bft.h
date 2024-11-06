#ifndef BFT_H
#define BFT_H

#include <vector>
#include <string>

class BFT {
public:
    BFT(int totalNodes);
    void proposeBlock(const std::string& blockData);
    void vote(const std::string& nodeId, const std::string& blockId);
    bool isBlockValid(const std::string& blockId);
    
private:
    int totalNodes;
    std::vector<std::string> nodes;
    std::vector<std::string> votes;
};

#endif // BFT_H
