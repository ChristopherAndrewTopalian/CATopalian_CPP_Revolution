#include <iostream>
#include <string>

// We define the blueprint for our object (Struct)
// This is the C++ equivalent of a simple JavaScript object literal.
struct Starship 
{
    std::string name;
    std::string classType;
    int registryNumber;
    bool shieldsActive;
};

int main()
{
    // We create an instance of the object
    Starship enterprise = {"Enterprise", "Galaxy", 1701, true};

    // CRITICAL LESSON: We cannot simply write 'std::cout << enterprise;'
    // We must build the print statement property by property using the "dot" notation!

    std::cout << "--- Tactical Overlay ---\n";
    std::cout << "Vessel: USS " << enterprise.name << "\n";
    std::cout << "Class: " << enterprise.classType << " Class\n";
    std::cout << "Registry: NCC-" << enterprise.registryNumber << "\n";

    // Using a quick ternary operator to print text instead of a 1 or 0 for the boolean
    std::cout << "Shield Status: " << (enterprise.shieldsActive ? "RAISED" : "LOWERED") << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Tactical Overlay ---
Vessel: USS Enterprise
Class: Galaxy Class
Registry: NCC-1701
Shield Status: RAISED

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

