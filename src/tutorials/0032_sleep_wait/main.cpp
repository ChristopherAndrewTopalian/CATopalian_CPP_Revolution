#include <iostream>
#include <chrono>
#include <thread>

// THE ENGINE: Encapsulated wait logic
void wait(int seconds) {
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

// THE ORCHESTRATOR
int main() {
    std::cout << "Counting to 4...\n";
    
    // Using our custom function instead of writing raw chrono code
    wait(4);
    
    std::cout << "4 seconds passed.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Counting to 4...
4 seconds passed.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

