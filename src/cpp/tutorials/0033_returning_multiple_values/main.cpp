#include <iostream>
#include <string>

// THE DATA PACKET
// This acts exactly like a JSON object in JavaScript.
// It simply holds our data. No logic, no pointers.
struct DiagnosticData 
{
    float voltage;
    float temperature;
    std::string status;
};

// THE PURE FUNCTION
// Zero ampersands. We build the packet locally and 
// return the entire object by value.
DiagnosticData get_system_diagnostics() 
{
    DiagnosticData reading;
    
    // Simulating raw hardware data gathering
    reading.voltage = 12.4f;
    reading.temperature = 42.8f;
    reading.status = "Nominal";

    return reading; // The compiler safely teleports this back
}

int main() 
{
    std::cout << "--- System Diagnostics ---\n";

    // Receive the data package exactly like a scripting language
    DiagnosticData current_status = get_system_diagnostics();

    // Output the safe, isolated data
    std::cout << "Voltage:     " << current_status.voltage << "V\n";
    std::cout << "Temperature: " << current_status.temperature << "C\n";
    std::cout << "Status:      " << current_status.status << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- System Diagnostics ---
Voltage:     12.4V
Temperature: 42.8C
Status:      Nominal

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

