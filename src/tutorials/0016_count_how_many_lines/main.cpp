// Count Number of Lines in a Text File

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // open text file
    std::ifstream inputFile("ourTextFile.txt");

    // check if text file opened
    if (!inputFile.is_open())
    {
        std::cerr << "File won't open file."
        << "\n";

        // return an error code
        return 1;
    }

    // variable to store how many lines found in text file
    int lineCount = 0;

    // variable to store each line of text read from text file
    std::string line;

    // read text file line by line and count lines
    while (std::getline(inputFile, line))
    {
        lineCount++;
    }

    // close the file
    inputFile.close();

    // show the total number of lines
    std::cout << "Number of lines in the file: "
    << lineCount << "\n";

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

