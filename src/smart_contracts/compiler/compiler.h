#ifndef COMPILER_H
#define COMPILER_H

#include <string>
#include <vector>

class Compiler {
public:
    Compiler();
    std::string compile(const std::string& sourceCode);
};

#endif // COMPILER_H
