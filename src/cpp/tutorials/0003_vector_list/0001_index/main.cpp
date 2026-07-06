#include <iostream>
#include <string>
#include <vector> // This library must be included to use vectors

int main()
{
    // A std::vector is a dynamic list. 
    // In C++ (like most languages), lists are "zero-indexed".
    // This means the very first item is located at position 0.

    std::vector<std::string> bridgeCrew = {"Picard", "Riker", "Data", "Worf"};

    std::cout << "The commanding officer (Index 0) is " << bridgeCrew[0] << ".\n";

    std::cout << "The tactical officer (Index 3) is " << bridgeCrew[3] << ".\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
The commanding officer (Index 0) is Picard.
The tactical officer (Index 3) is Worf.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

