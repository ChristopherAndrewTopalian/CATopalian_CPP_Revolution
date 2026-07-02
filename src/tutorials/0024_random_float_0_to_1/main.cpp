// random_float_0_to_1

// Random Float 0.0 to 1.0 (Raw Machinery)

#include <iostream>
#include <random>

int main()
{
    // The Seed: Gets true random noise from the Operating System hardware
    std::random_device rd; 

    // The Engine: Mersenne Twister (The professional standard for generation)
    std::mt19937 gen(rd());

    // 3. The Distribution: Shapes the raw numbers into a specific range (0.0 to 1.0)
    std::uniform_real_distribution<float> dis(0.0f, 1.0f);

    // Generate the random float
    float randomFloat = dis(gen);

    // Print using \n for maximum speed
    std::cout << "Random float: " << randomFloat << "\n";

    // Standard ASCII output for the exit prompt
    std::cout << "\nPress Enter to Exit";
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Random float: 0.467949
Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

