const NUM_DRONES = 50000;
const FRAMES = 1000;

// Data-Oriented: A single flat array for all coordinates
// [x, y, vx, vy, x, y, vx, vy...]
const swarm = new Float32Array(NUM_DRONES * 4);

// Initialize velocities
for(let i = 0; i < NUM_DRONES; i++) {
    swarm[(i * 4) + 2] = 1.5; // vx
    swarm[(i * 4) + 3] = 2.0; // vy
}

// JS automatically passes the array by reference. No pointers needed, no copies made.
function updateDrones(data, count) {
    for(let i = 0; i < count; i++) {
        let idx = i * 4;
        data[idx] += data[idx + 2];     // x += vx
        data[idx + 1] += data[idx + 3]; // y += vy
    }
}

console.log("Starting JS calculations...");
const start = performance.now();

// Run the simulation
for(let i = 0; i < FRAMES; i++) {
    updateDrones(swarm, NUM_DRONES);
}

const end = performance.now();

console.log(`JS (Data-Oriented) Time: ${(end - start).toFixed(2)} ms`);
console.log(`Drone 0 X Position: ${swarm[0]}`);

/*
Starting JS calculations...
JS (Data-Oriented) Time: 325.65 ms
Drone 0 X Position: 1500
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian

