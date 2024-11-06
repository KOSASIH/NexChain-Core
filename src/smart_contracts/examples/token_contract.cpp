#include <iostream>
#include "compiler/compiler.h"
#include "runtime/runtime.h"

int main() {
    Compiler compiler;
    Runtime runtime;

    // Example source code for a simple token contract
    std::string sourceCode = R"(
        contract SimpleToken {
            mapping(address => int) balances;

            function transfer(address to, int amount) {
                balances[msg.sender] -= amount;
                balances[to] += amount;
            }

            function balanceOf(address owner) {
                return balances[owner];
            }
        }
    )";

    // Compile the smart contract
    std::string bytecode = compiler.compile(sourceCode);

    // Execute the smart contract
    runtime.execute(bytecode);
    runtime.setVariable("Alice_balance", 100); // Simulate setting a balance
    std::cout << "Alice's balance: " << runtime.getVariable("Alice_balance") << std::endl;

    return 0;
}
