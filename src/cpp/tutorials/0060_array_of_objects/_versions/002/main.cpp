#include <iostream>
#include <vector>
#include <string>

// THE DATA BLUEPRINT
// The order here is strict: Name first, Score second.
struct Entity {
    std::string name;
    int score;
};

int main() 
{
    std::vector<Entity> world = {
        {
            "Jane",
            95
        },

        {
            "Bob",
            80
        }
    };

    // DYNAMIC PUSH
    // Exactly the same clean syntax when appending data on the fly.
    world.push_back({ "Sam", 72 });

    // THE LOOP
    // 'auto' figures out the type, keeping the loop visually clean.
    for (auto e : world) 
    {
        std::cout << "-> " << e.name << " has a score of: " << e.score << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Entity Tracker ---

-> Jane has a score of: 95
-> Bob has a score of: 80
-> Sam has a score of: 72

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

