// Custom Function - Open Browser to a URL

#include <windows.h>
#include <string>
#include <iostream>

void openURL(std::string url)
{
    std::cout << "Opening browser to " << url << "\n";
    
    // .c_str() converts our C++ string into a format Windows understands
    ShellExecuteA(NULL, "open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
}

int main()
{
    std::string url = "https://www.google.com";

    openURL(url);

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Opening browser to https://www.google.com

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

