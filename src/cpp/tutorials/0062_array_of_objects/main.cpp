#include <iostream>
#include <vector>
#include <string>

// THE BLUEPRINT
struct Person {
    std::string firstName;
    std::string lastName;
    int score;
};

int main()
{
    std::cout << "--- Tactical Roster ---\n\n";

    // THE ARRAY OF OBJECTS
    // Notice how much this looks like JSON!
    // Because we use periods, we can safely skip '.lastName' without errors.
    std::vector<Person> world = {
        {
            .firstName = "Jane",
            .score = 95
        },

        {
            .firstName = "Bob", 
            .score = 80
        }
    };

    // PUSH A NEW OBJECT DYNAMICALLY
    world.push_back(
        {
            .firstName = "Sam",
            .score = 72
        }
    );

    // THE CATOPALIAN LOOP
    // Pure Data-Oriented indexing. Zero ampersands. 
    // We access the memory directly using [i], perfectly mirroring JavaScript.
    for (int i = 0; i < world.size(); i++)
    {
        std::cout << "* " << world[i].firstName 
        << " has a score of: " << world[i].score << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Tactical Roster ---

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

