#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Required for the reverse command

int main()
{
    // To flip a list upside down, we use the std::reverse() command.
    // NOTE: This does NOT sort the list in descending order! 
    // It simply takes the exact current order and flips it backwards.

    std::vector<std::string> navWaypoints = {"Earth", "Mars Base", "Jupiter Station", "Saturn Outpost"};

    std::cout << "--- Outward Flight Path ---\n";

    for (int i = 0; i < navWaypoints.size(); i++)
    {
        std::cout << "Jump " << (i + 1) << ": " << navWaypoints[i] << "\n";
    }

    // The mission is complete. We need to plot a course back home!
    // We tell the computer to start at the beginning and flip it to the end.
    std::reverse(navWaypoints.begin(), navWaypoints.end());

    std::cout << "\n--- Return Flight Path (Reversed) ---\n";

    for (int i = 0; i < navWaypoints.size(); i++)
    {
        std::cout << "Jump " << (i + 1) << ": " << navWaypoints[i] << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Outward Flight Path ---
Jump 1: Earth
Jump 2: Mars Base
Jump 3: Jupiter Station
Jump 4: Saturn Outpost

--- Return Flight Path (Reversed) ---
Jump 1: Saturn Outpost
Jump 2: Jupiter Station
Jump 3: Mars Base
Jump 4: Earth

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

