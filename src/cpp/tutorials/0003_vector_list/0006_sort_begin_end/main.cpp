#include <iostream>
#include <vector>
#include <algorithm> // CRITICAL: This library contains the sort command!

int main()
{
    // To sort a vector, we use the std::sort() command from the <algorithm> library.
    // We must tell the command exactly where to start and where to finish.
    // By default, C++ will sort the items in ascending order (lowest to highest).
    
    std::vector<int> sensorContacts = {8500, 1200, 450, 9300, 3100};

    std::cout << "--- Raw Sensor Data ---\n";
    for (int i = 0; i < sensorContacts.size(); i++)
    {
        std::cout << "Contact " << (i + 1) << ": " << sensorContacts[i] << " km\n";
    }

    // Lock targets and sort them by proximity
    std::sort(sensorContacts.begin(), sensorContacts.end());

    std::cout << "\n--- Sorted Threats (Closest to Furthest) ---\n";
    for (int i = 0; i < sensorContacts.size(); i++)
    {
        std::cout << "Contact " << (i + 1) << ": " << sensorContacts[i] << " km\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Raw Sensor Data ---
Contact 1: 8500 km
Contact 2: 1200 km
Contact 3: 450 km
Contact 4: 9300 km
Contact 5: 3100 km

--- Sorted Threats (Closest to Furthest) ---
Contact 1: 450 km
Contact 2: 1200 km
Contact 3: 3100 km
Contact 4: 8500 km
Contact 5: 9300 km

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

