#include <iostream>
#include <string> // Required to use the std::string data type

int main()
{
    // A string holds multiple characters (text) and uses double quotes
    std::string academyCadet = "Jean-Luc";
    std::string assignment = "Starfleet Academy";

    std::cout << "Cadet " << academyCadet << " is reporting to " << assignment << ".\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Cadet Jean-Luc is reporting to Starfleet Academy.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

