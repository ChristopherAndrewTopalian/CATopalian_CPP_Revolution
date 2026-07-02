#include <iostream>
#include <string>
#include <queue>   // The 21st-Century Action Buffer
#include <variant>

// THE COMMAND PACKETS
// Pure data structs. No pointers, no logic inside them.
struct MoveCommand { float x, y, z; };
struct FireCommand { std::string weapon_system; };
struct ScanCommand { int radius; };

// THE MULTI-TYPE PAYLOAD
using EngineCommand = std::variant<MoveCommand, FireCommand, ScanCommand>;

// THE COMMAND EXECUTOR (The Engine Core)
// Processes a single command entirely by value.
void execute_command(EngineCommand cmd)
{
    if (std::holds_alternative<MoveCommand>(cmd))
    {
        auto move = std::get<MoveCommand>(cmd);
        std::cout << "[ACTION] Thrusters engaged. Moving to coordinates: " 
                  << move.x << ", " << move.y << ", " << move.z << "\n";
    }
    else if (std::holds_alternative<FireCommand>(cmd))
    {
        auto fire = std::get<FireCommand>(cmd);
        std::cout << "[ACTION] Weapons hot. Firing " << fire.weapon_system << "!\n";
    }
    else if (std::holds_alternative<ScanCommand>(cmd))
    {
        auto scan = std::get<ScanCommand>(cmd);
        std::cout << "[ACTION] Radar sweeping at " << scan.radius << "m radius...\n";
    }
}

int main()
{
    std::cout << "--- Tactical Command Queue Engine ---\n\n";

    // THE SECURE QUEUE (First-In, First-Out)
    // Instantiated purely on the stack. No 'new' or 'delete'.
    std::queue<EngineCommand> action_buffer;

    // QUEUEING ACTIONS (The Scripting Bridge)
    // We load up the queue with different commands seamlessly.
    std::cout << "[SYSTEM] Receiving remote telemetry commands...\n\n";
    action_buffer.push(MoveCommand{45.0f, 90.5f, 120.0f});
    action_buffer.push(ScanCommand{500});
    action_buffer.push(FireCommand{"EMP_PULSE"});
    action_buffer.push(MoveCommand{0.0f, 0.0f, 0.0f}); // RTB (Return to Base)

    // THE DETERMINISTIC ENGINE LOOP
    // This is the heartbeat of the architecture. It reads exactly 
    // like a high-level scripting event loop.
    while (!action_buffer.empty())
    {
        // Extract the next command from the front of the queue securely
        EngineCommand current_action = action_buffer.front();

        // Execute it
        execute_command(current_action);

        // Safely destroy and remove the command from the queue
        action_buffer.pop(); 
    }

    std::cout << "\n[SYSTEM] Action buffer empty. Returning to standby.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Command Queue Engine ---

[SYSTEM] Receiving remote telemetry commands...

[ACTION] Thrusters engaged. Moving to coordinates: 45, 90.5, 120
[ACTION] Radar sweeping at 500m radius...
[ACTION] Weapons hot. Firing EMP_PULSE!
[ACTION] Thrusters engaged. Moving to coordinates: 0, 0, 0

[SYSTEM] Action buffer empty. Returning to standby.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

