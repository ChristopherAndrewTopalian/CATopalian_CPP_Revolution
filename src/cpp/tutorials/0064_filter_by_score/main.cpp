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
    std::cout << "--- Tactical Roster: Data Extraction ---\n\n";

    // THE MAIN ARRAY
    // Our starting data. We safely skip '.lastName' thanks to the periods!
    std::vector<Person> world = {
        {
            .firstName = "Jane",
            .score = 95
        },
        {
            .firstName = "Bob",
            .score = 80
        },
        {
            .firstName = "Joan",
            .score = 97
        }
    };

    // THE EXTRACTION ARRAY
    // We create a clean, empty array waiting to catch the winners.
    std::vector<Person> high_scorers;

    // THE FILTER ENGINE (The CATopalian Loop)
    // We loop through the entire world securely.
    for (int i = 0; i < world.size(); i++)
    {
        if (world[i].score > 90)
        {
            // If they scored over 90, push a copy of them into the new array!
            high_scorers.push_back(world[i]);
        }
    }

    std::cout << "[SYSTEM] Extraction Complete. Displaying Elite Roster:\n\n";

    // VERIFYING THE EXTRACTION
    // Now we loop through our NEW array to prove they were successfully saved.
    // Notice we use 'i' again here securely.
    for (int i = 0; i < high_scorers.size(); i++)
    {
        std::cout << "* " << high_scorers[i].firstName << " is elite!\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore(10000, '\n');
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Tactical Roster: Data Extraction ---

[SYSTEM] Extraction Complete. Displaying Elite Roster:

* Jane is elite!
* Joan is elite!

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

