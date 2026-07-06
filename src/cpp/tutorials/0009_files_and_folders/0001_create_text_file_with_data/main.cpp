// Create Text File with Data

#include <iostream>
#include <fstream> // Required for file operations

int main()
{
    // Open file for writing
    std::ofstream outputFile("ourTextFile.txt");

    // The Professional Check: Did the file actually open?
    if (outputFile.is_open())
    {
        outputFile << "Hi Everyone\n";
        outputFile.close();
        std::cout << "Data written successfully.\n";
    }
    else
    {
        std::cerr << "Error: Could not open file for writing.\n";
        return 1; // Return a non-zero value to signal an error to the OS
    }

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Data written successfully.

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

