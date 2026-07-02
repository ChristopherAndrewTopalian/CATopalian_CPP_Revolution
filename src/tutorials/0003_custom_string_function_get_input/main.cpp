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