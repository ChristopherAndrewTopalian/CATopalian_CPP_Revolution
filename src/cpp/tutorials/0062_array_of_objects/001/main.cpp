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
            .score = 95
        },

        {
            .firstName = "Bob", 
            .score = 80
        }
    };

    // Push a new object dynamically
    world.push_back(
        {
            .firstName = "Sam",
            .score = 72
        }
    );

    // Loop through the array by value 
    // We use 'auto' here so the language figures out the type, just like 'let'
    for (auto e : world)
    {
        std::cout << e.firstName << " has a score of: " << e.score << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

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

