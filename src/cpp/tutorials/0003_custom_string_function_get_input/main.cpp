// custom_string_function_get_input

#include <iostream>
#include <string>

std::string askName()
{
    std::string name;
    std::cout << "Enter Name: ";
    std::cin >> name;
    return name;
}

int main()
{
    std::string userName = askName();
    std::cout << "Hi, " << userName << "!" << "\n";

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Enter Name: Christopher
Hi, Christopher!

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

