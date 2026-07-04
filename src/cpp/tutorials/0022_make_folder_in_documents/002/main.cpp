#include <iostream>
#include <string>
#include <filesystem>
#include <cstdlib>

// THE CUSTOM FUNCTION
// Pointer-free, mathematically secure infrastructure building.
void create_starfleet_directory(std::string folder_name)
{
    // THE AUTO SHIELD
    // The OS tries to hand us a raw pointer, but we catch it with 'auto'.
    // No asterisks (*). No legacy C types. The compiler handles the dirt.
    auto os_drive = std::getenv("USERPROFILE");

    // THE SAFETY GATE
    // We simply check if the OS actually found anything.
    if (!os_drive)
    {
        std::cout << "[CRITICAL ERROR] Could not locate the user's home drive.\n";
        return; 
    }

    // THE SECURE BUNKER
    // We instantly teleport the OS data into our safe, modern String.
    std::string secure_home = os_drive;

    // Build the exact path cleanly
    std::string full_path = secure_home + "\\Documents\\" + folder_name;

    // The Easy Button: Create the infrastructure
    if (std::filesystem::create_directories(full_path))
    {
        std::cout << "[SUCCESS] Infrastructure built at: " << full_path << "\n";
    }
    else
    {
        std::cout << "[SYSTEM] Folder already active at: " << full_path << "\n";
    }
}

int main()
{
    std::cout << "--- Starfleet Academy: Environmental Setup ---\n\n";

    create_starfleet_directory("StarfleetData");
    create_starfleet_directory("StarfleetData\\MissionLogs");

    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore(10000, '\n');
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Starfleet Academy: Environmental Setup ---

[SYSTEM] Folder already active at: C:\Users\energy\Documents\StarfleetData
[SUCCESS] Infrastructure built at: C:\Users\energy\Documents\StarfleetData\MissionLogs
[SUCCESS] Infrastructure built at: C:\Users\energy\Documents\StarfleetData\PersonnelFiles

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

