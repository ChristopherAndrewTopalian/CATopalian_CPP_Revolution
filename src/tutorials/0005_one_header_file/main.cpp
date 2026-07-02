// Our main.cpp file uses the CONSOLE.h file

#include <iostream>
#include <string>
#include "CONSOLELOG.h"

int main()
{
    consoleLog("Hi Everyone");

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Hi Everyone

Press Enter to Exit
*/