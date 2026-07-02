// if else

#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    if (name == "Chris")
    {
        std::cout << "Hi Chris.\nIt is good that you are visiting Earth.\n";
    }
    else
    {
        std::cout << "Howdy " << name << ". Tell Chris to Sign in later.\n";
    }

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Enter your name: Chris
Hi Chris.
It is good that you are visiting Earth.

Press Enter to Exit
*/

/*
Enter your name: Christopher
Howdy Christopher. Tell Chris to Sign in later.

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

