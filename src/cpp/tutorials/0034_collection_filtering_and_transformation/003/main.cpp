#include <iostream>
#include <vector>

// 1. THE DATA UNIT
struct TelemetryPacket 
{
    int device_id;
    float reading;
};

// 2. THE SIMPLE SCRIPTING PIPE
// We still define the inputs clearly, but the inside is super clean.
std::vector<TelemetryPacket> filter_critical_packets(std::vector<TelemetryPacket> stream, float threshold)
{
    // Create an empty array to hold the alerts
    std::vector<TelemetryPacket> alerts;

    // The Cozy Loop: Reads exactly like a JavaScript 'for...of' loop!
    for (auto packet : stream) 
    {
        if (packet.reading > threshold) 
        {
            alerts.push_back(packet); // Just push it in!
        }
    }

    return alerts; // Teleport it back safely
}

int main()
{
    std::cout << "--- Tactical Sensor Engine ---\n\n";

    // 3. JS-STYLE INITIALIZATION
    // Looks exactly like a JSON array of objects
    std::vector<TelemetryPacket> original_stream = {
        { .device_id = 101, .reading = 14.2f },
        { .device_id = 102, .reading = 98.6f }, // Critical
        { .device_id = 103, .reading = 33.1f },
        { .device_id = 104, .reading = 112.4f } // Critical
    };

    // 4. THE 'AUTO' CATCH
    // We don't need to type the heavy vector name again.
    // 'auto' figures it out automatically, just like 'let'.
    auto critical_alerts = filter_critical_packets(original_stream, 50.0f);

    std::cout << "[SYSTEM] Found " << critical_alerts.size() << " critical alerts:\n";

    // 5. SIMPLE PRINTING LOOP
    for (auto alert : critical_alerts)
    {
        std::cout << "-> Device ID: " << alert.device_id << " | Intensity: " << alert.reading << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Sensor Engine ---

[SYSTEM] Found 2 critical alerts:
-> Device ID: 102 | Intensity: 98.6
-> Device ID: 104 | Intensity: 112.4

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

