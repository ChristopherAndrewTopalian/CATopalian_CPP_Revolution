#include <iostream>
#include <string>

// THE TYPE-SAFE CATEGORIES (enum class)
// These are mathematically isolated from each other.
// Even if they share the same underlying integer values, 
// they can NEVER be mixed up.
enum class ThreatLevel 
{
    Green,   // Coast is clear
    Yellow,  // Investigate
    Red      // Engage
};

enum class WeaponSystem 
{
    None,
    Laser,
    Railgun
};

// THE SECURE HARDWARE CONTROLLER
// This function ONLY accepts the exact 'ThreatLevel' category.
// You cannot pass it a raw integer like '2'.
WeaponSystem evaluate_threat_response(ThreatLevel current_status)
{
    // 3. EXPLICIT MATCHING
    // We must explicitly use the category name. No magic numbers!
    if (current_status == ThreatLevel::Green)
    {
        std::cout << "[AI] Threat Level Green. Holding fire.\n";
        return WeaponSystem::None;
    }
    else if (current_status == ThreatLevel::Yellow)
    {
        std::cout << "[AI] Threat Level Yellow. Powering targeting lasers.\n";
        return WeaponSystem::Laser;
    }
    else if (current_status == ThreatLevel::Red)
    {
        std::cout << "[AI] Threat Level Red! Spooling magnetic accelerators!\n";
        return WeaponSystem::Railgun;
    }

    return WeaponSystem::None;
}

int main()
{
    std::cout << "--- Tactical Categorization Engine ---\n\n";

    // THE CATOPALIAN EXECUTION
    std::cout << "--- Scenario 1 ---\n";
    WeaponSystem active_weapon = evaluate_threat_response(ThreatLevel::Yellow);

    std::cout << "\n--- Scenario 2 ---\n";
    // If a legacy engineer tried to type: evaluate_threat_response(2); 
    // The Catopalian compiler would immediately reject it and refuse to build.
    // They MUST be explicit:
    active_weapon = evaluate_threat_response(ThreatLevel::Red);

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Categorization Engine ---

--- Scenario 1 ---
[AI] Threat Level Yellow. Powering targeting lasers.

--- Scenario 2 ---
[AI] Threat Level Red! Spooling magnetic accelerators!

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

