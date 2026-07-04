#include <iostream>
#include <vector>
#include <string>

// Define the shape of your object (Just like a JS Class or struct)
struct Entity {
    std::string name;
    int score;
};

int main() {
    // Create the array of objects (Notice how much this looks like JSON!)
    std::vector<Entity> world = {
        {.name = "Jane", .score = 95},
        {.name = "Bob",  .score = 80}
    };

    // Push a new object dynamically
    world.push_back({.name = "Sam", .score = 72});

    // Loop through the array by value 
    // We use 'auto' here so the language figures out the type, just like 'let'
    for (auto e : world) {
        std::cout << e.name << " has a score of: " << e.score << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Jane has a score of: 95
Bob has a score of: 80
Sam has a score of: 72
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

