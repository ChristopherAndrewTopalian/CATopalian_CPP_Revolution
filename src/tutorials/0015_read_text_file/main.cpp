// Read a Text File

// Read a Text File

#include <iostream>
#include <string>
#include <fstream>

void displayFileContents(std::string filename)
{
    // open file for reading
    std::ifstream inputFile(filename);

    // check if the file is open
    if (!inputFile.is_open())
    {
        // Consolidated stream for efficiency
        std::cerr << "Error opening file: " << filename << "\n";
        return; // "Guard Clause" - exit the function early on failure
    }

    // read and display file contents
    std::string line;

    std::cout << "Contents of " << filename << ":\n";

    // std::getline is the professional standard for reading text files
    while (std::getline(inputFile, line))
    {
        std::cout << line << "\n";
    }

    // close the file
    inputFile.close();
}

int main()
{
    // Lock the data in main as well
    std::string filename = "ourTextFile.txt";

    displayFileContents(filename);

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Contents of ourTextFile.txt:
Hi Everyone
The day is very beautiful.
Very nice weather we are having.

Press Enter to Exit
*/