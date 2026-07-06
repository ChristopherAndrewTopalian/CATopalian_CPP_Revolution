// bool

#include <iostream>

int main()
{
    bool shieldsActive = true;

    // Default C++ behavior (prints 1 or 0)
    std::cout << "Shield status (numeric): " << shieldsActive << "\n";

    // Human-readable behavior using std::boolalpha
    std::cout << "Shield status (text): " << std::boolalpha << shieldsActive;

    // Standardized Exit Pattern
    std::cout << "\n\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Shield status (numeric): 1
Shield status (text): true

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

