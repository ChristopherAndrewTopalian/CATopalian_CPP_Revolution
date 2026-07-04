#include <iostream>
#include <string>
#include <filesystem> // The 21st-Century File System

// THE CUSTOM FUNCTION
// Perfectly mirrors JavaScript's fs.mkdirSync()
void create_new_folder(std::string folder_path)
{
    // std::filesystem::create_directories automatically handles the logic.
    // If the folder already exists, it doesn't crash, it just returns false!
    if (std::filesystem::create_directories(folder_path))
    {
        std::cout << "[SUCCESS] Folder created safely: " << folder_path << "\n";
    }
    else
    {
        std::cout << "[SYSTEM] Folder already exists (or could not be created): " << folder_path << "\n";
    }
}

// THE MAIN ENGINE
int main()
{
    std::cout << "--- Tactical Folder Generator ---\n\n";

    // THE CLEAN STRING PATH
    // Notice there is no 'L' prefix and no LPCWSTR pointers. 
    // It is just a perfectly normal, human-readable string.
    std::string target_location = "C:\\Users\\energy\\Desktop\\ourNewFolder";

    std::cout << "[SYSTEM] Attempting to build infrastructure at target coordinates...\n";

    // EXECUTE THE FUNCTION
    create_new_folder(target_location);

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore(10000, '\n');
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Folder Generator ---

[SYSTEM] Attempting to build infrastructure at target coordinates...
[SUCCESS] Folder created safely: C:\Users\energy\Desktop\ourNewFolder

Press Enter to Exit...
*/

/*
--- Tactical Folder Generator ---

[SYSTEM] Attempting to build infrastructure at target coordinates...
[SYSTEM] Folder already exists (or could not be created): C:\Users\energy\Desktop\ourNewFolder

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

