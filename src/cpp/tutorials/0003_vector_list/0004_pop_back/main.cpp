#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Just as .push_back() adds an item to the end of the list,
    // .pop_back() removes the very last item from the list.
    // It automatically shrinks the vector's size and frees up the memory.
    
    std::vector<std::string> securityDetail = {"Worf", "Tasha", "Odo", "Tuvok"};

    std::cout << "Current security detail has " << securityDetail.size() << " officers.\n";
    std::cout << "The officer at the back of the line is " << securityDetail[3] << ".\n";

    // Stand down! The crisis is over. Tuvok is being reassigned to Voyager.
    // We remove the last officer from the vector.
    securityDetail.pop_back();

    std::cout << "\nReassignment complete. Officer departing...\n\n";

    // The size has automatically shrunk back to 3
    std::cout << "The security detail now has " << securityDetail.size() << " officers.\n";

    // Because Tuvok is gone, Odo is now the last person in line again (Index 2)
    std::cout << "The officer at the back of the line is now " << securityDetail[2] << ".\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Current security detail has 4 officers.
The officer at the back of the line is Tuvok.

Reassignment complete. Officer departing...

The security detail now has 3 officers.
The officer at the back of the line is now Odo.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

