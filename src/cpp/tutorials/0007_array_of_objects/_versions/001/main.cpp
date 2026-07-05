// array_of_objects

// Array of Objects - Zero Ampersand Paradigm

#include <iostream>
#include <string>
#include <vector>

struct Person {
    std::string name;
    int age;
};

int main()
{
    // Initializing our "Array of Objects"
    std::vector<Person> people = {
        {
            "Alice",
            25
        },

        {
            "Bob",
            30
        },

        {
            "Jane",
            28
        }
    };

    // The CATopalian Loop: Pure Data-Oriented indexing. Zero ampersands.
    // We access the memory directly using [i], bypassing the need for reference variables.
    for (int i = 0; i < people.size(); i++)
    {
        std::cout << "Name: " << people[i].name 
        << ", Age: " << people[i].age << "\n";
    }

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Name: Alice, Age: 25
Name: Bob, Age: 30
Name: Jane, Age: 28

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

