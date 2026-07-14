#include <iostream>
#include <string>
#include <unordered_map>

// Define the "Inner Object" as a clean struct (Data-Oriented Design)
struct Robot {
    std::string type;
    int health;
    int x;
    int y;
};

int main() {
    // Create the "Object of Objects" Hash Table
    // Think of this like: let fleet = {};
    // It maps a String (the ID) to a Robot struct.
    std::unordered_map<std::string, Robot> fleet;

    // Populate the world database instantly!
    fleet["rover_01"] = {"Scout", 100, 45, 120};
    fleet["rover_02"] = {"Tank", 500, 10, 20};
    fleet["drone_01"] = {"Air", 50, 200, 300};

    // INSTANT LOOKUP (No loops required!)
    // Read a value just like JavaScript
    std::cout << "Rover 01 Health: " << fleet["rover_01"].health << "\n";

    // UPDATE A VALUE
    // Update the position of drone_01
    fleet["drone_01"].x = 250;
    fleet["drone_01"].y = 350;

    std::cout << "Drone 01 moved to X: " << fleet["drone_01"].x << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
    // Memory is automatically and safely cleaned up here!
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Rover 01 Health: 100
Drone 01 moved to X: 250

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

