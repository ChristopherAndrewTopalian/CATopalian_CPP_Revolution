// PROMPT.h header file

#ifndef PROMPT
#define PROMPT
#include <iostream>
#include <string>

// No ampersands! We return a string instead.
std::string prompt()
{
    std::string userInput;
    std::cin >> userInput;
    return userInput;
}

#endif

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

