#!/bin/bash

# Check if the required tools are installed
REQUIRED_TOOLS=("git" "node" "npm" "nexchain-cli")

for TOOL in "${REQUIRED_TOOLS[@]}"; do
    if ! command -v $TOOL &> /dev/null; then
        echo "$TOOL is not installed. Please install it before running this script."
        exit 1
    fi
done

# Clone the repository if it doesn't exist
if [ ! -d "nexchain" ]; then
    echo "Cloning the NexChain repository..."
    git clone https://github.com/yourusername/nexchain.git
fi

cd nexchain || exit

# Install dependencies
echo "Installing dependencies..."
npm install

# Create a .env file if it doesn't exist
if [ ! -f ".env" ]; then
    echo "Creating .env file..."
    echo "NETWORK=development" > .env
    echo "PRIVATE_KEY=your_private_key_here" >> .env
fi

echo "Environment setup complete!"
