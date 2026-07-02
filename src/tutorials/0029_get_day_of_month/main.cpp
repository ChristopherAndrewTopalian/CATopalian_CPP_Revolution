#include <iostream>
#include <chrono>

// Pure function: Returns the day as an unsigned integer.
// No pointers, no references, no const-clutter.
unsigned int get_day_of_month()
{
    auto now = std::chrono::system_clock::now();
    std::chrono::zoned_time local_time{"America/New_York", now};

    std::chrono::year_month_day ymd{
        std::chrono::floor<std::chrono::days>(local_time.get_local_time())
    };

    return static_cast<unsigned int>(ymd.day());
}

int main()
{
    unsigned int day = get_day_of_month();

    std::cout << "The current day of the month is: " << day << "\n";

    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
The current day of the month is: 1

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

