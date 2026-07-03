#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <variant>

// THE JAVASCRIPT BRICKS
// We bring back our dynamic types from the last tutorial.
using JSValue = std::variant<std::string, int, float, bool>;
using JSObject = std::unordered_map<std::string, JSValue>;

// THE ARRAY OF OBJECTS
// We define a flat vector that holds our JSObjects.
// This is perfectly equivalent to a JSON Array: [{...}, {...}]
using JSArray = std::vector<JSObject>;

// THE SAFE SCANNER (Iteration)
void scan_fleet_status(JSArray fleet)
{
    std::cout << "[SYSTEM] Scanning " << fleet.size() << " objects in the array...\n\n";

    // THE RANGE-BASED FOR LOOP
    // This looks and acts EXACTLY like JavaScript's "for...of" loop!
    // We pass the object by value to ensure we don't mutate the original array.
    for (JSObject drone : fleet) 
    {
        // Safely extract the ID (assuming it exists and is a string)
        if (drone.contains("id") && std::holds_alternative<std::string>(drone.at("id")))
        {
            std::string current_id = std::get<std::string>(drone.at("id"));
            std::cout << "-> Drone ID: " << current_id << "\n";

            // Safely check active status
            if (drone.contains("active") && std::holds_alternative<bool>(drone.at("active")))
            {
                bool is_active = std::get<bool>(drone.at("active"));
                std::cout << "   Status: " << (is_active ? "ONLINE" : "OFFLINE") << "\n";
            }
        }
        std::cout << "-----------------------\n";
    }
}

int main()
{
    std::cout << "--- Tactical JSON Array Engine ---\n\n";

    // INSTANTIATE LIKE JAVASCRIPT
    // Look at how beautiful and readable this is. No pointers. No 'new'.
    // Just pure, clean data structures.
    JSArray active_swarm = {
        {
            {"id", "Alpha-1"},
            {"speed", 150},
            {"active", true}
        },
        {
            {"id", "Bravo-2"},
            {"speed", 0},
            {"active", false}
        },
        {
            {"id", "Charlie-3"},
            {"speed", 300},
            {"active", true},
            {"payload", "EMP_Blast"} // We can even mix in extra keys!
        }
    };

    // EXECUTE THE PIPELINE
    scan_fleet_status(active_swarm);

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical JSON Array Engine ---

[SYSTEM] Scanning 3 objects in the array...

-> Drone ID: Alpha-1
   Status: ONLINE
-----------------------
-> Drone ID: Bravo-2
   Status: OFFLINE
-----------------------
-> Drone ID: Charlie-3
   Status: ONLINE
-----------------------
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

