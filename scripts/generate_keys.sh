#!/bin/bash

# Generate a new private key using OpenSSL
PRIVATE_KEY=$(openssl rand -hex 32)

# Generate the corresponding public key (assuming a hypothetical method)
PUBLIC_KEY=$(echo "$PRIVATE_KEY" | xxd -r -p | openssl ec -pubout -outform PEM)

# Display the keys
echo "Private Key: $PRIVATE_KEY"
echo "Public Key: $(echo "$PUBLIC_KEY" | awk 'NR>1 {print}' | tr -d '\n')"

# Optionally, save the keys to a file
echo "Do you want to save the keys to a file? (y/n)"
read -r SAVE_KEYS

if [ "$SAVE_KEYS" == "y" ]; then
    echo "$PRIVATE_KEY" > private_key.txt
    echo "$PUBLIC_KEY" > public_key.txt
    echo "Keys saved to private_key.txt and public_key.txt"
fi
