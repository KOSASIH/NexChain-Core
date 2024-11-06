#include <gtest/gtest.h>
#include "sdk/sdk.h"

TEST(FullDAppFlowTest, CompleteDAppFunctionality) {
    SDK sdk;

    // Deploy the DApp
    std::string contractCode = R"(
        contract SimpleTodo {
            string[] todos;

            function add(string todo) {
                todos.push(todo);
            }

            function getAll() {
                return todos;
            }
        }
    )";
    sdk.deployContract(contractCode);

    // Simulate adding todos
    sdk.callContract("SimpleTodoAddress", "add", {"Buy groceries"});
    sdk.callContract("SimpleTodoAddress", "add", {"Read a book"});

    // Retrieve all todos
    std::string result = sdk.callContract("SimpleTodoAddress", " getAll", {});
    EXPECT_EQ(result, "Buy groceries, Read a book"); // Placeholder for expected result
}
