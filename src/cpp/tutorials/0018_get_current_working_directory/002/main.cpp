#include <iostream>
#include <string>
#include <filesystem> // The 21st-Century File System Library

int main()
{
    std::cout << "--- Tactical Directory Scanner ---\n\n";

    // THE JAVASCRIPT WAY
    // We ask the filesystem for the current path, and immediately 
    // convert it to a standard string using .string()

    std::string current_dir = std::filesystem::current_path().string();

    // SIMPLE OUTPUT
    // No 'wcout', no wide characters, just standard human-readable text!

    std::cout << "[SYSTEM] Current working directory:\n";
    std::cout << "-> " << current_dir << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore(10000, '\n');
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Directory Scanner ---

[SYSTEM] Current working directory:
-> D:\_1Code\_0Cpp\0_git\CATopalian_CPP_Revolution\CATopalian_CPP_Revolution\src\cpp\tutorials\0018_get_current_working_directory\002

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

