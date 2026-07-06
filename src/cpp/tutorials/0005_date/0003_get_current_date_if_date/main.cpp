// get_current_date_if_date

#include <iostream>
#include <chrono>
#include <string>

// Pure pass-by-value comparison
bool isTargetDate(int targetYear, int targetMonth, int targetDay) {
    auto now = std::chrono::system_clock::now();
    std::chrono::zoned_time local_time{"America/New_York", now};
    
    std::chrono::year_month_day ymd{
        std::chrono::floor<std::chrono::days>(local_time.get_local_time())
    };

    // Extracting parts into our local bunker for comparison
    int currentYear = static_cast<int>(ymd.year());
    unsigned int currentMonth = static_cast<unsigned>(ymd.month());
    unsigned int currentDay = static_cast<unsigned>(ymd.day());

    // Logic Gate: Returns true if everything matches
    return (currentYear == targetYear && 
            currentMonth == targetMonth && 
            currentDay == targetDay);
}

int main() {
    // Setting our alarm for July 4th, 2026
    if (isTargetDate(2026, 7, 4)) {
        std::cout << "Alarm Triggered: It is the target date!\n";
    } else {
        std::cout << "Target date not reached yet.\n";
    }

    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Target date not reached yet.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

