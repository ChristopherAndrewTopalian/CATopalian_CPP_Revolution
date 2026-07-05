#include <iostream>
#include <vector>
#include <string>

// THE BLUEPRINT
struct Entity {
    std::string name;
    int score;
};

int main() 
{
    std::cout << "--- Tactical Entity Tracker ---\n\n";

    // THE ARRAY OF OBJECTS (Using Designated Initializers)
    std::vector<Entity> world = {
        {
            .name = "Jane",
            .score = 95
        },
        {
            .name = "Bob",
            .score = 80
        }
    };

    // DYNAMIC PUSH
    world.push_back({
        .name = "Sam",
        .score = 72
    });

    // THE CATOPALIAN LOOP (The One True Way)
    // We loop using 'i' for index. It mirrors JavaScript perfectly.
    // It gives us read AND write access with zero ampersands or pointers!
    for (int i = 0; i < world.size(); i++)
    {
        std::cout << "* " << world[i].name << " has a score of: " << world[i].score << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore(10000, '\n');
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Tactical Entity Tracker ---

* Jane has a score of: 95
* Bob has a score of: 80
* Sam has a score of: 72

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

