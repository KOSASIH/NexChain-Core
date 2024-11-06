#include <iostream>
#include "sdk/sdk.h"

int main() {
    SDK sdk;

    // Example contract code for a simple token sale
    std::string contractCode = R"(
        contract TokenSale {
            address owner;
            uint price;
            mapping(address => uint) balances;

            function TokenSale(uint _price) {
                owner = msg.sender;
                price = _price;
            }

            function buy(uint amount) {
                require(msg.value == amount * price);
                balances[msg.sender] += amount;
            }

            function getBalance() {
                return balances[msg.sender];
            }
        }
    )";

    // Deploy the contract
    sdk.deployContract(contractCode);

    // Simulate buying tokens
    sdk.callContract("TokenSaleAddress", "buy", {"10"}); // Simulate buying 10 tokens

    // Simulate checking balance
    std::string balance = sdk.callContract("TokenSaleAddress", "getBalance", {});
    std::cout << "Your token balance: " << balance << std::endl;

    return 0;
}
