// Open Browser to a URL

#include <windows.h>
#include <iostream>

int main()
{
    // Tell the user what the machine is doing
    std::cout << "Opening browser to Google..." << "\n";

    // works only on windows os
    ShellExecuteA(NULL, "open", "https://www.google.com", NULL, NULL, SW_SHOWNORMAL);

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    
    return 0;
}

// g++ main.cpp -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

