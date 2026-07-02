// Count Number of Lines in a Text File

#include <iostream>
#include <fstream>
#include <string>

int countLinesInFile(std::string filename)
{
    std::ifstream inputFile(filename);

    if (!inputFile.is_open())
    {
        std::cerr << "Error: Could not open file: " << filename << "\n";
        return -1; // Pro Trick: Return -1 to signal an error, since 0 is a valid line count!
    }

    int lineCount = 0;
    std::string line;

    while (std::getline(inputFile, line))
    {
        lineCount++;
    }

    inputFile.close();
    
    // Hand the final data back to the Orchestrator
    return lineCount;
}

int main()
{
    // Lock the data in main
    const std::string filename = "ourTextFile.txt";

    // Call the engine and store the result
    int totalLines = countLinesInFile(filename);

    // Only display the result if the engine didn't throw our -1 error flag
    if (totalLines != -1)
    {
        std::cout << "Number of lines in the file: " << totalLines << "\n";
    }

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Number of lines in the file: 3

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

