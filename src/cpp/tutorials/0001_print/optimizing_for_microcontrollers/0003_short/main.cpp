#include <iostream>

int main()
{
    // A 'short' integer uses only 2 bytes of memory (instead of 4 for a standard 'int').
    // It can only hold numbers between -32,768 and 32,767. 
    // This is perfect for microcontrollers where memory is incredibly tight 
    // and you know the number will never exceed that limit.
    
    short activeProbes = 142;
    short hullIntegrity = 100;

    std::cout << "Hull integrity is at " << hullIntegrity << " percent.\n";
    std::cout << "There are currently " << activeProbes << " diagnostic probes deployed.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Hull integrity is at 100 percent.
There are currently 142 diagnostic probes deployed.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

