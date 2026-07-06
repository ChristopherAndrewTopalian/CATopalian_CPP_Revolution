#include <iostream>
#include <string>

int main()
{
    std::cout << "--- Tactical Meeting Logic ---\n\n";

    // Create our clean text variables
    std::string past_meeting;
    std::string future_meeting;

    // Ask our interactive questions
    std::cout << "Did you attend the previous meeting? (yes/no): ";
    std::cin >> past_meeting;

    std::cout << "Will you be attending the meeting later? (yes/no): ";
    std::cin >> future_meeting;

    // THE LOGIC ENGINE (Using && for AND)
    // Both sides of the && must be true for the block to trigger.

    if (past_meeting == "yes" && future_meeting == "yes") 
    {
        std::cout << "\n[STATUS] Perfect attendance. You are fully briefed!\n";
    }
    else if (past_meeting == "no" && future_meeting == "yes") 
    {
        std::cout << "\n[STATUS] We will catch you up on what you missed at the next meeting.\n";
    }
    else if (past_meeting == "yes" && future_meeting == "no") 
    {
        std::cout << "\n[STATUS] You have the past data, but please read the logs for the new updates.\n";
    }
    else 
    {
        // If they said "no" to both, this final block catches them.
        std::cout << "\n[STATUS] AWOL! Please report to command for a full briefing.\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Meeting Logic ---

Did you attend the previous meeting? (yes/no): yes
Will you be attending the meeting later? (yes/no): yes

[STATUS] Perfect attendance. You are fully briefed!

Press Enter to Exit...
*/

/*
--- Tactical Meeting Logic ---

Did you attend the previous meeting? (yes/no): no
Will you be attending the meeting later? (yes/no): yes

[STATUS] We will catch you up on what you missed at the next meeting.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

