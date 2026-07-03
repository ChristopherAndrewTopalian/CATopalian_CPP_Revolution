#include <iostream>
#include <string>

// we must define the structure first
struct User {
    std::string name;
    int age;
    bool isActive;
};

int main() {
    // Instantiate using designated initializers
    User user = {
        .name = "Alice",
        .age = 30,
        .isActive = true
    };

    std::cout << user.name << " is " << user.age << " years old.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Alice is 30 years old.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

