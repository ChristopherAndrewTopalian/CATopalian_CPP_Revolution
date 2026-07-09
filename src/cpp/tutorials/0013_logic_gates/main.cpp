// logic_gates

#include <iostream>

int tau_gate(int a, int b) {
    if ((a == 0 && b == 0) || (a == 0 && b == 1) || (a == 1 && b == 0) || (a == 1 && b == 1)) {
        return 1;
    } else {
        return 1;
    }
}

int con_gate(int a, int b) {
    if ((a == 0 && b == 0) || (a == 0 && b == 1) || (a == 1 && b == 0) || (a == 1 && b == 1)) {
        return 0;
    } else {
        return 0;
    }
}

int xor_gate(int a, int b) { // Note: 'xor' is a reserved keyword in C++, so we name it 'xor_gate'
    if ((a == 1 && b == 0) || (a == 0 && b == 1)) {
        return 1;
    } else {
        return 0;
    }
}

int xnor_gate(int a, int b) {
    if ((a == 0 && b == 0) || (a == 1 && b == 1)) {
        return 1;
    } else {
        return 0;
    }
}

int and_gate(int a, int b) { // Note: 'and' is a reserved keyword in C++
    if (a == 1 && b == 1) {
        return 1;
    } else {
        return 0;
    }
}

int nand_gate(int a, int b) {
    if (a == 0 || b == 0) {
        return 1;
    } else {
        return 0;
    }
}

int or_gate(int a, int b) { // Note: 'or' is a reserved keyword in C++
    if (a == 1 || b == 1) {
        return 1;
    } else {
        return 0;
    }
}

int nor_gate(int a, int b) {
    if (a == 0 && b == 0) {
        return 1;
    } else {
        return 0;
    }
}

int mi_gate(int a, int b) {
    if (a == 0 || b == 1) {
        return 1;
    } else {
        return 0;
    }
}

int mni_gate(int a, int b) {
    if (a == 1 && b == 0) {
        return 1;
    } else {
        return 0;
    }
}

int ci_gate(int a, int b) {
    if (a == 1 || b == 0) {
        return 1;
    } else {
        return 0;
    }
}

int cni_gate(int a, int b) {
    if (a == 0 && b == 1) {
        return 1;
    } else {
        return 0;
    }
}

int lp_gate(int a, int b) {
    if (a == 1) {
        return 1;
    } else {
        return 0;
    }
}

int lc_gate(int a, int b) {
    if (a == 0) {
        return 1;
    } else {
        return 0;
    }
}

int rp_gate(int a, int b) {
    if ((a == 0 && b == 1) || (a == 1 && b == 1)) {
        return 1;
    } else {
        return 0;
    }
}

int rc_gate(int a, int b) {
    if ((a == 0 && b == 0) || (a == 1 && b == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    std::cout << "--- Starfleet Semantic Cortex Online ---\n\n";

    int signalA = 1;
    int signalB = 1;

    std::cout << "Testing Input Signals: A=" << signalA << ", B=" << signalB << "\n\n";

    // Testing our Similarity Detector (XNOR)
    std::cout << "Similarity Check (XNOR): " << xnor_gate(signalA, signalB) << "\n";

    // Testing our Strict Filter (AND)
    std::cout << "Strict Requirement Check (AND): " << and_gate(signalA, signalB) << "\n";
    
    // Testing our Difference Detector (XOR)
    std::cout << "Difference Check (XOR): " << xor_gate(signalA, signalB) << "\n";

    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Starfleet Semantic Cortex Online ---

Testing Input Signals: A=1, B=1

Similarity Check (XNOR): 1
Strict Requirement Check (AND): 1
Difference Check (XOR): 0

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting

