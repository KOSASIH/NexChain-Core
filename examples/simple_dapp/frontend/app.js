const Web3 = require('web3');
const web3 = new Web3(Web3.givenProvider || "http://localhost:8545");

const contractAddress = 'YOUR_CONTRACT_ADDRESS_HERE'; // Replace with your deployed contract address
const contractABI = [
    // ABI of the SimpleTodo contract
    {
        "inputs": [{ "internalType": "string", "name": "task", "type": "string" }],
        "name": "add",
        "outputs": [],
        "stateMutability": "nonpayable",
        "type": "function"
    },
    {
        "inputs": [{ "internalType": "uint256", "name": "index", "type": "uint256" }],
        "name": "get",
        "outputs": [
            { "internalType": "string", "name": "task", "type": "string" },
            { "internalType": "bool", "name": "completed", "type": "bool" }
        ],
        "stateMutability": "view",
        "type": "function"
    },
    {
        "inputs": [{ "internalType": "uint256", "name": "index", "type": "uint256" }],
        "name": "complete",
        "outputs": [],
        "stateMutability": "nonpayable",
        "type": "function"
    },
    {
        "inputs": [],
        "name": "getAll",
        "outputs": [
            {
                "components": [
                    { "internalType": "string", "name": "task", "type": "string" },
                    { "internalType": "bool", "name": "completed", "type": "bool" }
                ],
                "internalType": "struct SimpleTodo.Todo[]",
                "name": "",
                "type": "tuple[]"
            }
        ],
        "stateMutability": "view",
        "type": "function"
    }
];

const todoContract = new web3.eth.Contract(contractABI, contractAddress);

document.getElementById('addTask').onclick = async () => {
    const task = document.getElementById('task').value;
    const accounts = await web3.eth.getAccounts();
    await todoContract.methods.add(task).send({ from: accounts[0] });
    loadTasks();
};

async function loadTasks() {
    const tasks = await todoContract.methods.getAll().call();
    const taskList = document.getElementById('taskList');
    taskList.innerHTML = '';
    tasks.forEach((todo, index) => {
        const listItem = document.createElement('li');
        listItem.textContent = `${todo.task} - ${todo.completed ? 'Completed' : 'Pending'}`;
        const completeButton = document.createElement('button');
        completeButton.textContent = 'Complete';
        completeButton.onclick = async () => {
            await todoContract.methods.complete(index).send({ from: accounts[0] });
            loadTasks();
        };
        listItem.appendChild(completeButton);
        taskList.appendChild(listItem);
    });
}

window.onload = loadTasks;
