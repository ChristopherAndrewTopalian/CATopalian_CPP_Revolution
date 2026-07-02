#include <iostream>
#include <string>
#include <unordered_map> // The 21st-Century Dictionary
#include <optional>

// THE DICTIONARY ALIAS (Rule 5 compliance)
// We create a clean nickname for our map. It maps a String Key to a String Value.
// This acts EXACTLY like a JavaScript Object.
using DroneRegistry = std::unordered_map<std::string, std::string>;

// THE SECURE LOOKUP BUNKER
// Passed purely by value. We check the dictionary safely.
// ========================================================
std::optional<std::string> get_drone_status(DroneRegistry bunker_map, std::string search_key)
{
    // C++20 gives us the ".contains()" method. 
    // It safely checks if the key exists without creating a memory error.
    if (bunker_map.contains(search_key))
    {
        return bunker_map.at(search_key); // Teleport the pristine value back
    }
    
    return std::nullopt; // Return the empty lockbox if not found
}

int main()
{
    std::cout << "--- Tactical Fleet Registry ---\n\n";

    // INITIALIZE LIKE JAVASCRIPT
    // Look at how clean this is. No pointers, no malloc. 
    // Just pure, readable data mapping.
    DroneRegistry fleet_status = {
        {"Alpha-1", "Airborne"},
        {"Bravo-2", "Refueling"},
        {"Charlie-3", "Maintenance"}
    };

    std::string target = "Bravo-2";
    std::cout << "Requesting status for: " << target << "...\n";

    // PERFORM THE SECURE LOOKUP
    std::optional<std::string> result = get_drone_status(fleet_status, target);

    if (result.has_value())
    {
        std::cout << "STATUS ACQUIRED: " << result.value() << "\n";
    }
    else
    {
        std::cout << "ERROR: Drone ID not found in registry.\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Fleet Registry ---

Requesting status for: Bravo-2...
STATUS ACQUIRED: Refueling

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

