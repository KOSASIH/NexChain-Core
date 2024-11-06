#include <iostream>
#include <fstream>
#include "config/config.json"
#include "utils/logger.h"
#include "utils/crypto.h"

void loadConfig(const std::string& configFilePath) {
    std::ifstream configFile(configFilePath);
    if (!configFile.is_open()) {
        Logger::error("Could not open config file: " + configFilePath);
        exit(EXIT_FAILURE);
    }
    // Load configuration settings (e.g., network settings, consensus parameters)
    // This is a placeholder for actual JSON parsing logic
    Logger::info("Configuration loaded successfully.");
}

int main(int argc, char* argv[]) {
    Logger::info("Starting NexChain...");

    // Load configuration
    loadConfig("src/main/config/config.json");

    // Initialize blockchain components (e.g., network, consensus)
    // Placeholder for initialization logic

    Logger::info("NexChain is running.");
    
    // Main event loop (placeholder)
    while (true) {
        // Handle incoming transactions, blocks, etc.
    }

    return 0;
}
