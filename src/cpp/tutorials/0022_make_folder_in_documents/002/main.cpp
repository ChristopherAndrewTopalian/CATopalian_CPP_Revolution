#include <iostream>
#include <string>
#include <filesystem> // The 21st-Century File System
#include <cstdlib>    // Allows us to read OS environment variables securely

// THE CUSTOM FUNCTION
// Dynamically finds the user's Documents folder and builds infrastructure.
void create_starfleet_directory(std::string folder_name)
{
    // Get the Home Directory (Like Node.js os.homedir())
    // On Windows systems, "USERPROFILE" automatically returns "C:\Users\YourName"
    const char* home_drive = std::getenv("USERPROFILE");

    // Safety check: If for some reason the OS doesn't know where the home drive is
    if (home_drive == nullptr)
    {
        std::cout << "[CRITICAL ERROR] Could not locate the user's home drive.\n";
        return; // Abort the function safely!
    }

    // Build the exact path cleanly using standard strings
    // We glue the Home Drive + Documents + Our Custom Folder Name
    std::string full_path = std::string(home_drive) + "\\Documents\\" + folder_name;

    // The Easy Button: Create it safely
    // std::filesystem::create_directories automatically builds the whole path.
    if (std::filesystem::create_directories(full_path))
    {
        std::cout << "[SUCCESS] Infrastructure built at: " << full_path << "\n";
    }
    else
    {
        std::cout << "[SYSTEM] Folder already active at: " << full_path << "\n";
    }
}

// THE MAIN ENGINE
int main()
{
    std::cout << "--- Starfleet Academy: Environmental Setup ---\n\n";

    // Call the function just like you would in JavaScript or LSL!
    create_starfleet_directory("StarfleetData");
    
    // You can instantly reuse it to build multiple folders
    create_starfleet_directory("StarfleetData\\MissionLogs");
    create_starfleet_directory("StarfleetData\\PersonnelFiles");

    // Standardized Exit Pattern
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

