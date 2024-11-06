#!/bin/bash

# Check if the contract file is provided
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <contract_file>"
    exit 1
fi

CONTRACT_FILE=$1

# Load environment variables
source .env

# Deploy the contract using a hypothetical CLI tool
echo "Deploying contract from file: $CONTRACT_FILE"
nexchain-cli deploy --file "$CONTRACT_FILE" --network "$NETWORK" --private-key "$PRIVATE_KEY"

if [ $? -eq 0 ]; then
    echo "Contract deployed successfully!"
else
    echo "Failed to deploy contract."
    exit 1
fi
