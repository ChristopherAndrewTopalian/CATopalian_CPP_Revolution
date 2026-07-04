#include <iostream>
#include <string>
#include <filesystem> // The 21st-Century File System

// THE CUSTOM FUNCTION
// It does one job perfectly: it finds the path and returns 
// it as a clean, human-readable string.
std::string get_current_directory()
{
    // We return the path directly. No variables needed!
    return std::filesystem::current_path().string();
}

int main()
{
    std::cout << "--- Tactical Directory Scanner (Modular) ---\n\n";

    // CALL THE FUNCTION
    // We catch the returned string exactly like 'let myPath = get_current_directory();'
    std::string my_path = get_current_directory();

    // SIMPLE OUTPUT
    std::cout << "[SYSTEM] Current working directory:\n";
    std::cout << "-> " << my_path << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore(10000, '\n');
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Directory Scanner (Modular) ---

[SYSTEM] Current working directory:
-> D:\_1Code\_0Cpp\0_git\CATopalian_CPP_Revolution\CATopalian_CPP_Revolution\src\cpp\tutorials\0019_get_current_working_directory_custom_function\002

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

