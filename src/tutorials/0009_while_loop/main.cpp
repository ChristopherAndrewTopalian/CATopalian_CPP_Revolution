// while_loop

#include <iostream>

int main()
{
    int count = 0;

    // Use a while loop when you don't know exactly when the task will end.
    while (count < 5)
    {
        count++; // Increment first, so the state reflects the count immediately
        std::cout << "Count: " << count << "\n";
    }

    std::cout << "Loop completed.\n";
    
    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Count: 1
Count: 2
Count: 3
Count: 4
Count: 5
Loop completed.

Press Enter to Exit
*/