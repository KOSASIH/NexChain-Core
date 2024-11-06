const Web3 = require('web3');
const web3 = new Web3(Web3.givenProvider || "http://localhost:8545");

const contractAddress = 'YOUR_CONTRACT_ADDRESS_HERE'; // Replace with your deployed contract address
const contractABI = [
    // ABI of the TokenSale contract
    {
        "inputs": [],
        "name": "buyTokens",
        "outputs": [],
        "stateMutability": "payable",
        "type": "function"
    },
    {
        "inputs": [],
        "name": "withdraw",
        "outputs": [],
        "stateMutability": "nonpayable",
        "type": "function"
    }
];

const tokenSaleContract = new web3.eth.Contract(contractABI, contractAddress);

document.getElementById('buyTokens').onclick = async () => {
    const amount = document.getElementById('amount').value;
    const accounts = await web3.eth.getAccounts();
    await tokenSaleContract.methods.buyTokens().send({ from: accounts[0], value: web3.utils.toWei(amount, 'ether') });
    alert(`Successfully purchased tokens for ${amount} ETH!`);
};

window.onload = () => {
    console.log("Token Sale DApp is ready!");
};
