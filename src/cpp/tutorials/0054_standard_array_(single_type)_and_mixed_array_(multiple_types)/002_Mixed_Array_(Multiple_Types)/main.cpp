#include <iostream>
#include <vector>
#include <string>
#include <variant>

// Define our mixed type: It can be EITHER an int OR a string
using MixedValue = std::variant<int, std::string>;

int main() {
    // Create the array using our new mixed type
    std::vector<MixedValue> mixed_array = {
        42, 
        "Warp Core", 
        1701, 
        "Deflector Dish"
    };

    // We can even push new mixed values into it dynamically
    mixed_array.push_back(99);
    mixed_array.push_back("Shields up");

    // Read the array
    for (auto item : mixed_array)
    {
        // Check if the current item holds an integer
        if (std::holds_alternative<int>(item)) {
            // Extract the integer by value
            auto number = std::get<int>(item);
            std::cout << "Number: " << number << "\n";
        } 
        // Check if the current item holds a string
        else if (std::holds_alternative<std::string>(item)) {
            // Extract the string by value
            auto text = std::get<std::string>(item);
            std::cout << "String: " << text << "\n";
        }
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Number: 42
String: Warp Core
Number: 1701
String: Deflector Dish
Number: 99
String: Shields up

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

