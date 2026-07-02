#include <iostream>
#include <string>
#include <unordered_map>
#include <optional>

// THE PURE DATA UNIT
struct DroneData 
{
    std::string callsign;
    float altitude;
};

// THE ENGINE REGISTRY
// The central command that owns all the data.
using FleetRegistry = std::unordered_map<std::string, DroneData>;

// THE TRACKING LOGIC
// Instead of a pointer, the tracker just holds an ID string.
void execute_tracking_sweep(FleetRegistry central_command, std::string target_id)
{
    std::cout << "[TRACKER] Requesting coordinates for ID: " << target_id << "...\n";

    // Safely ask the dictionary. Zero risk of a dangling pointer crash.
    if (central_command.contains(target_id))
    {
        DroneData target = central_command.at(target_id);
        std::cout << "[SUCCESS] Target locked. Altitude: " << target.altitude << "m\n";
    }
    else
    {
        // If the drone was destroyed and removed from the dictionary, 
        // we just get a safe failure state. The engine keeps running!
        std::cout << "[ALERT] Target ID missing or destroyed. Reverting to patrol.\n";
    }
}

int main()
{
    std::cout << "--- Tactical ID Referencing Engine ---\n\n";

    // POPULATE THE REGISTRY
    FleetRegistry active_fleet = {
        {"BETA-1", {"Beta-Actual", 450.5f}},
        {"GHOST-9", {"Ghost-Recon", 1200.0f}}
    };

    // DRONE A TRACKS DRONE B
    // Drone A only knows the word "GHOST-9", it does not have a memory address.
    std::string my_target = "GHOST-9";

    std::cout << "--- Scenario 1: Target is Active ---\n";
    execute_tracking_sweep(active_fleet, my_target);

    // TARGET IS DESTROYED
    std::cout << "\n[COMBAT EVENT] Ghost-9 shot down. Removing from registry...\n";
    active_fleet.erase("GHOST-9"); // Safely deleted from the dictionary

    // DRONE A TRIES TO TRACK AGAIN
    // In legacy C++, this exact moment causes a catastrophic blue-screen crash.
    // In the Catopalian Paradigm, it handles beautifully.
    std::cout << "\n--- Scenario 2: Target is Destroyed ---\n";
    execute_tracking_sweep(active_fleet, my_target);

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical ID Referencing Engine ---

--- Scenario 1: Target is Active ---
[TRACKER] Requesting coordinates for ID: GHOST-9...
[SUCCESS] Target locked. Altitude: 1200m

[COMBAT EVENT] Ghost-9 shot down. Removing from registry...

--- Scenario 2: Target is Destroyed ---
[TRACKER] Requesting coordinates for ID: GHOST-9...
[ALERT] Target ID missing or destroyed. Reverting to patrol.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

