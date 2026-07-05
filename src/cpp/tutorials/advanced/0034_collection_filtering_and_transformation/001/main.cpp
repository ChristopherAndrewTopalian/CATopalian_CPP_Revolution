#include <iostream>
#include <vector>
#include <string>

// THE DATA UNIT
// A pure data structure containing sensor metrics.
struct TelemetryPacket
{
    int device_id;
    float reading;
};

// THE PIPE FUNCTION
// Receives a full vector copy, processes it inside the bunker,
// and returns a fresh, isolated vector. Zero references.
std::vector<TelemetryPacket> filter_critical_packets(std::vector<TelemetryPacket> stream, float threshold)
{
    std::vector<TelemetryPacket> critical_bunker;

    for (size_t i = 0; i < stream.size(); i++)
    {
        if (stream[i].reading > threshold)
        {
            critical_bunker.push_back(stream[i]);
        }
    }

    return critical_bunker; // Instantly transferred via native Move Semantics
}

int main()
{
    // Create the original dataset
    std::vector<TelemetryPacket> original_stream;
    original_stream.push_back({101, 14.2f});
    original_stream.push_back({102, 98.6f}); // Critical
    original_stream.push_back({103, 33.1f});
    original_stream.push_back({104, 112.4f}); // Critical

    std::cout << "Total Packets Processed: " << original_stream.size() << "\n";

    // Pass through the pipe to generate an isolated subset
    std::vector<TelemetryPacket> alerts = filter_critical_packets(original_stream, 50.0f);

    std::cout << "Critical Alerts Isolated: " << alerts.size() << "\n\n";

    for (size_t i = 0; i < alerts.size(); i++)
    {
        std::cout << "Device ID: " << alerts[i].device_id 
        << " | Intensity: " << alerts[i].reading << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Total Packets Processed: 4
Critical Alerts Isolated: 2

Device ID: 102 | Intensity: 98.6
Device ID: 104 | Intensity: 112.4

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

