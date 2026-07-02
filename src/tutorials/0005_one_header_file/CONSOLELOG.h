// CONSOLELOG.h header file

// CONSOLELOG.h

#ifndef CONSOLELOG
#define CONSOLELOG
#include <iostream>
#include <string>

void consoleLog(const std::string message)
{
    std::cout << message << "\n";
}

#endif