#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // The 21st-Century Data Transformation Engine

// THE DATA PAYLOAD
struct RadarContact 
{
    std::string callsign;
    int threat_level; // 0 to 100
};

// THE SECURE FILTER
// Extracts high-threat targets without touching the original array.
std::vector<RadarContact> isolate_high_threats(std::vector<RadarContact> grid)
{
    std::vector<RadarContact> filtered_bunker;

    // std::copy_if acts exactly like JavaScript's array.filter()
    // It safely copies data into the new bunker based on a Lambda condition.
    std::copy_if(grid.begin(), grid.end(), std::back_inserter(filtered_bunker), 
        [](RadarContact target) 
        { 
            return target.threat_level >= 80; // Only keep threats 80 or higher
        });

    return filtered_bunker; // Return the brand-new, clean array
}

// THE SECURE SORT
// Sorts the array highest-to-lowest without mutating global memory.
std::vector<RadarContact> prioritize_targets(std::vector<RadarContact> grid)
{
    // std::sort organizes the local copy perfectly.
    // The Lambda tells it exactly how to compare two items.
    std::sort(grid.begin(), grid.end(), 
        [](RadarContact a, RadarContact b) 
        { 
            return a.threat_level > b.threat_level; // Highest threat first
        });

    return grid; // Teleport the sorted array back securely
}

int main()
{
    std::cout << "--- Tactical Data Transformation Engine ---\n\n";

    // THE MASTER DATA (The Immutable Truth)
    std::vector<RadarContact> master_radar_grid = {
        {"Alpha-1", 25},
        {"Bogey-X", 95},
        {"Delta-4", 10},
        {"Unknown-Y", 88}
    };

    std::cout << "[SYSTEM] Master Grid contains " << master_radar_grid.size() << " contacts.\n\n";

    // THE CATOPALIAN PIPELINE
    // Notice how the data flows safely from one function to the next, 
    // exactly like a high-level scripting pipeline.

    std::vector<RadarContact> active_threats = isolate_high_threats(master_radar_grid);
    std::vector<RadarContact> prioritized_threats = prioritize_targets(active_threats);

    // OUTPUT THE RESULTS
    std::cout << "[ALERT] High-Priority Targets Isolated:\n";
    for (size_t i = 0; i < prioritized_threats.size(); i++)
    {
        std::cout << "-> " << prioritized_threats[i].callsign 
                  << " (Threat: " << prioritized_threats[i].threat_level << ")\n";
    }

    // PROOF OF ARCHITECTURAL SAFETY:
    // The original master_radar_grid is still perfectly intact and unchanged!
    std::cout << "\n[SYSTEM DIAGNOSTIC] Master Grid remains uncorrupted. Size: " 
              << master_radar_grid.size() << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Data Transformation Engine ---

[SYSTEM] Master Grid contains 4 contacts.

[ALERT] High-Priority Targets Isolated:
-> Bogey-X (Threat: 95)
-> Unknown-Y (Threat: 88)

[SYSTEM DIAGNOSTIC] Master Grid remains uncorrupted. Size: 4

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

