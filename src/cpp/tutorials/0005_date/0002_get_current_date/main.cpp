// get_current_date

#include <iostream>
#include <chrono>

int main() {
    // We stay explicit. We use std:: everywhere. 
    // This makes it crystal clear exactly what library each function belongs to.
    
    auto now = std::chrono::system_clock::now();

    // We keep the logic in the local bunker.
    std::chrono::zoned_time local_time{"America/New_York", now};

    std::chrono::year_month_day ymd{
        std::chrono::floor<std::chrono::days>(local_time.get_local_time())
    };

    std::cout << "The current date in New York is: " 
    << static_cast<int>(ymd.year()) << "-" 
    << static_cast<unsigned>(ymd.month()) << "-" 
    << static_cast<unsigned>(ymd.day()) << "\n";

    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
The current date is: 2026-07-02

Press Enter to Exit...
*/

// g++ main.cpp -o our_test.exe

/*
The current date in New York is: 2026-7-1

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

