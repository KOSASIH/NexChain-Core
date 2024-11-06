#ifndef RUNTIME_H
#define RUNTIME_H

#include <string>
#include <unordered_map>

class Runtime {
public:
    Runtime();
    void execute(const std::string& bytecode);
    void setVariable(const std::string& name, int value);
    int getVariable(const std::string& name) const;

private:
    std::unordered_map<std::string, int> variables;
};

#endif // RUNTIME_H
