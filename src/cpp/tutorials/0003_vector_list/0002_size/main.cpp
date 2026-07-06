#include <iostream>
#include <string>
#include <vector> // Required to use vectors

int main()
{
    // A std::vector always knows exactly how much data it holds.
    // You can check this at any time using the .size() command.
    // CRITICAL NOTE: While the index starts at 0, the .size() command 
    // counts normally (1, 2, 3, etc.).
    
    std::vector<std::string> awayTeam = {"Riker", "Data", "Worf", "Crusher", "La Forge"};

    std::cout << "Scanning transporter pad...\n";
    
    // We ask the vector to tell us its current size
    std::cout << "There are exactly " << awayTeam.size() << " members on the away team.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Scanning transporter pad...
There are exactly 5 members on the away team.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

