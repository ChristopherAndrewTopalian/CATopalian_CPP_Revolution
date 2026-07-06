#include <iostream>

int main()
{
    // A 'float' is a decimal number that takes up exactly 4 bytes of memory.
    // A 'double' takes up 8 bytes. In hardware and robotics, using a float 
    // saves precious memory and often processes much faster.
    
    // CRITICAL: You must put an 'f' at the end of the number!
    float sensorCalibration = 47.5f;

    std::cout << "The forward sensor array is calibrated to " << sensorCalibration << " terahertz.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
The forward sensor array is calibrated to 47.5 terahertz.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

