#include <iostream>
#include <string>
#include <sstream> // The 21st-Century String Streamer
#include <vector>
#include <optional>

// THE DATA PAYLOAD
struct TelemetryPacket 
{
    std::string callsign;
    float altitude;
    int battery_percent;
};

// THE SECURE PACKER (Serialization)
// Converts a Struct into a clean, comma-separated string.
// Zero raw memory dumping. 100% Endian-safe.
std::string pack_telemetry(TelemetryPacket data)
{
    std::stringstream secure_buffer;

    // We stream the data in, separated by commas
    secure_buffer << data.callsign << "," 
                  << data.altitude << "," 
                  << data.battery_percent;

    return secure_buffer.str(); // Teleport the pure string back
}

// THE SECURE UNPACKER (Deserialization)
// Safely parses a string back into a Struct. 
// Uses our std::optional lockbox in case the radio packet is corrupted.
std::optional<TelemetryPacket> unpack_telemetry(std::string incoming_stream)
{
    std::stringstream secure_buffer(incoming_stream);
    std::string parsed_callsign;
    std::string temp_alt, temp_batt;

    // A) SECURE EXTRACTION
    // getline safely pulls data up to the next comma without overflowing
    if (std::getline(secure_buffer, parsed_callsign, ',') &&
        std::getline(secure_buffer, temp_alt, ',') &&
        std::getline(secure_buffer, temp_batt, ','))
    {
        // B) SECURE CONVERSION
        // Convert the string numbers back to actual numbers
        // stof = String to Float, stoi = String to Integer
        TelemetryPacket reconstructed_data;
        reconstructed_data.callsign = parsed_callsign;
        reconstructed_data.altitude = std::stof(temp_alt);
        reconstructed_data.battery_percent = std::stoi(temp_batt);

        return reconstructed_data; // Return the pristine struct
    }

    // If the packet was missing commas or corrupted, return safe failure
    std::cout << "[NETWORK ERROR] Malformed telemetry packet dropped.\n";
    return std::nullopt; 
}

int main()
{
    std::cout << "--- Tactical Serialization Engine ---\n\n";

    // PREPARE THE DATA
    TelemetryPacket my_drone = {"GHOST-ACTUAL", 1450.5f, 88};

    std::cout << "[SYSTEM] Original Data: " << my_drone.callsign 
              << " | " << my_drone.altitude << "m | " 
              << my_drone.battery_percent << "%\n\n";

    // PACK IT FOR TRANSMISSION
    std::string transmission_string = pack_telemetry(my_drone);
    std::cout << "[RADIO TX] Transmitting Packet: [" << transmission_string << "]\n\n";

    // RECEIVE AND UNPACK IT
    std::cout << "[RADIO RX] Receiving Packet...\n";
    std::optional<TelemetryPacket> decoded_result = unpack_telemetry(transmission_string);

    if (decoded_result.has_value())
    {
        std::cout << "[SUCCESS] Packet Decoded Safely:\n";
        std::cout << "-> Callsign: " << decoded_result.value().callsign << "\n";
        std::cout << "-> Altitude: " << decoded_result.value().altitude << "m\n";
        std::cout << "-> Battery:  " << decoded_result.value().battery_percent << "%\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Serialization Engine ---

[SYSTEM] Original Data: GHOST-ACTUAL | 1450.5m | 88%

[RADIO TX] Transmitting Packet: [GHOST-ACTUAL,1450.5,88]

[RADIO RX] Receiving Packet...
[SUCCESS] Packet Decoded Safely:
-> Callsign: GHOST-ACTUAL
-> Altitude: 1450.5m
-> Battery:  88%

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

