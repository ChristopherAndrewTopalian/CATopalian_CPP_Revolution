#include <iostream>

int main()
{
    int numberOfPeople = 5;

    std::cout << numberOfPeople << " people are here\nHow Many are Leaving?";

    int howMany;
    std::cin >> howMany;

    std::cout << howMany << " are leaving\n";

    if (howMany == numberOfPeople)
    {
        std::cout << "Everyone is leaving";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
5 people are here
How Many are Leaving?5
5 are leaving
Everyone is leaving
Press Enter to Exit...
*/

/*
5 people are here
How Many are Leaving?5
5 are leaving
Everyone is leaving
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

