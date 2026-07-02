#include <iostream>
#include <string>
#include <vector>
#include <functional> // The 21st-Century Event Engine tool

// ========================================================
// 1. THE EVENT ALIAS
// We define what an event looks like.
// This says: "An Action is any function that takes a string by value."
// ========================================================
using Action = std::function<void(std::string)>;

// ========================================================
// 2. THE SECURE EVENT BUS
// We pass the Action purely by value. Zero function pointers.
// ========================================================
void trigger_radar_event(std::string target_name, Action callback)
{
    std::cout << "[SYSTEM] Radar sweep complete.\n";
    std::cout << "[SYSTEM] Target isolated: " << target_name << "\n";
    
    // Execute the safe behavior passed into the bunker
    callback(target_name); 
}

int main()
{
    std::cout << "--- Tactical Event Engine ---\n\n";

    // 3. THE LAMBDA (Anonymous Function)
    // This looks and acts EXACTLY like a JavaScript arrow function: () => {}
    // It creates a block of logic we can store in a safe variable.
    Action deploy_intercept = [](std::string target) 
    {
        std::cout << "[ACTION] Deploying interceptor drones to intercept " << target << "!\n";
    };

    Action log_warning = [](std::string target) 
    {
        std::cout << "[ACTION] Logging warning: " << target << " entered restricted airspace.\n";
    };

    // 4. PASSING BEHAVIOR AS DATA
    // We hand the logic into the function without any dangerous memory routing.
    std::cout << "--- Scenario 1 ---\n";
    trigger_radar_event("Hostile_UAV_01", deploy_intercept);

    std::cout << "\n--- Scenario 2 ---\n";
    trigger_radar_event("Civilian_Helicopter", log_warning);

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Event Engine ---

--- Scenario 1 ---
[SYSTEM] Radar sweep complete.
[SYSTEM] Target isolated: Hostile_UAV_01
[ACTION] Deploying interceptor drones to intercept Hostile_UAV_01!

--- Scenario 2 ---
[SYSTEM] Radar sweep complete.
[SYSTEM] Target isolated: Civilian_Helicopter
[ACTION] Logging warning: Civilian_Helicopter entered restricted airspace.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

