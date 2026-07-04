#include <iostream>
#include <vector>
#include <string>

// THE DATA BLUEPRINT
// The order here matters: First Name, Last Name, Score.
struct Person {
    std::string firstName;
    std::string lastName;
    int score;
};

int main()
{
    std::cout << "--- Tactical Roster ---\n\n";

    // THE CLEAN ARRAY
    // Zero periods. We just feed it the data in the correct order
    std::vector<Person> world = {
        {
            "Jane",
            "Doe",
            95
        },

        {
            "Bob",
            "Smith",
            80
        }
    };

    // DYNAMIC PUSH
    // Exactly the same clean syntax when adding new data on the fly.
    world.push_back({ "Sam", "Jones", 72 });

    // THE LOOP
    // 'auto' does all the heavy lifting.
    for (auto e : world)
    {
        std::cout << "-> " << e.firstName << " " << e.lastName 
            << " | Score: " << e.score << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Roster ---

-> Jane Doe | Score: 95
-> Bob Smith | Score: 80
-> Sam Jones | Score: 72
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

