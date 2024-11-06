#include <iostream>
#include "compiler/compiler.h"
#include "runtime/runtime.h"

int main() {
    Compiler compiler;
    Runtime runtime;

    // Example source code for a simple storage contract
    std::string sourceCode = R"(
        contract SimpleStorage {
            int storedData;

            function set(int x) {
                storedData = x;
            }

            function get() {
                return storedData;
            }
        }
    )";

    // Compile the smart contract
    std::string bytecode = compiler.compile(sourceCode);

    // Execute the smart contract
    runtime.execute(bytecode);
    runtime.setVariable("storedData", 42); // Simulate setting a value
    std::cout << "Stored data: " << runtime.getVariable("storedData") << std::endl;

    return 0;
}
