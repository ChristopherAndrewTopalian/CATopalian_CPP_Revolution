#include <iostream>
#include <string>
#include <vector>
#include <filesystem> // The 21st-Century File System

// THE CUSTOM FUNCTION
// It promises to return a clean array (vector) of strings.
std::vector<std::string> get_files_in_folder(std::string target_folder)
{
    // Create an empty array to hold our file names
    std::vector<std::string> file_list;

    // THE COZY LOOP
    // We ask the filesystem to look inside the folder.
    // 'auto' figures out what the file object is automatically!
    for (auto file_item : std::filesystem::directory_iterator(target_folder))
    {
        // We grab the name of the file and push it into our array
        file_list.push_back(file_item.path().filename().string());
    }

    return file_list; // Teleport the filled array back safely!
}

// THE MAIN ENGINE
int main()
{
    std::cout << "--- Tactical Folder Scanner ---\n\n";

    // Grab the current directory using our easy trick from the last lesson
    std::string current_dir = std::filesystem::current_path().string();

    std::cout << "[SYSTEM] Scanning: " << current_dir << "\n\n";

    // CALLING THE FUNCTION
    // We use 'auto' to catch the returned array so we don't have 
    // to type out 'std::vector<std::string>' again. Pure simplicity.
    auto my_files = get_files_in_folder(current_dir);

    // DISPLAY THE RESULTS
    std::cout << "Files detected:\n";
    for (auto file_name : my_files)
    {
        std::cout << "-> " << file_name << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Folder Scanner ---

[SYSTEM] Scanning: D:\_1Code\_0Cpp\0_git\CATopalian_CPP_Revolution\CATopalian_CPP_Revolution\src\cpp\tutorials\0069_get_files_in_folder

Files detected:
-> main.cpp
-> our_test.exe

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

