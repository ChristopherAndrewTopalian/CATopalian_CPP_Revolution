// Custom Function - Create Text File with Data

#include <iostream>
#include <fstream>
#include <string>

// The Professional Pattern: const + & for speed and safety
void writeToFile(std::string filename, std::string content)
{
    std::ofstream outputFile(filename);

    // Sanity Check: Ensure the engine actually has access to the disk
    if (outputFile.is_open())
    {
        outputFile << content << "\n";
        outputFile.close();
        std::cout << "Data written to " << filename << " successfully.\n";
    }
    else
    {
        // Use std::cerr for errors
        std::cerr << "Error: Could not open " << filename << " for writing.\n";
    }
}

int main()
{
    std::string filename = "ourTextFile.txt";
    std::string content = "Hi Everyone";

    writeToFile(filename, content);

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Data written to ourTextFile.txt successfully.

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

