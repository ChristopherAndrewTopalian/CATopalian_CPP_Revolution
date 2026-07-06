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
    // Create the array of objects (Notice how much this looks like JSON!)
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

    // Push a new object dynamically
    world.push_back(
        {
            .firstName = "Sam",
            .lastName = "Reed",
            .score = 72
        }
    );

    // Filter: only print names of people scoring above 95
    bool found_any = false;

    for (auto e : world)
    {
        if (e.score > 95)
        {
            std::cout << e.firstName << " has a score of: " << e.score << "\n";
            found_any = true;
        }
    }

    if (!found_any)
    {
        std::cout << "No one has a score above 95\n";
    }

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Joan has a score of: 97
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

