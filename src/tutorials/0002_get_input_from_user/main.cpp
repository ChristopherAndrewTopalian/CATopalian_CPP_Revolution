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
