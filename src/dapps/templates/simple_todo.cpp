#include <iostream>
#include "sdk/sdk.h"

int main() {
    SDK sdk;

    // Example contract code for a simple to-do list
    std::string contractCode = R"(
        contract SimpleTodo {
            string[] todos;

            function add(string todo) {
                todos.push(todo);
            }

            function get(uint index) {
                return todos[index];
            }

            function getAll() {
                return todos;
            }
        }
    )";

    // Deploy the contract
    sdk.deployContract(contractCode);

    // Simulate adding a todo
    sdk.callContract("SimpleTodoAddress", "add", {"Buy groceries"});
    sdk.callContract("SimpleTodoAddress", "add", {"Read a book"});

    // Simulate retrieving all todos
    std::string result = sdk.callContract("SimpleTodoAddress", "getAll", {});
    std::cout << "Todos: " << result << std::endl;

    return 0;
}
