// Random Float Generator (Modular Engine)

#include <iostream>
#include <random>

// THE ENGINE: Returns a float within a dynamic range
// For small primitive types like float, passing by value is standard and lightning fast!
float getRandomFloat(float min, float max)
{
    // 'static' ensures these stay alive in memory and only initialize ONCE.
    // This prevents the engine from re-seeding itself every time the function is called.
    static std::random_device rd; 
    static std::mt19937 gen(rd());

    // The distribution range is dynamically set by the orchestrator's arguments
    std::uniform_real_distribution<float> dis(min, max);

    // Generate and return the result
    return dis(gen);
}

// THE ORCHESTRATOR
int main()
{
    std::cout << "Initializing Chaos Engine...\n\n";

    // Call our reusable engine to generate 5 completely distinct random numbers
    for (int i = 0; i < 5; i++)
    {
        float num = getRandomFloat(0.0f, 1.0f);
        std::cout << "Generated Value [" << i << "]: " << num << "\n";
    }

    // Standard ASCII output for the exit prompt
    std::cout << "\nPress Enter to Exit";
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Initializing Chaos Engine...

Generated Value [0]: 0.607493
Generated Value [1]: 0.582231
Generated Value [2]: 0.943709
Generated Value [3]: 0.208314
Generated Value [4]: 0.410172

Press Enter to Exit
*/