#ifndef DPOS_H
#define DPOS_H

#include <vector>
#include <string>

class DPoS {
public:
    DPoS(int totalValidators);
    void proposeBlock(const std::string& blockData);
    void vote(const std::string& validatorId, const std::string& blockId);
    bool isBlockValid(const std::string& blockId);
    
private:
    int totalValidators;
    std::vector<std::string> validators;
    std::vector<std::string> votes;
};

#endif // DPOS_H
