#include <iostream>
#include <string>
#include <vector>

// THE BLUEPRINT
struct Person {
    std::string name;
    int age;
};

int main()
{
    std::cout << "--- Tactical Roster ---\n\n";

    // THE ARRAY OF OBJECTS
    // We use the periods (Designated Initializers) to keep the data 
    // strictly mapped, flexible, and perfectly readable.
    std::vector<Person> people = {
        {
            .name = "Alice",
            .age = 25
        },

        {
            .name = "Bob",
            .age = 30
        },

        {
            .name = "Jane",
            .age = 28
        }
    };

    // Pure Data-Oriented indexing. Zero ampersands. Zero pointers.
    // We access the memory directly using [i].
    for (int i = 0; i < people.size(); i++)
    {
        std::cout << "Name: " << people[i].name 
        << " | Age: " << people[i].age << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore(10000, '\n');
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Tactical Roster ---

Name: Alice | Age: 25
Name: Bob | Age: 30
Name: Jane | Age: 28

Press Enter to Exit...
*/