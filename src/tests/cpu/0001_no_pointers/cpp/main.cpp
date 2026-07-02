#include <iostream>
#include <vector>
#include <chrono>

// A simple drone structure
struct Drone { 
    float x, y, vx, vy; 
};

// NO POINTERS, NO AMPERSANDS. Pass by value.
// It is 100% memory-safe, but watch what it does to the CPU.
std::vector<Drone> updateDrones(std::vector<Drone> swarm) {
    for(size_t i = 0; i < swarm.size(); i++) {
        swarm[i].x += swarm[i].vx;
        swarm[i].y += swarm[i].vy;
    }
    return swarm;
}

int main() {
    int numDrones = 50000;
    int frames = 1000;
    
    // Create the swarm
    std::vector<Drone> mySwarm(numDrones, {0.0f, 0.0f, 1.5f, 2.0f});

    std::cout << "Starting C++ calculations...\n";
    auto start = std::chrono::high_resolution_clock::now();

    // Run the simulation
    for(int i = 0; i < frames; i++) {
        mySwarm = updateDrones(mySwarm);
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;

    std::cout << "C++ (No Pointers) Time: " << elapsed.count() << " ms\n";
    std::cout << "Drone 0 X Position: " << mySwarm[0].x << "\n";
    
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ -O3 main.cpp -o safe_test

/*
Starting C++ calculations...
C++ (No Pointers) Time: 55.1736 ms
Drone 0 X Position: 1500

Press Enter to Exit...
*/

/*
Compared to NodeJS

Starting JS calculations...
JS (Data-Oriented) Time: 325.65 ms
Drone 0 X Position: 1500
*/

/*
The No pointer C++ is almost 6 times faster than the Node.js version
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian

