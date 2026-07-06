//char

#include <iostream>

int main()
{
    char commandKey = 'X';

    std::cout << "Press the '" << commandKey << "' key to activate the thrusters.";

    // Standardized Exit Pattern
    std::cout << "\n\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Press the 'X' key to activate the thrusters.

Press Enter to Exit...
*/