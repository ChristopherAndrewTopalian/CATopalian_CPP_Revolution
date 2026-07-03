#include <iostream>
#include <vector>
#include <string>

struct TelemetryPacket
{
    int device_id;
    float reading;
};

// Takes a full list, gives back a new list containing only
// the entries whose reading is above the threshold.
// Nothing about the original list is touched or changed.
std::vector<TelemetryPacket> filter_critical_packets(std::vector<TelemetryPacket> stream, float threshold)
{
    std::vector<TelemetryPacket> alerts;

    for (auto packet : stream)
    {
        if (packet.reading > threshold)
        {
            alerts.push_back(packet);
        }
    }

    return alerts;
}

int main()
{
    std::vector<TelemetryPacket> original_stream = {
        {.device_id = 101, .reading = 14.2f},
        {.device_id = 102, .reading = 98.6f},
        {.device_id = 103, .reading = 33.1f},
        {.device_id = 104, .reading = 112.4f}
    };

    std::cout << "Total Packets Processed: " << original_stream.size() << "\n";

    std::vector<TelemetryPacket> alerts = filter_critical_packets(original_stream, 50.0f);

    std::cout << "Critical Alerts Isolated: " << alerts.size() << "\n\n";

    for (auto alert : alerts)
    {
        std::cout << "Device ID: " << alert.device_id
        << " | Intensity: " << alert.reading << "\n";
    }

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

