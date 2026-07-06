#include <iostream>

int main()
{
    // The 'unsigned' keyword removes the ability to store negative numbers.
    // By reclaiming the negative sign bit, an 'unsigned short' doubles its 
    // positive limit from 32,767 up to exactly 65,535, still using only 2 bytes!
    // This is perfect for physical counts or distances that can never be less than zero.
    
    unsigned short orbitalDistance = 45500; 
    unsigned short activePersonnel = 60000;

    std::cout << "The station is maintaining a distance of " << orbitalDistance << " kilometers.\n";
    std::cout << "There are currently " << activePersonnel << " active personnel on board.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
The station is maintaining a distance of 45500 kilometers.
There are currently 60000 active personnel on board.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

