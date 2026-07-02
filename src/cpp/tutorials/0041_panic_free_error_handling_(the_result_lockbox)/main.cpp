#include <iostream>
#include <string>
#include <variant>

// THE RESULT ALIAS (The Secure Error Lockbox)
// This variant holds EITHER a successful float (temperature)
// OR a string containing an error message. It cannot hold both.
using SensorResult = std::variant<float, std::string>;

// THE DETERMINISTIC FUNCTION
// Zero 'throw' statements. Zero invisible crashes.
SensorResult read_engine_temperature(int sensor_id)
{
    // Simulating a broken sensor
    if (sensor_id == 404)
    {
        // Instead of crashing the engine, we safely return an error string
        return "CRITICAL_ERROR: Sensor 404 is offline or damaged.";
    }

    // If everything is fine, we return the pure data
    float current_temp = 85.5f;
    return current_temp; 
}

int main()
{
    std::cout << "--- Tactical Diagnostic System ---\n\n";

    // SECURE ERROR CHECKING
    // We check Sensor 1 (Online)
    std::cout << "Polling Sensor 1...\n";
    SensorResult result_one = read_engine_temperature(1);

    if (std::holds_alternative<float>(result_one))
    {
        std::cout << "[SUCCESS] Engine Temp: " << std::get<float>(result_one) << "C\n\n";
    }

    // We check Sensor 404 (Offline)
    std::cout << "Polling Sensor 404...\n";
    SensorResult result_two = read_engine_temperature(404);

    // THE FORCED CHECK
    // The compiler forces the developer to check what is inside the bunker.
    // If it's a string, we know exactly how to handle the failure gracefully.
    if (std::holds_alternative<std::string>(result_two))
    {
        std::string error_msg = std::get<std::string>(result_two);
        std::cout << "[SYSTEM FAILURE PREVENTED] -> " << error_msg << "\n";
        std::cout << "[ACTION] Rerouting logic to backup sensor...\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Diagnostic System ---

Polling Sensor 1...
[SUCCESS] Engine Temp: 85.5C

Polling Sensor 404...
[SYSTEM FAILURE PREVENTED] -> CRITICAL_ERROR: Sensor 404 is offline or damaged.
[ACTION] Rerouting logic to backup sensor...

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

