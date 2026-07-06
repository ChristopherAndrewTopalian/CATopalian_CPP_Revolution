#include <iostream>
#include <string>
#include <vector>
#include <variant> // The 21st-Century answer to void* and type-casting

// THE VARIANT DEFINITION
// A Payload can hold a string, an int, OR a float. 
// It can only hold ONE at a time, stored cleanly by value.
using Payload = std::variant<std::string, int, float>;

// THE SECURE COMS PROCESSOR
// Processes the mixed data payload safely with zero pointers.
void process_payload(Payload packet)
{
    std::cout << "Processing Packet: ";

    // std::holds_alternative checks what type is currently inside the bunker
    if (std::holds_alternative<std::string>(packet))
    {
        // std::get extracts the explicit type safely
        std::string text = std::get<std::string>(packet);
        std::cout << "[TEXT INSTR] -> " << text << "\n";
    }
    else if (std::holds_alternative<int>(packet))
    {
        int command_code = std::get<int>(packet);
        std::cout << "[CMD CODE]  -> System Command #" << command_code << "\n";
    }
    else if (std::holds_alternative<float>(packet))
    {
        float coordinate = std::get<float>(packet);
        std::cout << "[COORD DATA] -> Position Offset: " << coordinate << "\n";
    }
}

int main()
{
    std::cout << "--- Secure Multi-Type Pipeline ---\n\n";

    // CREATE A MIXED VECTOR BY VALUE
    // This looks and acts exactly like a flexible JavaScript array
    std::vector<Payload> communication_bus;

    // Load different types into the exact same array layout
    communication_bus.push_back("INITIALIZE_SYSTEM"); // String
    communication_bus.push_back(101);                  // Integer Code
    communication_bus.push_back(45.75f);               // Float Coordinate
    communication_bus.push_back("SHUTDOWN_PERIMETER"); // String

    // RUN THROUGH THE SECURE PIPELINE
    for (size_t i = 0; i < communication_bus.size(); i++)
    {
        process_payload(communication_bus[i]);
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Secure Multi-Type Pipeline ---

Processing Packet: [TEXT INSTR] -> INITIALIZE_SYSTEM
Processing Packet: [CMD CODE]  -> System Command #101
Processing Packet: [COORD DATA] -> Position Offset: 45.75
Processing Packet: [TEXT INSTR] -> SHUTDOWN_PERIMETER

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

