// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

import "@openzeppelin/contracts/token/ERC20/IERC20.sol";

contract TokenSale {
    address public admin;
    IERC20 public token;
    uint256 public rate; // Number of tokens per wei
    uint256 public soldTokens;

    event TokensPurchased(address indexed buyer, uint256 amount);

    constructor(IERC20 _token, uint256 _rate) {
        admin = msg.sender;
        token = _token;
        rate = _rate;
    }

    function buyTokens() public payable {
        require(msg.value > 0, "Send ETH to buy tokens");
        uint256 tokensToBuy = msg.value * rate;
        soldTokens += tokensToBuy;
        token.transfer(msg.sender, tokensToBuy);
        emit TokensPurchased(msg.sender, tokensToBuy);
    }

    function withdraw() public {
        require(msg.sender == admin, "Only admin can withdraw");
        payable(admin).transfer(address(this).balance);
    }
}
