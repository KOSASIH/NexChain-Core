#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <iostream>
#include <fstream>
#include <ctime>

class Logger {
public:
    static void info(const std::string& message);
    static void error(const std::string& message);
};

#endif // LOGGER_H
