#include <iostream>
#include <string>
#include <vector>

// ========================================================
// 1. THE ENGINE CLASS (The Blueprint)
// We bundle our secure variables and pure functions into 
// one clean, modular command center.
// ========================================================
class CatopalianEngine 
{
private:
    // Internal state. std::vector manages its own memory invisibly. 
    // No manual pointers or memory allocation required here.
    std::vector<std::string> active_protocols;
    bool engine_running;

public:
    // ----------------------------------------------------
    // CONSTRUCTOR (Initialization)
    // Automatically runs the instant the engine is spawned.
    // ----------------------------------------------------
    CatopalianEngine() 
    {
        engine_running = true;
        active_protocols.push_back("CORE_DIAGNOSTICS");
        std::cout << "[SYSTEM] Engine initialized securely on the stack.\n";
    }

    // ----------------------------------------------------
    // DESTRUCTOR (The Automatic Incinerator)
    // We do NOT need the 'delete' keyword anywhere in our code.
    // When the engine leaves its scope, C++ automatically calls 
    // this and destroys all internal vectors and variables safely.
    // ----------------------------------------------------
    ~CatopalianEngine() 
    {
        std::cout << "[SYSTEM] Engine gracefully shut down. Zero memory leaks.\n";
    }

    // ----------------------------------------------------
    // PURE COMMAND METHODS
    // ----------------------------------------------------
    void engage_protocol(std::string protocol) 
    {
        active_protocols.push_back(protocol);
        std::cout << "[ACTION] Protocol engaged: " << protocol << "\n";
    }

    int get_active_protocol_count() 
    {
        return active_protocols.size();
    }
};

// ========================================================
// 2. THE MAIN BATTLESPACE
// ========================================================
int main() 
{
    std::cout << "--- Tactical Engine Initialization ---\n\n";

    // 3. THE CATOPALIAN INSTANTIATION
    // Legacy developers write: CatopalianEngine* command = new CatopalianEngine();
    // We simply write this:
    CatopalianEngine main_command;

    // 4. EXECUTE LOGIC (The JavaScript Bridge)
    // Because we used pure Stack allocation, we don't use the messy pointer arrow (->).
    // We use the clean, standard dot operator (.), exactly like JavaScript.
    main_command.engage_protocol("DRONE_SWARM_UPLINK");
    main_command.engage_protocol("RADAR_SWEEP");
    main_command.engage_protocol("THERMAL_IMAGING");

    std::cout << "\nActive Protocols Running: " << main_command.get_active_protocol_count() << "\n\n";

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    // 5. THE MAGIC HAPPENS HERE
    // The second 'return 0;' hits, 'main_command' is out of bounds.
    // The C++ compiler instantly drops the stack and incinerates the engine.
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Engine Initialization ---

[SYSTEM] Engine initialized securely on the stack.
[ACTION] Protocol engaged: DRONE_SWARM_UPLINK
[ACTION] Protocol engaged: RADAR_SWEEP
[ACTION] Protocol engaged: THERMAL_IMAGING

Active Protocols Running: 4

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

