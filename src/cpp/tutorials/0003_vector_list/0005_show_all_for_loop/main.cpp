#include <iostream>
#include <string>
#include <vector>

int main()
{
    // A 'for' loop is the perfect tool for reading an entire vector.
    // It has three parts inside the parentheses:
    // 1. Where to start  (int i = 0)
    // 2. When to stop    (i < roster.size())
    // 3. How to step     (i++) means "add 1 to i each time"
    
    std::vector<std::string> dutyRoster = {"Picard", "Riker", "Data", "Worf", "Crusher"};

    std::cout << "--- USS Enterprise Duty Roster ---\n";

    // The loop will automatically run exactly 5 times.
    // The variable 'i' will change from 0, to 1, to 2, to 3, to 4.
    for (int i = 0; i < dutyRoster.size(); i++)
    {
        // We use 'i' as the index to grab the correct name!
        // We also use (i + 1) just so the printed list makes sense to a human (1, 2, 3...)
        std::cout << "Crew Member " << (i + 1) << ": " << dutyRoster[i] << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- USS Enterprise Duty Roster ---
Crew Member 1: Picard
Crew Member 2: Riker
Crew Member 3: Data
Crew Member 4: Worf
Crew Member 5: Crusher

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

