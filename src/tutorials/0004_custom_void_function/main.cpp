// Custom Void Function - Pure Pass-by-Value Paradigm
#include <iostream>
#include <string>

// ZERO AMPERSANDS, ZERO ASTERISKS
// Memory safe, leak-proof, and clean readability.
void consoleLog(std::string message)
{
    std::cout << message << "\n";
}

int main()
{
    consoleLog("Hi Everyone");

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// Compile with modern optimization:
// g++ -O3 main.cpp -o our_test.exe

/*
Hi Everyone

Press Enter to Exit
*/