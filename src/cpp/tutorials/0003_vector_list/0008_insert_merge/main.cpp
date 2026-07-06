#include <iostream>
#include <string>
#include <vector>

int main()
{
    // To combine (or merge) two vectors, we use the .insert() command.
    // We have to tell the computer three things:
    // 1. WHERE to put the new data (at the end of the first list)
    // 2. WHERE to start copying from the second list (the beginning)
    // 3. WHERE to stop copying from the second list (the end)

    std::vector<std::string> enterpriseTeam = {"Picard", "Riker", "Data"};
    std::vector<std::string> defiantTeam = {"Sisko", "Kira", "Dax"};

    std::cout << "--- Initial Fleet Status ---\n";
    std::cout << "Enterprise Team has " << enterpriseTeam.size() << " officers.\n";
    std::cout << "Defiant Team has " << defiantTeam.size() << " officers.\n";

    // Initiate Joint Operation! 
    // We insert the entire Defiant team into the back of the Enterprise team.
    enterpriseTeam.insert(enterpriseTeam.end(), defiantTeam.begin(), defiantTeam.end());

    std::cout << "\n--- Joint Strike Force Assembled! ---\n";

    // The Enterprise vector has now absorbed the Defiant vector
    std::cout << "The combined strike force now has " << enterpriseTeam.size() << " officers:\n";

    for (int i = 0; i < enterpriseTeam.size(); i++)
    {
        std::cout << "Officer " << (i + 1) << ": " << enterpriseTeam[i] << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Initial Fleet Status ---
Enterprise Team has 3 officers.
Defiant Team has 3 officers.

--- Joint Strike Force Assembled! ---
The combined strike force now has 6 officers:
Officer 1: Picard
Officer 2: Riker
Officer 3: Data
Officer 4: Sisko
Officer 5: Kira
Officer 6: Dax

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

