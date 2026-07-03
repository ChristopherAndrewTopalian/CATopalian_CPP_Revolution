#include <iostream>
#include <string>
#include <unordered_map>
#include <variant>

// THE DYNAMIC VALUE (The JS Hybrid)
// We define a variant that can hold text, whole numbers, 
// decimals, OR true/false booleans. 
using JSValue = std::variant<std::string, int, float, bool>;

// THE DYNAMIC OBJECT (The JS Dictionary)
// We map a standard String key to our dynamic JSValue.
// This perfectly recreates the flexibility of a JavaScript Object.
using JSObject = std::unordered_map<std::string, JSValue>;

// THE SAFE EXTRACTOR
// A helper function to safely pull data out of our JSObject.
// Passed purely by value. Zero pointers.
void inspect_object_property(JSObject data_object, std::string key)
{
    std::cout << "Inspecting key ['" << key << "']: ";

    // First, check if the key actually exists (Zero crashes!)
    if (!data_object.contains(key))
    {
        std::cout << "UNDEFINED\n";
        return;
    }

    // Extract the multi-type value safely
    JSValue property = data_object.at(key);

    // Determine what type it is currently holding and print it
    if (std::holds_alternative<std::string>(property))
    {
        std::cout << "[String] " << std::get<std::string>(property) << "\n";
    }
    else if (std::holds_alternative<int>(property))
    {
        std::cout << "[Integer] " << std::get<int>(property) << "\n";
    }
    else if (std::holds_alternative<float>(property))
    {
        std::cout << "[Float] " << std::get<float>(property) << "\n";
    }
    else if (std::holds_alternative<bool>(property))
    {
        // Booleans print as 1 (true) or 0 (false) natively
        std::cout << "[Boolean] " << (std::get<bool>(property) ? "TRUE" : "FALSE") << "\n";
    }
}

int main()
{
    std::cout << "--- Tactical Dynamic Object Engine ---\n\n";

    // INSTANTIATE EXACTLY LIKE JAVASCRIPT
    // Look at how clean this is! We mix strings, ints, floats, 
    // and booleans all in the exact same object structure.
    JSObject drone_config = {
        {"callsign", "Ghost-Actual"},
        {"max_speed", 125},
        {"shield_frequency", 88.5f},
        {"is_stealth_active", true}
    };

    // DOING STUFF WITH THE OBJECT
    // We can pass the entire object by value into our functions
    inspect_object_property(drone_config, "callsign");
    inspect_object_property(drone_config, "shield_frequency");
    inspect_object_property(drone_config, "is_stealth_active");

    // Testing a key that doesn't exist (Safely handled!)
    inspect_object_property(drone_config, "weapons_hot");

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Dynamic Object Engine ---

Inspecting key ['callsign']: [String] Ghost-Actual
Inspecting key ['shield_frequency']: [Float] 88.5
Inspecting key ['is_stealth_active']: [Boolean] TRUE
Inspecting key ['weapons_hot']: UNDEFINED

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

