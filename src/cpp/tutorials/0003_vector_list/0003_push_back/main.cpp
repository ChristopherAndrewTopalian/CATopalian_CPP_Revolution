#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Unlike rigid arrays, a std::vector can grow dynamically while the program runs.
    // To add a new item, we use the .push_back() command. 
    // Just like the name implies, it pushes the new data to the very BACK of the list.
    
    std::vector<std::string> securityDetail = {"Worf", "Tasha", "Odo"};

    std::cout << "Initial security detail has " << securityDetail.size() << " officers.\n";

    // Red Alert! We need reinforcements. Let's add a new officer to the team.
    securityDetail.push_back("Tuvok");

    std::cout << "Reinforcements beamed aboard...\n";
    
    // The size has now automatically updated to 4!
    std::cout << "The security detail now has " << securityDetail.size() << " officers.\n";
    
    // Because it goes to the back, Tuvok is now the 4th item (Index 3)
    std::cout << "The newest officer at the back of the line is " << securityDetail[3] << ".\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Initial security detail has 3 officers.
Reinforcements beamed aboard...
The security detail now has 4 officers.
The newest officer at the back of the line is Tuvok.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

