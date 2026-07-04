#include <iostream>
#include <string>

int main()
{
    std::cout << "--- Tactical Security Checkpoint ---\n\n";

    // Create our clean text variables
    std::string has_badge;
    std::string has_guest_pass;

    // Ask our interactive questions
    std::cout << "Do you have a Level 4 Security Badge? (yes/no): ";
    std::cin >> has_badge;

    std::cout << "Do you have a VIP Guest Pass? (yes/no): ";
    std::cin >> has_guest_pass;

    // THE LOGIC ENGINE (Using || for OR)
    // ONLY ONE of these needs to be true for the gates to open.

    if (has_badge == "yes" || has_guest_pass == "yes") 
    {
        // The Success State
        std::cout << "\n[ACCESS GRANTED] The blast doors are opening. Welcome to the facility.\n";
    }
    else 
    {
        // The Lockdown State
        // They said "no" to both questions. 
        std::cout << "\n[ACCESS DENIED] Intruder detected! Initiating lockdown procedures.\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore(10000, '\n'); 
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Security Checkpoint ---

Do you have a Level 4 Security Badge? (yes/no): yes
Do you have a VIP Guest Pass? (yes/no): yes

[ACCESS GRANTED] The blast doors are opening. Welcome to the facility.

Press Enter to Exit...
*/

/*
--- Tactical Security Checkpoint ---

Do you have a Level 4 Security Badge? (yes/no): no
Do you have a VIP Guest Pass? (yes/no): no

[ACCESS DENIED] Intruder detected! Initiating lockdown procedures.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

