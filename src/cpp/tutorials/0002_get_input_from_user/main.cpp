// get_input_from_user

#include <iostream>
#include <string>

int main()
{
    std::string name;

    std::cout << "Enter Name: ";
    std::cin >> name;

    std::cout << "Hi " << name;

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Enter Name: Christopher
Hi Christopher
Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

