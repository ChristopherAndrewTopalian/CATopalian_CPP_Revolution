#include <iostream>
#include <vector>
#include <string>

struct Person {
    std::string firstName;
    std::string lastName;
    int score;
};

int main()
{
    std::vector<Person> world =
    {
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

    // Create a clean, empty array for the winners
    std::vector<Person> high_scorers;

    // Loop through the world
    for (auto p : world)
    {
        if (p.score > 90)
        {
            // Push them into the new array
            high_scorers.push_back(p);
        }
    }

    // Now 'high_scorers' only contains Jane and Joan
    for (auto e : high_scorers)
    {
        std::cout << e.firstName << " is elite!\n";
    }

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Jane is elite!
Joan is elite!
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

