#include <iostream>
#include <vector>
#include <cstdint> // Gives us explicit sizes like uint8_t (8-bit byte)
#include <optional>

// THE SAFE BYTE BUFFER
// We define a flat array of 8-bit integers. 
// This safely holds our raw radio/hardware data.
using ByteBuffer = std::vector<uint8_t>;

// THE TARGET DATA STRUCT
// What we want to extract from the raw bytes.
struct SensorTelemetry 
{
    uint16_t sensor_id;    // 16-bit number (requires 2 bytes)
    uint8_t status_code;   // 8-bit number (requires 1 byte)
};

// THE SECURE PARSER
// We pass the raw bytes by value. Zero pointer arithmetic.
std::optional<SensorTelemetry> parse_radio_packet(ByteBuffer packet)
{
    // A) SECURE BOUNDS CHECKING
    // We mathematically guarantee the packet is exactly the size we need (3 bytes).
    // This entirely prevents the infamous "Buffer Over-read" cyber attack.
    if (packet.size() < 3)
    {
        std::cout << "[ERROR] Corrupt radio packet. Dropping payload.\n";
        return std::nullopt;
    }

    SensorTelemetry extracted_data;

    // B) PURE BITWISE MATH (No memory casting!)
    // We want a 16-bit ID. We take the first 8-bit byte (packet[0]), 
    // shift it left by 8 spaces (<< 8), and combine it (Bitwise OR: |) 
    // with the second byte (packet[1]).
    extracted_data.sensor_id = (packet[0] << 8) | packet[1];

    // The third byte is just dropped straight into the status code
    extracted_data.status_code = packet[2];

    return extracted_data;
}

int main()
{
    std::cout << "--- Tactical Binary Parsing Engine ---\n\n";

    // SIMULATING A RADIO TRANSMISSION
    // Let's pretend the hardware sent us these three hexadecimal bytes.
    // 0x12 and 0x34 combined should make the ID: 4660 (in decimal)
    // 0xFF means "Status Critical"
    ByteBuffer incoming_transmission;
    incoming_transmission.push_back(0x12); // Byte 1 (High byte of ID)
    incoming_transmission.push_back(0x34); // Byte 2 (Low byte of ID)
    incoming_transmission.push_back(0xFF); // Byte 3 (Status code)

    std::cout << "[SYSTEM] Receiving radio transmission...\n";

    // PARSE SECURELY
    std::optional<SensorTelemetry> safe_result = parse_radio_packet(incoming_transmission);

    // HANDLE THE RESULT DETERMINISTICALLY
    if (safe_result.has_value())
    {
        std::cout << "\n[SUCCESS] Telemetry Parsed Successfully:\n";
        std::cout << "Sensor ID:   " << safe_result.value().sensor_id << "\n";
        
        if (safe_result.value().status_code == 0xFF)
        {
            std::cout << "Status Code: CRITICAL (0xFF)\n";
        }
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Binary Parsing Engine ---

[SYSTEM] Receiving radio transmission...

[SUCCESS] Telemetry Parsed Successfully:
Sensor ID:   4660
Status Code: CRITICAL (0xFF)

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

