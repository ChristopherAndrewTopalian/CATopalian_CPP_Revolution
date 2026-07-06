#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Required for unique

int main()
{
    // C++ Quirks: std::unique only moves unique items to the front
    // It leaves "ghost" duplicates at the back because it cannot shrink the vector.
    // We must use a combo-move with .erase() to actually delete the leftover trash.
    // NOTE: std::unique ONLY removes duplicates that are right next to each other

    std::vector<std::string> sensorEchoes = {"Borg", "Borg", "Borg", "Romulan", "Klingon", "Klingon"};

    std::cout << "--- Raw Sensor Feed ---\n";
    std::cout << "Total contacts detected: " << sensorEchoes.size() << "\n\n";

    // The Combo Move: 
    // 1. std::unique groups the real targets at the front and points to where the trash begins.
    // 2. .erase() takes that starting point and chops off everything to the .end() of the vector.
    sensorEchoes.erase(std::unique(sensorEchoes.begin(), sensorEchoes.end()), sensorEchoes.end());

    std::cout << "--- Filtered Sensor Feed ---\n";
    std::cout << "Actual unique targets: " << sensorEchoes.size() << "\n";
    
    for (int i = 0; i < sensorEchoes.size(); i++)
    {
        std::cout << "Target " << (i + 1) << ": " << sensorEchoes[i] << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Raw Sensor Feed ---
Total contacts detected: 6

--- Filtered Sensor Feed ---
Actual unique targets: 3
Target 1: Borg
Target 2: Romulan
Target 3: Klingon

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

