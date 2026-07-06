#include <iostream>
#include <vector>
#include <string>

int main() {
    // A dynamically sizing array of strings
    std::vector<std::string> names = {"Kirk", "Picard", "Sisko"};

    // Adding to the array (exactly like .push() in JavaScript)
    names.push_back("Janeway");

    // Iterating through the array by value (no pointers or references needed)
    for (auto name : names) {
        std::cout << name << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Kirk
Picard
Sisko
Janeway

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

