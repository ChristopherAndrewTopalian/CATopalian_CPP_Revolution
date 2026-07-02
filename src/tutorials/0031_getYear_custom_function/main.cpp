#include <iostream>
#include <chrono>

// Pure function: Returns the year as a standard integer.
// Zero pointers, zero references, zero const-clutter, explicit namespaces.
int get_year()
{
    // 1. Get the current exact time explicitly
    auto now = std::chrono::system_clock::now();

    // 2. Round down to the current day
    auto today = std::chrono::time_point_cast<std::chrono::days>(now);

    // 3. Convert into a Year-Month-Day object
    std::chrono::year_month_day ymd{today};

    // 4. Return the isolated integer back to the caller
    return static_cast<int>(ymd.year());
}

int main()
{
    // main() simply calls the function and stores the returned integer
    int currentYear = get_year();

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

