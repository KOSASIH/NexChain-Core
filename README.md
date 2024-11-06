<p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/"><a property="dct:title" rel="cc:attributionURL" href="https://github.com/KOSASIH/NexChain-Core">NexChain</a> by <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://www.linkedin.com/in/kosasih-81b46b5a">KOSASIH</a> is licensed under <a href="https://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Creative Commons Attribution 4.0 International<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1" alt=""><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1" alt=""></a></p>

# NexChain-Core
NexChain-Core is the foundational repository for the NexChain blockchain platform, providing the essential infrastructure, protocols, and libraries that drive the ecosystem. This repository includes the core components for consensus mechanisms, networking, blockchain management, and smart contract execution, all designed for high scalability, security, and interoperability. With comprehensive documentation and a robust testing framework, NexChain-Core empowers developers to build and deploy decentralized applications (dApps) efficiently, fostering innovation in the blockchain space.

# NexChain

NexChain is a high-performance decentralized application (DApp) framework designed to facilitate the development and deployment of blockchain-based applications. This repository contains the core components of the NexChain platform, including smart contracts, utility scripts, and example DApps.

## Features

- **Smart Contract Support**: Write and deploy smart contracts using Solidity.
- **DApp Framework**: A comprehensive framework for building decentralized applications.
- **Utility Scripts**: Scripts for deployment, environment setup, and key generation.
- **Example Projects**: Simple and advanced DApp examples to demonstrate usage.

## Getting Started

### Prerequisites

- Node.js (v14 or higher)
- npm (Node Package Manager)
- MetaMask (for interacting with the DApps)
- A local Ethereum node (e.g., Ganache) or access to a test network (e.g., Rinkeby)

### Installation

1. Clone the repository:

   ```bash
   1 git clone https://github.com/KOSASIH/NexChain-Core.git
   2 cd NexChain-Core
   ```

2. Install dependencies:

   ```bash
   1 npm install
   ```
   
3. Set up your environment:

   ```bash
   1 ./scripts/setup_env.sh
   ```
   
## Running Example DApps

1. Deploy the smart contracts for the example DApps:

   ```bash
   1 ./scripts/deploy.sh examples/simple_dapp/contract/SimpleTodo.sol
   2 ./scripts/deploy.sh examples/advanced_dapp/contract/TokenSale.sol
   ```
   
2. Open the example DApp frontend in your browser:

   - For the Simple DApp, open examples/simple_dapp/frontend/index.html.
   - For the Advanced DApp, open examples/advanced_dapp/frontend/index.html.

## Contributing

Contributions are welcome! Please read the CONTRIBUTING.md file for details on our code of conduct, and the process for submitting pull requests.

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgments
Thanks to the open-source community for their contributions and support..  

