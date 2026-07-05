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
    std::cout << "--- Tactical Roster Filter ---\n\n";

    // THE ARRAY OF OBJECTS (Using Designated Initializers)
    std::vector<Person> world = {
        {
            .firstName = "Jane",
            .lastName = "Doe",
            .score = 95
        },
        {
            .firstName = "Bob",
            .lastName = "Smith",
            .score = 80
        },
        {
            .firstName = "Joan",
            .lastName = "Lee",
            .score = 97
        }
    };

    // PUSH A NEW OBJECT DYNAMICALLY
    world.push_back(
        {
            .firstName = "Sam",
            .lastName = "Reed",
            .score = 72
        }
    );

    // THE FILTER ENGINE
    bool found_any = false;

    std::cout << "[SYSTEM] Searching for scores above 95...\n\n";

    // The CATopalian Loop: Pure, secure data indexing.
    for (int i = 0; i < world.size(); i++)
    {
        // Check if the current person meets our elite criteria
        if (world[i].score > 95)
        {
            std::cout << "* ELITE DETECTED: " << world[i].firstName 
                << " " << world[i].lastName 
                << " | Score: " << world[i].score << "\n";

            // Flip the flag so the system knows we found someone
            found_any = true; 
        }
    }

    // THE FAILSAFE
    // If the loop finished and our flag is still false, report it.
    if (!found_any)
    {
        std::cout << "* No one has a score above 95.\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Tactical Roster Filter ---

[SYSTEM] Searching for scores above 95...

* ELITE DETECTED: Joan Lee | Score: 97

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

