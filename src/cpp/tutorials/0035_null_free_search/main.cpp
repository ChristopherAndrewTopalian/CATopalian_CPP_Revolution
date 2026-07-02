#include <iostream>
#include <vector>
#include <string>
#include <optional> // The 21st-Century tool for safe missing data

// THE DATA UNIT
struct RadarContact
{
    int id;
    std::string classification;
    float distance;
};

// THE SECURE SEARCH FUNCTION
// Returns an 'optional' lockbox by value. 
// Zero pointers. Zero risk of a null-dereference crash.
std::optional<RadarContact> scan_for_target(std::vector<RadarContact> grid, int target_id)
{
    for (size_t i = 0; i < grid.size(); i++)
    {
        // If we find it, we put the pristine copy into the lockbox and return it
        if (grid[i].id == target_id)
        {
            return grid[i]; 
        }
    }

    // If the loop finishes and nothing is found, we return an empty lockbox.
    // std::nullopt is completely safe and requires no memory management.
    return std::nullopt;
}

int main()
{
    // Build a test grid
    std::vector<RadarContact> active_grid;
    active_grid.push_back({105, "Friendly Drone", 12.5f});
    active_grid.push_back({404, "Unknown Aircraft", 85.2f});
    active_grid.push_back({909, "Weather Balloon", 40.1f});

    std::cout << "--- Radar Scan Initiated ---\n";

    // Perform the scan. We are looking for ID 404.
    // The result is safely stored in our local lockbox.
    std::optional<RadarContact> result = scan_for_target(active_grid, 404);

    // Safely check the lockbox BEFORE extracting the data
    if (result.has_value())
    {
        // .value() safely extracts the data object from the box
        std::cout << "Target Acquired!\n";
        std::cout << "Class: " << result.value().classification << "\n";
        std::cout << "Range: " << result.value().distance << " km\n";
    }
    else
    {
        std::cout << "Target not found in current sector.\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Radar Scan Initiated ---
Target Acquired!
Class: Unknown Aircraft
Range: 85.2 km

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

