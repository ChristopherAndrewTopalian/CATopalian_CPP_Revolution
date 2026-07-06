#include <iostream>

int main()
{
    // The 'const' keyword locks the variable. It can never be changed while the program runs.
    // It is standard practice to name constants in ALL_CAPS.
    const double MAXIMUM_WARP = 9.975;
    const int LIFE_SUPPORT_PIN = 4;

    std::cout << "Life support is wired to hardware pin " << LIFE_SUPPORT_PIN << ".\n";
    std::cout << "Vessel maximum velocity is locked at Warp " << MAXIMUM_WARP << ".\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Life support is wired to hardware pin 4.
Vessel maximum velocity is locked at Warp 9.975.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

