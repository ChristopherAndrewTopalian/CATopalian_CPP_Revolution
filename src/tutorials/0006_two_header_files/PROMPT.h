// PROMPT.h header file

#ifndef PROMPT
#define PROMPT
#include <iostream>
#include <string>

// No ampersands! We return a string instead.
std::string prompt()
{
    std::string userInput;
    std::cin >> userInput;
    return userInput;
}

#endif