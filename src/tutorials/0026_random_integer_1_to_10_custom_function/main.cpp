// Random Integer Generator (Modular Engine)

#include <iostream>
#include <random>

// THE ENGINE: Returns a whole number (int) within a custom range
int getRandomInt(int min, int max)
{
    // 'static' keeps the hardware seed and math engine alive and advancing
    static std::random_device rd; 
    static std::mt19937 gen(rd());

    // THE PIVOT: We switch to uniform_int_distribution for whole numbers
    std::uniform_int_distribution<int> dis(min, max);

    // Generate and return the integer
    return dis(gen);
}

// THE ORCHESTRATOR
int main()
{
    std::cout << "Initializing Integer Chaos Engine...\n\n";

    // Call our reusable engine to generate 5 completely distinct whole numbers (0 to 10)
    for (int i = 0; i < 5; i++)
    {
        // Notice how clean this is! No Math.floor() necessary.
        int num = getRandomInt(0, 10);
        std::cout << "Generated Integer [" << i << "]: " << num << "\n";
    }

    // Standard ASCII output for the exit prompt
    std::cout << "\nPress Enter to Exit";
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Initializing Integer Chaos Engine...

Generated Integer [0]: 10
Generated Integer [1]: 1
Generated Integer [2]: 6
Generated Integer [3]: 0
Generated Integer [4]: 8

Press Enter to Exit
*/