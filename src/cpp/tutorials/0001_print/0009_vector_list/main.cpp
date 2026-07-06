#include <iostream>
#include <vector>
#include <string>

int main()
{
    // A C++ vector is a dynamic list of items. 
    std::vector<std::string> crewMembers = {"Captain", "Science Officer", "Engineer"};

    std::cout << "The second member of the crew is the " << crewMembers[1] << ".\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
The second member of the crew is the Science Officer.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

