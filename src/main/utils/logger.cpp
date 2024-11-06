#include "logger.h"

void Logger::info(const std::string& message) {
    std::cout << "[INFO] " << message << std::endl;
    // Optionally write to a log file
}

void Logger::error(const std::string& message) {
    std::cerr << "[ERROR] " << message << std::endl;
    // Optionally write to a log file
}
