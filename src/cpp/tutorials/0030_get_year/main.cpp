// get_year

#include <iostream>
#include <chrono>

int main() {
    // Get the current exact time from the system clock explicitly
    auto now = std::chrono::system_clock::now();

    // Round that exact time down to the current day
    auto today = std::chrono::time_point_cast<std::chrono::days>(now);

    // Convert that day into a clean Year-Month-Day object
    std::chrono::year_month_day ymd{today};

    // Extract just the year as a standard integer
    int currentYear = static_cast<int>(ymd.year());

    std::cout << "The current year is: " << currentYear << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
The current year is: 2026

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

