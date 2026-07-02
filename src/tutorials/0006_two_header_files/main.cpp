// main.cpp uses CONSOLELOG.h and PROMPT.h

#include <iostream>
#include <string>
#include "PROMPT.h"
#include "CONSOLELOG.h"

int main()
{
    // We declare the string and immediately fill it using our prompt function
    std::string input;
    
    consoleLog("Enter Name:");
    input = prompt();

    consoleLog("Hi " + input);

    consoleLog("Press Enter to Exit");
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Enter Name
Christopher
Hi Christopher
Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

