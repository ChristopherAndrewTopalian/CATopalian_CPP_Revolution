# CODE BOOK

---

<details>
<summary><b>Section: 0001_print_and_keep_open</b></summary>


### `main.cpp`

```cpp
// print_and_keep_open

#include <iostream>

int main()
{
    std::cout << "Hi Everyone";

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Hi Everyone
Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0002_int</b></summary>


### `main.cpp`

```cpp
#include <iostream>

int main()
{
    int numberOfPeople = 5;

    std::cout << numberOfPeople << " people are here";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
5 people are here
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0003_double</b></summary>


### `main.cpp`

```cpp
// float_double

#include <iostream>

int main()
{
    double batteryVoltage = 12.5;

    std::cout << "The battery voltage is " << batteryVoltage << " volts.";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
The battery voltage is 12.5 volts.
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0005_bool</b></summary>


### `main.cpp`

```cpp
// bool

#include <iostream>

int main()
{
    bool shieldsActive = true;

    // Default C++ behavior (prints 1 or 0)
    std::cout << "Shield status (numeric): " << shieldsActive << "\n";

    // Human-readable behavior using std::boolalpha
    std::cout << "Shield status (text): " << std::boolalpha << shieldsActive;

    // Standardized Exit Pattern
    std::cout << "\n\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Shield status (numeric): 1
Shield status (text): true

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0007_string</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string> // Required to use the std::string data type

int main()
{
    // A string holds multiple characters (text) and uses double quotes
    std::string academyCadet = "Jean-Luc";
    std::string assignment = "Starfleet Academy";

    std::cout << "Cadet " << academyCadet << " is reporting to " << assignment << ".\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Cadet Jean-Luc is reporting to Starfleet Academy.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0008_const</b></summary>


### `main.cpp`

```cpp
#include <iostream>

int main()
{
    // The 'const' keyword locks the variable. It can never be changed while the program runs.
    // It is standard practice to name constants in ALL_CAPS.
    const double MAXIMUM_WARP = 9.975;
    const int LIFE_SUPPORT_PIN = 4;

    std::cout << "Life support is wired to hardware pin " << LIFE_SUPPORT_PIN << ".\n";
    std::cout << "Vessel maximum velocity is locked at Warp " << MAXIMUM_WARP << ".\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Life support is wired to hardware pin 4.
Vessel maximum velocity is locked at Warp 9.975.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0009_vector_list</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

int main()
{
    // A C++ vector is a dynamic list of items. 
    std::vector<std::string> crewMembers = {"Captain", "Science Officer", "Engineer"};

    std::cout << "The second member of the crew is the " << crewMembers[1] << ".\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
The second member of the crew is the Science Officer.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0010_object_flat</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>

// We define the blueprint for our object (Struct)
// This is the C++ equivalent of a simple JavaScript object literal.
struct Starship 
{
    std::string name;
    std::string classType;
    int registryNumber;
    bool shieldsActive;
};

int main()
{
    // We create an instance of the object
    Starship enterprise = {"Enterprise", "Galaxy", 1701, true};

    // CRITICAL LESSON: We cannot simply write 'std::cout << enterprise;'
    // We must build the print statement property by property using the "dot" notation!

    std::cout << "--- Tactical Overlay ---\n";
    std::cout << "Vessel: USS " << enterprise.name << "\n";
    std::cout << "Class: " << enterprise.classType << " Class\n";
    std::cout << "Registry: NCC-" << enterprise.registryNumber << "\n";

    // Using a quick ternary operator to print text instead of a 1 or 0 for the boolean
    std::cout << "Shield Status: " << (enterprise.shieldsActive ? "RAISED" : "LOWERED") << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Tactical Overlay ---
Vessel: USS Enterprise
Class: Galaxy Class
Registry: NCC-1701
Shield Status: RAISED

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0001_float</b></summary>


### `main.cpp`

```cpp
#include <iostream>

int main()
{
    // A 'float' is a decimal number that takes up exactly 4 bytes of memory.
    // A 'double' takes up 8 bytes. In hardware and robotics, using a float 
    // saves precious memory and often processes much faster.
    
    // CRITICAL: You must put an 'f' at the end of the number!
    float sensorCalibration = 47.5f;

    std::cout << "The forward sensor array is calibrated to " << sensorCalibration << " terahertz.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
The forward sensor array is calibrated to 47.5 terahertz.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0002_char</b></summary>


### `main.cpp`

```cpp
//char

#include <iostream>

int main()
{
    char commandKey = 'X';

    std::cout << "Press the '" << commandKey << "' key to activate the thrusters.";

    // Standardized Exit Pattern
    std::cout << "\n\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Press the 'X' key to activate the thrusters.

Press Enter to Exit...
*/
```


</details>

---

<details>
<summary><b>Section: 0003_short</b></summary>


### `main.cpp`

```cpp
#include <iostream>

int main()
{
    // A 'short' integer uses only 2 bytes of memory (instead of 4 for a standard 'int').
    // It can only hold numbers between -32,768 and 32,767. 
    // This is perfect for microcontrollers where memory is incredibly tight 
    // and you know the number will never exceed that limit.
    
    short activeProbes = 142;
    short hullIntegrity = 100;

    std::cout << "Hull integrity is at " << hullIntegrity << " percent.\n";
    std::cout << "There are currently " << activeProbes << " diagnostic probes deployed.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Hull integrity is at 100 percent.
There are currently 142 diagnostic probes deployed.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0004_unsigned_short</b></summary>


### `main.cpp`

```cpp
#include <iostream>

int main()
{
    // The 'unsigned' keyword removes the ability to store negative numbers.
    // By reclaiming the negative sign bit, an 'unsigned short' doubles its 
    // positive limit from 32,767 up to exactly 65,535, still using only 2 bytes!
    // This is perfect for physical counts or distances that can never be less than zero.
    
    unsigned short orbitalDistance = 45500; 
    unsigned short activePersonnel = 60000;

    std::cout << "The station is maintaining a distance of " << orbitalDistance << " kilometers.\n";
    std::cout << "There are currently " << activePersonnel << " active personnel on board.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
The station is maintaining a distance of 45500 kilometers.
There are currently 60000 active personnel on board.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0001_get_input_from_user</b></summary>


### `main.cpp`

```cpp
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

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0002_int_variable_with_input</b></summary>


### `main.cpp`

```cpp
#include <iostream>

int main()
{
    int numberOfPeople = 5;

    std::cout << numberOfPeople << " people are here\nHow Many are Leaving?";

    int howMany;
    std::cin >> howMany;

    std::cout << howMany << " are leaving";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
5 people are here
How Many are Leaving?2
2 are leaving
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0003_custom_string_function_get_input</b></summary>


### `main.cpp`

```cpp
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

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0004_custom_void_function</b></summary>


### `main.cpp`

```cpp
// Custom Void Function - Pure Pass-by-Value Paradigm
#include <iostream>
#include <string>

// ZERO AMPERSANDS, ZERO ASTERISKS
// Memory safe, leak-proof, and clean readability.
void consoleLog(std::string message)
{
    std::cout << message << "\n";
}

int main()
{
    consoleLog("Hi Everyone");

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// Compile with modern optimization:
// g++ -O3 main.cpp -o our_test.exe

/*
Hi Everyone

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0001_index</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector> // This library must be included to use vectors

int main()
{
    // A std::vector is a dynamic list. 
    // In C++ (like most languages), lists are "zero-indexed".
    // This means the very first item is located at position 0.

    std::vector<std::string> bridgeCrew = {"Picard", "Riker", "Data", "Worf"};

    std::cout << "The commanding officer (Index 0) is " << bridgeCrew[0] << ".\n";

    std::cout << "The tactical officer (Index 3) is " << bridgeCrew[3] << ".\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
The commanding officer (Index 0) is Picard.
The tactical officer (Index 3) is Worf.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0002_size</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector> // Required to use vectors

int main()
{
    // A std::vector always knows exactly how much data it holds.
    // You can check this at any time using the .size() command.
    // CRITICAL NOTE: While the index starts at 0, the .size() command 
    // counts normally (1, 2, 3, etc.).
    
    std::vector<std::string> awayTeam = {"Riker", "Data", "Worf", "Crusher", "La Forge"};

    std::cout << "Scanning transporter pad...\n";
    
    // We ask the vector to tell us its current size
    std::cout << "There are exactly " << awayTeam.size() << " members on the away team.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Scanning transporter pad...
There are exactly 5 members on the away team.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0003_push_back</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Unlike rigid arrays, a std::vector can grow dynamically while the program runs.
    // To add a new item, we use the .push_back() command. 
    // Just like the name implies, it pushes the new data to the very BACK of the list.
    
    std::vector<std::string> securityDetail = {"Worf", "Tasha", "Odo"};

    std::cout << "Initial security detail has " << securityDetail.size() << " officers.\n";

    // Red Alert! We need reinforcements. Let's add a new officer to the team.
    securityDetail.push_back("Tuvok");

    std::cout << "Reinforcements beamed aboard...\n";
    
    // The size has now automatically updated to 4!
    std::cout << "The security detail now has " << securityDetail.size() << " officers.\n";
    
    // Because it goes to the back, Tuvok is now the 4th item (Index 3)
    std::cout << "The newest officer at the back of the line is " << securityDetail[3] << ".\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Initial security detail has 3 officers.
Reinforcements beamed aboard...
The security detail now has 4 officers.
The newest officer at the back of the line is Tuvok.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0004_pop_back</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>

int main()
{
    // Just as .push_back() adds an item to the end of the list,
    // .pop_back() removes the very last item from the list.
    // It automatically shrinks the vector's size and frees up the memory.
    
    std::vector<std::string> securityDetail = {"Worf", "Tasha", "Odo", "Tuvok"};

    std::cout << "Current security detail has " << securityDetail.size() << " officers.\n";
    std::cout << "The officer at the back of the line is " << securityDetail[3] << ".\n";

    // Stand down! The crisis is over. Tuvok is being reassigned to Voyager.
    // We remove the last officer from the vector.
    securityDetail.pop_back();

    std::cout << "\nReassignment complete. Officer departing...\n\n";

    // The size has automatically shrunk back to 3
    std::cout << "The security detail now has " << securityDetail.size() << " officers.\n";

    // Because Tuvok is gone, Odo is now the last person in line again (Index 2)
    std::cout << "The officer at the back of the line is now " << securityDetail[2] << ".\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Current security detail has 4 officers.
The officer at the back of the line is Tuvok.

Reassignment complete. Officer departing...

The security detail now has 3 officers.
The officer at the back of the line is now Odo.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0005_show_all_for_loop</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>

int main()
{
    // A 'for' loop is the perfect tool for reading an entire vector.
    // It has three parts inside the parentheses:
    // 1. Where to start  (int i = 0)
    // 2. When to stop    (i < roster.size())
    // 3. How to step     (i++) means "add 1 to i each time"
    
    std::vector<std::string> dutyRoster = {"Picard", "Riker", "Data", "Worf", "Crusher"};

    std::cout << "--- USS Enterprise Duty Roster ---\n";

    // The loop will automatically run exactly 5 times.
    // The variable 'i' will change from 0, to 1, to 2, to 3, to 4.
    for (int i = 0; i < dutyRoster.size(); i++)
    {
        // We use 'i' as the index to grab the correct name!
        // We also use (i + 1) just so the printed list makes sense to a human (1, 2, 3...)
        std::cout << "Crew Member " << (i + 1) << ": " << dutyRoster[i] << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- USS Enterprise Duty Roster ---
Crew Member 1: Picard
Crew Member 2: Riker
Crew Member 3: Data
Crew Member 4: Worf
Crew Member 5: Crusher

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0006_sort_begin_end</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <algorithm> // CRITICAL: This library contains the sort command!

int main()
{
    // To sort a vector, we use the std::sort() command from the <algorithm> library.
    // We must tell the command exactly where to start and where to finish.
    // By default, C++ will sort the items in ascending order (lowest to highest).
    
    std::vector<int> sensorContacts = {8500, 1200, 450, 9300, 3100};

    std::cout << "--- Raw Sensor Data ---\n";
    for (int i = 0; i < sensorContacts.size(); i++)
    {
        std::cout << "Contact " << (i + 1) << ": " << sensorContacts[i] << " km\n";
    }

    // Lock targets and sort them by proximity
    std::sort(sensorContacts.begin(), sensorContacts.end());

    std::cout << "\n--- Sorted Threats (Closest to Furthest) ---\n";
    for (int i = 0; i < sensorContacts.size(); i++)
    {
        std::cout << "Contact " << (i + 1) << ": " << sensorContacts[i] << " km\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Raw Sensor Data ---
Contact 1: 8500 km
Contact 2: 1200 km
Contact 3: 450 km
Contact 4: 9300 km
Contact 5: 3100 km

--- Sorted Threats (Closest to Furthest) ---
Contact 1: 450 km
Contact 2: 1200 km
Contact 3: 3100 km
Contact 4: 8500 km
Contact 5: 9300 km

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0007_reverse_begin_end</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Required for the reverse command

int main()
{
    // To flip a list upside down, we use the std::reverse() command.
    // NOTE: This does NOT sort the list in descending order! 
    // It simply takes the exact current order and flips it backwards.

    std::vector<std::string> navWaypoints = {"Earth", "Mars Base", "Jupiter Station", "Saturn Outpost"};

    std::cout << "--- Outward Flight Path ---\n";

    for (int i = 0; i < navWaypoints.size(); i++)
    {
        std::cout << "Jump " << (i + 1) << ": " << navWaypoints[i] << "\n";
    }

    // The mission is complete. We need to plot a course back home!
    // We tell the computer to start at the beginning and flip it to the end.
    std::reverse(navWaypoints.begin(), navWaypoints.end());

    std::cout << "\n--- Return Flight Path (Reversed) ---\n";

    for (int i = 0; i < navWaypoints.size(); i++)
    {
        std::cout << "Jump " << (i + 1) << ": " << navWaypoints[i] << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Outward Flight Path ---
Jump 1: Earth
Jump 2: Mars Base
Jump 3: Jupiter Station
Jump 4: Saturn Outpost

--- Return Flight Path (Reversed) ---
Jump 1: Saturn Outpost
Jump 2: Jupiter Station
Jump 3: Mars Base
Jump 4: Earth

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0008_insert_merge</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>

int main()
{
    // To combine (or merge) two vectors, we use the .insert() command.
    // We have to tell the computer three things:
    // 1. WHERE to put the new data (at the end of the first list)
    // 2. WHERE to start copying from the second list (the beginning)
    // 3. WHERE to stop copying from the second list (the end)

    std::vector<std::string> enterpriseTeam = {"Picard", "Riker", "Data"};
    std::vector<std::string> defiantTeam = {"Sisko", "Kira", "Dax"};

    std::cout << "--- Initial Fleet Status ---\n";
    std::cout << "Enterprise Team has " << enterpriseTeam.size() << " officers.\n";
    std::cout << "Defiant Team has " << defiantTeam.size() << " officers.\n";

    // Initiate Joint Operation! 
    // We insert the entire Defiant team into the back of the Enterprise team.
    enterpriseTeam.insert(enterpriseTeam.end(), defiantTeam.begin(), defiantTeam.end());

    std::cout << "\n--- Joint Strike Force Assembled! ---\n";

    // The Enterprise vector has now absorbed the Defiant vector
    std::cout << "The combined strike force now has " << enterpriseTeam.size() << " officers:\n";

    for (int i = 0; i < enterpriseTeam.size(); i++)
    {
        std::cout << "Officer " << (i + 1) << ": " << enterpriseTeam[i] << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Initial Fleet Status ---
Enterprise Team has 3 officers.
Defiant Team has 3 officers.

--- Joint Strike Force Assembled! ---
The combined strike force now has 6 officers:
Officer 1: Picard
Officer 2: Riker
Officer 3: Data
Officer 4: Sisko
Officer 5: Kira
Officer 6: Dax

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0009_unique</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Required for unique

int main()
{
    // C++ Quirks: std::unique only moves unique items to the front
    // It leaves "ghost" duplicates at the back because it cannot shrink the vector.
    // We must use a combo-move with .erase() to actually delete the leftover trash.
    // NOTE: std::unique ONLY removes duplicates that are right next to each other

    std::vector<std::string> sensorEchoes = {"Borg", "Borg", "Borg", "Romulan", "Klingon", "Klingon"};

    std::cout << "--- Raw Sensor Feed ---\n";
    std::cout << "Total contacts detected: " << sensorEchoes.size() << "\n\n";

    // The Combo Move: 
    // 1. std::unique groups the real targets at the front and points to where the trash begins.
    // 2. .erase() takes that starting point and chops off everything to the .end() of the vector.
    sensorEchoes.erase(std::unique(sensorEchoes.begin(), sensorEchoes.end()), sensorEchoes.end());

    std::cout << "--- Filtered Sensor Feed ---\n";
    std::cout << "Actual unique targets: " << sensorEchoes.size() << "\n";
    
    for (int i = 0; i < sensorEchoes.size(); i++)
    {
        std::cout << "Target " << (i + 1) << ": " << sensorEchoes[i] << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Raw Sensor Feed ---
Total contacts detected: 6

--- Filtered Sensor Feed ---
Actual unique targets: 3
Target 1: Borg
Target 2: Romulan
Target 3: Klingon

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0001_if_else</b></summary>


### `main.cpp`

```cpp
// if else

#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    if (name == "Chris")
    {
        std::cout << "Hi Chris.\nIt is good that you are visiting Earth.\n";
    }
    else
    {
        std::cout << "Howdy " << name << ". Tell Chris to Sign in later.\n";
    }

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Enter your name: Chris
Hi Chris.
It is good that you are visiting Earth.

Press Enter to Exit
*/

/*
Enter your name: Christopher
Howdy Christopher. Tell Chris to Sign in later.

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0002_int_variable_with_input_if</b></summary>


### `main.cpp`

```cpp
#include <iostream>

int main()
{
    int numberOfPeople = 5;

    std::cout << numberOfPeople << " people are here\nHow Many are Leaving?";

    int howMany;
    std::cin >> howMany;

    std::cout << howMany << " are leaving\n";

    if (howMany == numberOfPeople)
    {
        std::cout << "Everyone is leaving";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
5 people are here
How Many are Leaving?5
5 are leaving
Everyone is leaving
Press Enter to Exit...
*/

/*
5 people are here
How Many are Leaving?5
5 are leaving
Everyone is leaving
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0003_input_variable_if_and</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>

int main()
{
    std::cout << "--- Tactical Meeting Logic ---\n\n";

    // Create our clean text variables
    std::string past_meeting;
    std::string future_meeting;

    // Ask our interactive questions
    std::cout << "Did you attend the previous meeting? (yes/no): ";
    std::cin >> past_meeting;

    std::cout << "Will you be attending the meeting later? (yes/no): ";
    std::cin >> future_meeting;

    // THE LOGIC ENGINE (Using && for AND)
    // Both sides of the && must be true for the block to trigger.

    if (past_meeting == "yes" && future_meeting == "yes") 
    {
        std::cout << "\n[STATUS] Perfect attendance. You are fully briefed!\n";
    }
    else if (past_meeting == "no" && future_meeting == "yes") 
    {
        std::cout << "\n[STATUS] We will catch you up on what you missed at the next meeting.\n";
    }
    else if (past_meeting == "yes" && future_meeting == "no") 
    {
        std::cout << "\n[STATUS] You have the past data, but please read the logs for the new updates.\n";
    }
    else 
    {
        // If they said "no" to both, this final block catches them.
        std::cout << "\n[STATUS] AWOL! Please report to command for a full briefing.\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Meeting Logic ---

Did you attend the previous meeting? (yes/no): yes
Will you be attending the meeting later? (yes/no): yes

[STATUS] Perfect attendance. You are fully briefed!

Press Enter to Exit...
*/

/*
--- Tactical Meeting Logic ---

Did you attend the previous meeting? (yes/no): no
Will you be attending the meeting later? (yes/no): yes

[STATUS] We will catch you up on what you missed at the next meeting.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0004_input_variable_if_or</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>

int main()
{
    std::cout << "--- Tactical Security Checkpoint ---\n\n";

    // Create our clean text variables
    std::string has_badge;
    std::string has_guest_pass;

    // Ask our interactive questions
    std::cout << "Do you have a Level 4 Security Badge? (yes/no): ";
    std::cin >> has_badge;

    std::cout << "Do you have a VIP Guest Pass? (yes/no): ";
    std::cin >> has_guest_pass;

    // THE LOGIC ENGINE (Using || for OR)
    // ONLY ONE of these needs to be true for the gates to open.

    if (has_badge == "yes" || has_guest_pass == "yes") 
    {
        // The Success State
        std::cout << "\n[ACCESS GRANTED] The blast doors are opening. Welcome to the facility.\n";
    }
    else 
    {
        // The Lockdown State
        // They said "no" to both questions. 
        std::cout << "\n[ACCESS DENIED] Intruder detected! Initiating lockdown procedures.\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Security Checkpoint ---

Do you have a Level 4 Security Badge? (yes/no): yes
Do you have a VIP Guest Pass? (yes/no): yes

[ACCESS GRANTED] The blast doors are opening. Welcome to the facility.

Press Enter to Exit...
*/

/*
--- Tactical Security Checkpoint ---

Do you have a Level 4 Security Badge? (yes/no): no
Do you have a VIP Guest Pass? (yes/no): no

[ACCESS DENIED] Intruder detected! Initiating lockdown procedures.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0005_sleep_wait</b></summary>


### `main.cpp`

```cpp
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
```


</details>

---

<details>
<summary><b>Section: 0001_for_loop</b></summary>


### `main.cpp`

```cpp
// for_loop

#include <iostream>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        std::cout << i << "\n";
    }

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
100

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0002_while_loop</b></summary>


### `main.cpp`

```cpp
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

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0001_get_day_of_month</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <chrono>

// Pure function: Returns the day as an unsigned integer.
// No pointers, no references, no const-clutter.
unsigned int get_day_of_month()
{
    auto now = std::chrono::system_clock::now();
    std::chrono::zoned_time local_time{"America/New_York", now};

    std::chrono::year_month_day ymd{
        std::chrono::floor<std::chrono::days>(local_time.get_local_time())
    };

    return static_cast<unsigned int>(ymd.day());
}

int main()
{
    unsigned int day = get_day_of_month();

    std::cout << "The current day of the month is: " << day << "\n";

    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
The current day of the month is: 1

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0002_get_current_date</b></summary>


### `main.cpp`

```cpp
// get_current_date

#include <iostream>
#include <chrono>

int main() {
    // We stay explicit. We use std:: everywhere. 
    // This makes it crystal clear exactly what library each function belongs to.
    
    auto now = std::chrono::system_clock::now();

    // We keep the logic in the local bunker.
    std::chrono::zoned_time local_time{"America/New_York", now};

    std::chrono::year_month_day ymd{
        std::chrono::floor<std::chrono::days>(local_time.get_local_time())
    };

    std::cout << "The current date in New York is: " 
    << static_cast<int>(ymd.year()) << "-" 
    << static_cast<unsigned>(ymd.month()) << "-" 
    << static_cast<unsigned>(ymd.day()) << "\n";

    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
The current date is: 2026-07-02

Press Enter to Exit...
*/

// g++ main.cpp -o our_test.exe

/*
The current date in New York is: 2026-7-1

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0003_get_current_date_if_date</b></summary>


### `main.cpp`

```cpp
// get_current_date_if_date

#include <iostream>
#include <chrono>
#include <string>

// Pure pass-by-value comparison
bool isTargetDate(int targetYear, int targetMonth, int targetDay) {
    auto now = std::chrono::system_clock::now();
    std::chrono::zoned_time local_time{"America/New_York", now};
    
    std::chrono::year_month_day ymd{
        std::chrono::floor<std::chrono::days>(local_time.get_local_time())
    };

    // Extracting parts into our local bunker for comparison
    int currentYear = static_cast<int>(ymd.year());
    unsigned int currentMonth = static_cast<unsigned>(ymd.month());
    unsigned int currentDay = static_cast<unsigned>(ymd.day());

    // Logic Gate: Returns true if everything matches
    return (currentYear == targetYear && 
            currentMonth == targetMonth && 
            currentDay == targetDay);
}

int main() {
    // Setting our alarm for July 4th, 2026
    if (isTargetDate(2026, 7, 4)) {
        std::cout << "Alarm Triggered: It is the target date!\n";
    } else {
        std::cout << "Target date not reached yet.\n";
    }

    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Target date not reached yet.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0004_get_year</b></summary>


### `main.cpp`

```cpp
// get_year

#include <iostream>
#include <chrono>

int main() {
    // Get the current exact time from the system clock explicitly
    auto now = std::chrono::system_clock::now();

    // Round that exact time down to the current day
    auto today = std::chrono::time_point_cast<std::chrono::days>(now);

    // Convert that day into a clean Year-Month-Day object
    std::chrono::year_month_day ymd{today};

    // Extract just the year as a standard integer
    int currentYear = static_cast<int>(ymd.year());

    std::cout << "The current year is: " << currentYear << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
The current year is: 2026

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0005_get_year_custom_function</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <chrono>

// Pure function: Returns the year as a standard integer.
// Zero pointers, zero references, zero const-clutter, explicit namespaces.
int get_year()
{
    // 1. Get the current exact time explicitly
    auto now = std::chrono::system_clock::now();

    // 2. Round down to the current day
    auto today = std::chrono::time_point_cast<std::chrono::days>(now);

    // 3. Convert into a Year-Month-Day object
    std::chrono::year_month_day ymd{today};

    // 4. Return the isolated integer back to the caller
    return static_cast<int>(ymd.year());
}

int main()
{
    // main() simply calls the function and stores the returned integer
    int currentYear = get_year();

    std::cout << "The current year is: " << currentYear << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*

*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0006_getYear_custom_function</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <chrono>

// Pure function: Returns the year as a standard integer.
// Zero pointers, zero references, zero const-clutter, explicit namespaces.
int get_year()
{
    // Get the current exact time explicitly
    auto now = std::chrono::system_clock::now();

    // Round down to the current day
    auto today = std::chrono::time_point_cast<std::chrono::days>(now);

    // Convert into a Year-Month-Day object
    std::chrono::year_month_day ymd{today};

    // Return the isolated integer back to the caller
    return static_cast<int>(ymd.year());
}

int main()
{
    // main() simply calls the function and stores the returned integer
    int currentYear = get_year();

    std::cout << "The current year is: " << currentYear << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
The current year is: 2026

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0001_one_header_file</b></summary>


### `main.cpp`

```cpp
// Our main.cpp file uses the CONSOLE.h file

#include <iostream>
#include <string>
#include "CONSOLELOG.h"

int main()
{
    consoleLog("Hi Everyone");

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Hi Everyone

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0002_two_header_files</b></summary>


### `main.cpp`

```cpp
// main.cpp uses CONSOLELOG.h and PROMPT.h

#include <iostream>
#include <string>
#include "PROMPT.h"
#include "CONSOLELOG.h"

int main()
{
    // We declare the string and immediately fill it using our prompt function
    std::string input;
    
    consoleLog("Enter Name:");
    input = prompt();

    consoleLog("Hi " + input);

    consoleLog("Press Enter to Exit");
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Enter Name
Christopher
Hi Christopher
Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0001_browser_open_url</b></summary>


### `main.cpp`

```cpp
// Open Browser to a URL

#include <windows.h>
#include <iostream>

int main()
{
    // Tell the user what the machine is doing
    std::cout << "Opening browser to Google..." << "\n";

    // works only on windows os
    ShellExecuteA(NULL, "open", "https://www.google.com", NULL, NULL, SW_SHOWNORMAL);

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    
    return 0;
}

// g++ main.cpp -o our_test.exe

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0002_custom_function_browswer_open_url</b></summary>


### `main.cpp`

```cpp
// Custom Function - Open Browser to a URL

#include <windows.h>
#include <string>
#include <iostream>

void openURL(std::string url)
{
    std::cout << "Opening browser to " << url << "\n";
    
    // .c_str() converts our C++ string into a format Windows understands
    ShellExecuteA(NULL, "open", url.c_str(), NULL, NULL, SW_SHOWNORMAL);
}

int main()
{
    std::string url = "https://www.google.com";

    openURL(url);

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Opening browser to https://www.google.com

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0001_create_text_file_with_data</b></summary>


### `main.cpp`

```cpp
// Create Text File with Data

#include <iostream>
#include <fstream> // Required for file operations

int main()
{
    // Open file for writing
    std::ofstream outputFile("ourTextFile.txt");

    // The Professional Check: Did the file actually open?
    if (outputFile.is_open())
    {
        outputFile << "Hi Everyone\n";
        outputFile.close();
        std::cout << "Data written successfully.\n";
    }
    else
    {
        std::cerr << "Error: Could not open file for writing.\n";
        return 1; // Return a non-zero value to signal an error to the OS
    }

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Data written successfully.

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0002_create_text_file_with_data_custom_function</b></summary>


### `main.cpp`

```cpp
// Custom Function - Create Text File with Data

#include <iostream>
#include <fstream>
#include <string>

void writeToFile(std::string filename, std::string content)
{
    std::ofstream outputFile(filename);

    // Sanity Check: Ensure the engine actually has access to the disk
    if (outputFile.is_open())
    {
        outputFile << content << "\n";
        outputFile.close();
        std::cout << "Data written to " << filename << " successfully.\n";
    }
    else
    {
        // Use std::cerr for errors
        std::cerr << "Error: Could not open " << filename << " for writing.\n";
    }
}

int main()
{
    std::string filename = "ourTextFile.txt";
    std::string content = "Hi Everyone";

    writeToFile(filename, content);

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Data written to ourTextFile.txt successfully.

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0003_read_text_file</b></summary>


### `main.cpp`

```cpp
// Read a Text File

#include <iostream>
#include <string>
#include <fstream>

void displayFileContents(std::string filename)
{
    // open file for reading
    std::ifstream inputFile(filename);

    // check if the file is open
    if (!inputFile.is_open())
    {
        // Consolidated stream for efficiency
        std::cerr << "Error opening file: " << filename << "\n";
        return; // "Guard Clause" - exit the function early on failure
    }

    // read and display file contents
    std::string line;

    std::cout << "Contents of " << filename << ":\n";

    // std::getline is the professional standard for reading text files
    while (std::getline(inputFile, line))
    {
        std::cout << line << "\n";
    }

    // close the file
    inputFile.close();
}

int main()
{
    // Lock the data in main as well
    std::string filename = "ourTextFile.txt";

    displayFileContents(filename);

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Contents of ourTextFile.txt:
Hi Everyone
The day is very beautiful.
Very nice weather we are having.

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0004_count_how_many_lines</b></summary>


### `main.cpp`

```cpp
// Count Number of Lines in a Text File

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // open text file
    std::ifstream inputFile("ourTextFile.txt");

    // check if text file opened
    if (!inputFile.is_open())
    {
        std::cerr << "File won't open file."
        << "\n";

        // return an error code
        return 1;
    }

    // variable to store how many lines found in text file
    int lineCount = 0;

    // variable to store each line of text read from text file
    std::string line;

    // read text file line by line and count lines
    while (std::getline(inputFile, line))
    {
        lineCount++;
    }

    // close the file
    inputFile.close();

    // show the total number of lines
    std::cout << "Number of lines in the file: "
    << lineCount << "\n";

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Number of lines in the file: 3

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0005_count_how_many_lines_custom_function</b></summary>


### `main.cpp`

```cpp
// Count Number of Lines in a Text File

#include <iostream>
#include <fstream>
#include <string>

int countLinesInFile(std::string filename)
{
    std::ifstream inputFile(filename);

    if (!inputFile.is_open())
    {
        std::cerr << "Error: Could not open file: " << filename << "\n";
        return -1; // Pro Trick: Return -1 to signal an error, since 0 is a valid line count!
    }

    int lineCount = 0;
    std::string line;

    while (std::getline(inputFile, line))
    {
        lineCount++;
    }

    inputFile.close();

    // Hand the final data back to the Orchestrator
    return lineCount;
}

int main()
{
    // Lock the data in main
    const std::string filename = "ourTextFile.txt";

    // Call the engine and store the result
    int totalLines = countLinesInFile(filename);

    // Only display the result if the engine didn't throw our -1 error flag
    if (totalLines != -1)
    {
        std::cout << "Number of lines in the file: " << totalLines << "\n";
    }

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Number of lines in the file: 3

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 001</b></summary>


### `main.cpp`

```cpp
// Get Current Working Directory

#include <iostream>
#include <windows.h>

int main()
{
    // MAX_PATH is a Windows standard that defines the maximum length of a folder path
    wchar_t buffer[MAX_PATH];

    // Get the current working directory (The 'W' stands for Wide/Unicode)
    if (!GetCurrentDirectoryW(MAX_PATH, buffer))
    {
        // Use wcerr for wide-character error output, and \n for speed
        std::wcerr << L"Error getting current working directory\n";
        
        return 1; // Return 1 to signal a failure to the OS
    }

    // Use wcout for wide-character standard output
    std::wcout << L"Current working directory: " << buffer << L"\n";

    // Standard ASCII output is perfectly fine for simple exit prompts
    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Current working directory: D:\_1Code\_0Cpp\tutorial\0018_get_current_working_directory

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 002</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <filesystem> // The 21st-Century File System Library

int main()
{
    std::cout << "--- Tactical Directory Scanner ---\n\n";

    // THE JAVASCRIPT WAY
    // We ask the filesystem for the current path, and immediately 
    // convert it to a standard string using .string()

    std::string current_dir = std::filesystem::current_path().string();

    // SIMPLE OUTPUT
    // No 'wcout', no wide characters, just standard human-readable text!

    std::cout << "[SYSTEM] Current working directory:\n";
    std::cout << "-> " << current_dir << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Directory Scanner ---

[SYSTEM] Current working directory:
-> D:\_1Code\_0Cpp\0_git\CATopalian_CPP_Revolution\CATopalian_CPP_Revolution\src\cpp\tutorials\0018_get_current_working_directory\002

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0007_get_current_working_directory_custom_function</b></summary>


### `main.cpp`

```cpp
// Get Current Working Directory (Modular Engine)

#include <iostream>
#include <windows.h>
#include <string> // We need this for std::wstring

// THE ENGINE: Returns a Wide String (std::wstring)
std::wstring getCurrentWorkingDirectory()
{
    wchar_t buffer[MAX_PATH];

    // Ask the Windows API for the directory
    if (GetCurrentDirectoryW(MAX_PATH, buffer))
    {
        // Success: Convert the raw character buffer into a modern C++ string and hand it back
        return std::wstring(buffer);
    }
    else
    {
        // Failure: Log the error and return an empty string as a failure flag
        std::wcerr << L"Error getting current working directory\n";
        return L""; 
    }
}

// THE ORCHESTRATOR
int main()
{
    // Call the engine and store the result in a wide string
    std::wstring currentDir = getCurrentWorkingDirectory();

    // Check our error flag: If the string is NOT empty, we succeeded
    if (!currentDir.empty())
    {
        std::wcout << L"Current working directory: " << currentDir << L"\n";
    }

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Current working directory: D:\_1Code\_0Cpp\tutorial\0019_get_current_working_directory_custom_function

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 002</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <filesystem> // The 21st-Century File System

// THE CUSTOM FUNCTION
// It does one job perfectly: it finds the path and returns 
// it as a clean, human-readable string.
std::string get_current_directory()
{
    // We return the path directly. No variables needed!
    return std::filesystem::current_path().string();
}

int main()
{
    std::cout << "--- Tactical Directory Scanner (Modular) ---\n\n";

    // CALL THE FUNCTION
    // We catch the returned string exactly like 'let myPath = get_current_directory();'
    std::string my_path = get_current_directory();

    // SIMPLE OUTPUT
    std::cout << "[SYSTEM] Current working directory:\n";
    std::cout << "-> " << my_path << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Directory Scanner (Modular) ---

[SYSTEM] Current working directory:
-> D:\_1Code\_0Cpp\0_git\CATopalian_CPP_Revolution\CATopalian_CPP_Revolution\src\cpp\tutorials\0019_get_current_working_directory_custom_function\002

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 001</b></summary>


### `main.cpp`

```cpp
// Make New Folder in Specified Location

#include <iostream>
#include <windows.h>

int main()
{
    // LPCWSTR = Long Pointer to Constant Wide String
    LPCWSTR folderPath = L"C:\\Users\\energy\\Desktop\\ourNewFolder";

    // Explicitly call the 'W' (Wide/Unicode) version of the function!
    if (CreateDirectoryW(folderPath, NULL) || GetLastError() == ERROR_ALREADY_EXISTS)
    {
        // Use wcout and L"\n" for fast, safe Unicode output
        std::wcout << L"Folder created successfully or already exists: " << folderPath << L"\n";
    }
    else
    {
        std::wcerr << L"Error creating folder: " << folderPath << L"\n";
    }

    // Standard ASCII output for the exit prompt
    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Folder created successfully or already exists: C:\Users\energy\Desktop\ourNewFolder

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 002</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <filesystem> // The 21st-Century File System

// THE CUSTOM FUNCTION
// Perfectly mirrors JavaScript's fs.mkdirSync()
void create_new_folder(std::string folder_path)
{
    // std::filesystem::create_directories automatically handles the logic.
    // If the folder already exists, it doesn't crash, it just returns false!
    if (std::filesystem::create_directories(folder_path))
    {
        std::cout << "[SUCCESS] Folder created safely: " << folder_path << "\n";
    }
    else
    {
        std::cout << "[SYSTEM] Folder already exists (or could not be created): " << folder_path << "\n";
    }
}

// THE MAIN ENGINE
int main()
{
    std::cout << "--- Tactical Folder Generator ---\n\n";

    // THE CLEAN STRING PATH
    // Notice there is no 'L' prefix and no LPCWSTR pointers. 
    // It is just a perfectly normal, human-readable string.
    std::string target_location = "C:\\Users\\energy\\Desktop\\ourNewFolder";

    std::cout << "[SYSTEM] Attempting to build infrastructure at target coordinates...\n";

    // EXECUTE THE FUNCTION
    create_new_folder(target_location);

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Folder Generator ---

[SYSTEM] Attempting to build infrastructure at target coordinates...
[SUCCESS] Folder created safely: C:\Users\energy\Desktop\ourNewFolder

Press Enter to Exit...
*/

/*
--- Tactical Folder Generator ---

[SYSTEM] Attempting to build infrastructure at target coordinates...
[SYSTEM] Folder already exists (or could not be created): C:\Users\energy\Desktop\ourNewFolder

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0009_make_folder_specified_location_custom_function</b></summary>


### `main.cpp`

```cpp
// Make New Folder (Modular Engine)

#include <iostream>
#include <windows.h>
#include <string>

// THE ENGINE: Returns a Boolean (true = success, false = failure)
bool createNewFolder(std::wstring folderPath)
{
    // .c_str() safely bridges our modern C++ wstring to the old LPCWSTR format Windows expects
    if (CreateDirectoryW(folderPath.c_str(), NULL) || GetLastError() == ERROR_ALREADY_EXISTS)
    {
        return true; // The engine succeeded
    }
    else
    {
        return false; // The engine failed
    }
}

// THE ORCHESTRATOR
int main()
{
    // Lock the data in main
    const std::wstring path = L"C:\\Users\\energy\\Desktop\\ourNewFolder";

    std::wcout << L"Attempting to build directory...\n";

    // Call the engine. Because it returns a bool (true/false), we can put it directly inside an 'if' statement!
    if (createNewFolder(path))
    {
        std::wcout << L"Success: Folder is ready at " << path << L"\n";
    }
    else
    {
        std::wcerr << L"Critical Error: Could not create folder at " << path << L"\n";
    }

    // Standard ASCII output for the exit prompt
    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Attempting to build directory...
Success: Folder is ready at C:\Users\energy\Desktop\ourNewFolder

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 001</b></summary>


### `main.cpp`

```cpp
// Make a New Folder in Documents

// Dynamically Find and Make a Folder in Documents

#include <iostream>
#include <windows.h>
#include <shlobj.h> // Required for SHGetFolderPathW
#include <string>

int main()
{
    // Get the dynamic path to the user's Documents folder
    WCHAR documentsPath[MAX_PATH];

    // CSIDL_PERSONAL is the Windows constant for the "Documents" folder
    if (SHGetFolderPathW(NULL, CSIDL_PERSONAL, NULL, 0, documentsPath) != S_OK)
    {
        std::wcerr << L"Critical Error: Could not locate Documents folder.\n";
        return 1;
    }

    // Safely append the new folder name using modern std::wstring
    std::wstring newFolderPath = std::wstring(documentsPath) + L"\\StarfleetData";

    // 3. Create the new folder
    if (CreateDirectoryW(newFolderPath.c_str(), NULL) || GetLastError() == ERROR_ALREADY_EXISTS)
    {
        std::wcout << L"Success: Folder is ready at " << newFolderPath << L"\n";
    }
    else
    {
        // If it fails for another reason, print the exact Windows Error Code
        std::wcerr << L"Error creating folder. Code: " << GetLastError() << L"\n";
        return 1;
    }

    // Standard exit prompt
    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Success: Folder is ready at C:\Users\energy\Documents\StarfleetData

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 002</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <filesystem>
#include <cstdlib>

// THE CUSTOM FUNCTION
// Pointer-free, mathematically secure infrastructure building.
void create_starfleet_directory(std::string folder_name)
{
    // THE AUTO SHIELD
    // The OS tries to hand us a raw pointer, but we catch it with 'auto'.
    // No asterisks (*). No legacy C types. The compiler handles the dirt.
    auto os_drive = std::getenv("USERPROFILE");

    // THE SAFETY GATE
    // We simply check if the OS actually found anything.
    if (!os_drive)
    {
        std::cout << "[CRITICAL ERROR] Could not locate the user's home drive.\n";
        return; 
    }

    // THE SECURE BUNKER
    // We instantly teleport the OS data into our safe, modern String.
    std::string secure_home = os_drive;

    // Build the exact path cleanly
    std::string full_path = secure_home + "\\Documents\\" + folder_name;

    // The Easy Button: Create the infrastructure
    if (std::filesystem::create_directories(full_path))
    {
        std::cout << "[SUCCESS] Infrastructure built at: " << full_path << "\n";
    }
    else
    {
        std::cout << "[SYSTEM] Folder already active at: " << full_path << "\n";
    }
}

int main()
{
    std::cout << "--- Starfleet Academy: Environmental Setup ---\n\n";

    create_starfleet_directory("StarfleetData");
    create_starfleet_directory("StarfleetData\\MissionLogs");

    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Starfleet Academy: Environmental Setup ---

[SYSTEM] Folder already active at: C:\Users\energy\Documents\StarfleetData
[SUCCESS] Infrastructure built at: C:\Users\energy\Documents\StarfleetData\MissionLogs
[SUCCESS] Infrastructure built at: C:\Users\energy\Documents\StarfleetData\PersonnelFiles

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0011_make_folder_on_desktop_custom_function</b></summary>


### `main.cpp`

```cpp
// Create Folder on Desktop (Modular Engine)

#include <iostream>
#include <windows.h>
#include <shlobj.h> // Required for SHGetFolderPathW
#include <string>

// THE ENGINE: Returns a Boolean (true = success, false = failure)
// We pass ONLY the desired folder name. The engine handles all the path math!
bool createDesktopFolder(std::wstring folderName)
{
    WCHAR desktopPath[MAX_PATH];

    // CSIDL_DESKTOPDIRECTORY is the specific constant for the user's Desktop
    if (SHGetFolderPathW(NULL, CSIDL_DESKTOPDIRECTORY, NULL, 0, desktopPath) != S_OK)
    {
        std::wcerr << L"Critical Error: Could not locate Desktop folder.\n";
        return false; // Fail early
    }

    // Safely append the requested folder name to the Desktop path
    std::wstring fullPath = std::wstring(desktopPath) + L"\\" + folderName;

    // Create the directory
    if (CreateDirectoryW(fullPath.c_str(), NULL) || GetLastError() == ERROR_ALREADY_EXISTS)
    {
        return true; // The engine succeeded
    }
    else
    {
        // If it fails, print the exact Windows Error Code to the error stream
        std::wcerr << L"Error creating folder. Code: " << GetLastError() << L"\n";
        return false; // The engine failed
    }
}

// THE ORCHESTRATOR
int main()
{
    std::wstring newFolder = L"StarfleetComms";

    std::wcout << L"Initializing Desktop Directory Engine...\n";

    // Call the engine directly inside the 'if' condition
    if (createDesktopFolder(newFolder))
    {
        std::wcout << L"Success: '" << newFolder << L"' is ready on your Desktop.\n";
    }
    else
    {
        std::wcerr << L"System Failure: Could not establish folder.\n";
    }

    // Standard ASCII output for the exit prompt
    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Initializing Desktop Directory Engine...
Success: 'StarfleetComms' is ready on your Desktop.

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0012_get_files_in_folder</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <filesystem> // The 21st-Century File System

// THE CUSTOM FUNCTION
// It promises to return a clean array (vector) of strings.
std::vector<std::string> get_files_in_folder(std::string target_folder)
{
    // Create an empty array to hold our file names
    std::vector<std::string> file_list;

    // THE COZY LOOP
    // We ask the filesystem to look inside the folder.
    // 'auto' figures out what the file object is automatically!
    for (auto file_item : std::filesystem::directory_iterator(target_folder))
    {
        // We grab the name of the file and push it into our array
        file_list.push_back(file_item.path().filename().string());
    }

    return file_list; // Teleport the filled array back safely!
}

// THE MAIN ENGINE
int main()
{
    std::cout << "--- Tactical Folder Scanner ---\n\n";

    // Grab the current directory using our easy trick from the last lesson
    std::string current_dir = std::filesystem::current_path().string();

    std::cout << "[SYSTEM] Scanning: " << current_dir << "\n\n";

    // CALLING THE FUNCTION
    // We use 'auto' to catch the returned array so we don't have 
    // to type out 'std::vector<std::string>' again. Pure simplicity.
    auto my_files = get_files_in_folder(current_dir);

    // DISPLAY THE RESULTS
    std::cout << "Files detected:\n";
    for (auto file_name : my_files)
    {
        std::cout << "-> " << file_name << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Folder Scanner ---

[SYSTEM] Scanning: D:\_1Code\_0Cpp\0_git\CATopalian_CPP_Revolution\CATopalian_CPP_Revolution\src\cpp\tutorials\0069_get_files_in_folder

Files detected:
-> main.cpp
-> our_test.exe

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0001_object</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>

// we must define the structure first
struct User {
    std::string name;
    int age;
    bool isActive;
};

int main() {
    // Instantiate using designated initializers
    User user = {
        .name = "Alice",
        .age = 30,
        .isActive = true
    };

    std::cout << user.name << " is " << user.age << " years old.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Alice is 30 years old.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0001_array_of_objects</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>

// THE BLUEPRINT
struct Person {
    std::string name;
    int age;
};

int main()
{
    std::cout << "--- Tactical Roster ---\n\n";

    // THE ARRAY OF OBJECTS
    // We use the periods (Designated Initializers) to keep the data 
    // strictly mapped, flexible, and perfectly readable.
    std::vector<Person> people = {
        {
            .name = "Alice",
            .age = 25
        },

        {
            .name = "Bob",
            .age = 30
        },

        {
            .name = "Jane",
            .age = 28
        }
    };

    // Pure Data-Oriented indexing. Zero ampersands. Zero pointers.
    // We access the memory directly using [i].
    for (int i = 0; i < people.size(); i++)
    {
        std::cout << "Name: " << people[i].name 
        << " | Age: " << people[i].age << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Tactical Roster ---

Name: Alice | Age: 25
Name: Bob | Age: 30
Name: Jane | Age: 28

Press Enter to Exit...
*/
```


</details>

---

<details>
<summary><b>Section: 001</b></summary>


### `main.cpp`

```cpp
// array_of_objects

// Array of Objects - Zero Ampersand Paradigm

#include <iostream>
#include <string>
#include <vector>

struct Person {
    std::string name;
    int age;
};

int main()
{
    // Initializing our "Array of Objects"
    std::vector<Person> people = {
        {
            "Alice",
            25
        },

        {
            "Bob",
            30
        },

        {
            "Jane",
            28
        }
    };

    // The CATopalian Loop: Pure Data-Oriented indexing. Zero ampersands.
    // We access the memory directly using [i], bypassing the need for reference variables.
    for (int i = 0; i < people.size(); i++)
    {
        std::cout << "Name: " << people[i].name 
        << ", Age: " << people[i].age << "\n";
    }

    std::cout << "\nPress Enter to Exit";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Name: Alice, Age: 25
Name: Bob, Age: 30
Name: Jane, Age: 28

Press Enter to Exit
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0002_array_of_objects</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

// THE BLUEPRINT
struct Entity {
    std::string name;
    int score;
};

int main() 
{
    std::cout << "--- Tactical Entity Tracker ---\n\n";

    // THE ARRAY OF OBJECTS (Using Designated Initializers)
    std::vector<Entity> world = {
        {
            .name = "Jane",
            .score = 95
        },
        {
            .name = "Bob",
            .score = 80
        }
    };

    // DYNAMIC PUSH
    world.push_back({
        .name = "Sam",
        .score = 72
    });

    // THE CATOPALIAN LOOP (The One True Way)
    // We loop using 'i' for index. It mirrors JavaScript perfectly.
    // It gives us read AND write access with zero ampersands or pointers!
    for (int i = 0; i < world.size(); i++)
    {
        std::cout << "* " << world[i].name << " has a score of: " << world[i].score << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Tactical Entity Tracker ---

* Jane has a score of: 95
* Bob has a score of: 80
* Sam has a score of: 72

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 001</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

// Define the shape of your object (Just like a JS Class or struct)
struct Entity {
    std::string name;
    int score;
};

int main() {
    // Create the array of objects (Notice how much this looks like JSON!)
    std::vector<Entity> world = {
        {
            .name = "Jane",
            .score = 95
        },

        {
            .name = "Bob",
            .score = 80
        }
    };

    // Push a new object dynamically
    world.push_back(
        {
            .name = "Sam",
            .score = 72
        }
    );

    // Loop through the array by value 
    // We use 'auto' here so the language figures out the type, just like 'let'
    for (auto e : world)
    {
        std::cout << e.name << " has a score of: " << e.score << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Jane has a score of: 95
Bob has a score of: 80
Sam has a score of: 72
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 002</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

// THE DATA BLUEPRINT
// The order here is strict: Name first, Score second.
struct Entity {
    std::string name;
    int score;
};

int main() 
{
    std::vector<Entity> world = {
        {
            "Jane",
            95
        },

        {
            "Bob",
            80
        }
    };

    // DYNAMIC PUSH
    // Exactly the same clean syntax when appending data on the fly.
    world.push_back({ "Sam", 72 });

    // THE LOOP
    // 'auto' figures out the type, keeping the loop visually clean.
    for (auto e : world) 
    {
        std::cout << "-> " << e.name << " has a score of: " << e.score << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Entity Tracker ---

-> Jane has a score of: 95
-> Bob has a score of: 80
-> Sam has a score of: 72

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0003_array_of_objects</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

// THE BLUEPRINT
struct Person {
    std::string firstName;
    std::string lastName;
    int score;
};

int main()
{
    std::cout << "--- Tactical Roster ---\n\n";

    // THE ARRAY OF OBJECTS
    // Notice how much this looks like JSON!
    // Because we use periods, we can safely skip '.lastName' without errors.
    std::vector<Person> world = {
        {
            .firstName = "Jane",
            .score = 95
        },

        {
            .firstName = "Bob", 
            .score = 80
        }
    };

    // PUSH A NEW OBJECT DYNAMICALLY
    world.push_back(
        {
            .firstName = "Sam",
            .score = 72
        }
    );

    // THE CATOPALIAN LOOP
    // Pure Data-Oriented indexing. Zero ampersands. 
    // We access the memory directly using [i], perfectly mirroring JavaScript.
    for (int i = 0; i < world.size(); i++)
    {
        std::cout << "* " << world[i].firstName 
        << " has a score of: " << world[i].score << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Tactical Roster ---

* Jane has a score of: 95
* Bob has a score of: 80
* Sam has a score of: 72

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 001</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

struct Person {
    std::string firstName;
    std::string lastName;
    int score;
};

int main()
{
    // Create the array of objects (Notice how much this looks like JSON!)
    std::vector<Person> world = {
        {
            .firstName = "Jane",
            .score = 95
        },

        {
            .firstName = "Bob", 
            .score = 80
        }
    };

    // Push a new object dynamically
    world.push_back(
        {
            .firstName = "Sam",
            .score = 72
        }
    );

    // Loop through the array by value 
    // We use 'auto' here so the language figures out the type, just like 'let'
    for (auto e : world)
    {
        std::cout << e.firstName << " has a score of: " << e.score << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Jane has a score of: 95
Bob has a score of: 80
Sam has a score of: 72
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 002</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

// THE DATA BLUEPRINT
// The order here matters: First Name, Last Name, Score.
struct Person {
    std::string firstName;
    std::string lastName;
    int score;
};

int main()
{
    std::cout << "--- Tactical Roster ---\n\n";

    // THE CLEAN ARRAY
    // Zero periods. We just feed it the data in the correct order
    std::vector<Person> world = {
        {
            "Jane",
            "Doe",
            95
        },

        {
            "Bob",
            "Smith",
            80
        }
    };

    // DYNAMIC PUSH
    // Exactly the same clean syntax when adding new data on the fly.
    world.push_back({ "Sam", "Jones", 72 });

    // THE LOOP
    // 'auto' does all the heavy lifting.
    for (auto e : world)
    {
        std::cout << "-> " << e.firstName << " " << e.lastName 
            << " | Score: " << e.score << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Roster ---

-> Jane Doe | Score: 95
-> Bob Smith | Score: 80
-> Sam Jones | Score: 72
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0004_filter_by_score</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

// THE BLUEPRINT
struct Person {
    std::string firstName;
    std::string lastName;
    int score;
};

int main()
{
    std::cout << "--- Tactical Roster Filter ---\n\n";

    // THE ARRAY OF OBJECTS (Using Designated Initializers)
    std::vector<Person> world = {
        {
            .firstName = "Jane",
            .lastName = "Doe",
            .score = 95
        },
        {
            .firstName = "Bob",
            .lastName = "Smith",
            .score = 80
        },
        {
            .firstName = "Joan",
            .lastName = "Lee",
            .score = 97
        }
    };

    // PUSH A NEW OBJECT DYNAMICALLY
    world.push_back(
        {
            .firstName = "Sam",
            .lastName = "Reed",
            .score = 72
        }
    );

    // THE FILTER ENGINE
    bool found_any = false;

    std::cout << "[SYSTEM] Searching for scores above 95...\n\n";

    // The CATopalian Loop: Pure, secure data indexing.
    for (int i = 0; i < world.size(); i++)
    {
        // Check if the current person meets our elite criteria
        if (world[i].score > 95)
        {
            std::cout << "* ELITE DETECTED: " << world[i].firstName 
                << " " << world[i].lastName 
                << " | Score: " << world[i].score << "\n";

            // Flip the flag so the system knows we found someone
            found_any = true; 
        }
    }

    // THE FAILSAFE
    // If the loop finished and our flag is still false, report it.
    if (!found_any)
    {
        std::cout << "* No one has a score above 95.\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Tactical Roster Filter ---

[SYSTEM] Searching for scores above 95...

* ELITE DETECTED: Joan Lee | Score: 97

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 001</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

struct Person {
    std::string firstName;
    std::string lastName;
    int score;
};

int main()
{
    // Create the array of objects (Notice how much this looks like JSON!)
    std::vector<Person> world = {
        {
            .firstName = "Jane",
            .lastName = "Doe",
            .score = 95
        },

        {
            .firstName = "Bob",
            .lastName = "Smith",
            .score = 80
        },

        {
            .firstName = "Joan",
            .lastName = "Lee",
            .score = 97
        }
    };

    // Push a new object dynamically
    world.push_back(
        {
            .firstName = "Sam",
            .lastName = "Reed",
            .score = 72
        }
    );

    // Filter: only print names of people scoring above 95
    bool found_any = false;

    for (auto e : world)
    {
        if (e.score > 95)
        {
            std::cout << e.firstName << " has a score of: " << e.score << "\n";
            found_any = true;
        }
    }

    if (!found_any)
    {
        std::cout << "No one has a score above 95\n";
    }

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Joan has a score of: 97
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0005_filter_by_score</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

// THE BLUEPRINT
struct Person {
    std::string firstName;
    std::string lastName;
    int score;
};

int main()
{
    std::cout << "--- Tactical Roster: Data Extraction ---\n\n";

    // THE MAIN ARRAY
    // Our starting data. We safely skip '.lastName' thanks to the periods!
    std::vector<Person> world = {
        {
            .firstName = "Jane",
            .score = 95
        },
        {
            .firstName = "Bob",
            .score = 80
        },
        {
            .firstName = "Joan",
            .score = 97
        }
    };

    // THE EXTRACTION ARRAY
    // We create a clean, empty array waiting to catch the winners.
    std::vector<Person> high_scorers;

    // THE FILTER ENGINE (The CATopalian Loop)
    // We loop through the entire world securely.
    for (int i = 0; i < world.size(); i++)
    {
        if (world[i].score > 90)
        {
            // If they scored over 90, push a copy of them into the new array!
            high_scorers.push_back(world[i]);
        }
    }

    std::cout << "[SYSTEM] Extraction Complete. Displaying Elite Roster:\n\n";

    // VERIFYING THE EXTRACTION
    // Now we loop through our NEW array to prove they were successfully saved.
    // Notice we use 'i' again here securely.
    for (int i = 0; i < high_scorers.size(); i++)
    {
        std::cout << "* " << high_scorers[i].firstName << " is elite!\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
--- Tactical Roster: Data Extraction ---

[SYSTEM] Extraction Complete. Displaying Elite Roster:

* Jane is elite!
* Joan is elite!

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 001</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

struct Person {
    std::string firstName;
    std::string lastName;
    int score;
};

int main()
{
    std::vector<Person> world =
    {
        {
            .firstName = "Jane",
            .score = 95
        },

        {
            .firstName = "Bob",
            .score = 80
        },

        {
            .firstName = "Joan",
            .score = 97
        }
    };

    // Create a clean, empty array for the winners
    std::vector<Person> high_scorers;

    // Loop through the world
    for (auto p : world)
    {
        if (p.score > 90)
        {
            // Push them into the new array
            high_scorers.push_back(p);
        }
    }

    // Now 'high_scorers' only contains Jane and Joan
    for (auto e : high_scorers)
    {
        std::cout << e.firstName << " is elite!\n";
    }

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Jane is elite!
Joan is elite!
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0001_random_float_0_to_1</b></summary>


### `main.cpp`

```cpp
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
```


</details>

---

<details>
<summary><b>Section: 0002_random_float_0_to_1_custom_function</b></summary>


### `main.cpp`

```cpp
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

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0003_random_integer_1_to_10_custom_function</b></summary>


### `main.cpp`

```cpp
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

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0013_logic_gates</b></summary>


### `main.cpp`

```cpp
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
```


</details>

---

<details>
<summary><b>Section: 0001_ooo</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <unordered_map>

// Define the "Inner Object" as a clean struct (Data-Oriented Design)
struct Robot {
    std::string type;
    int health;
    int x;
    int y;
};

int main() {
    // Create the "Object of Objects" Hash Table
    // Think of this like: let fleet = {};
    // It maps a String (the ID) to a Robot struct.
    std::unordered_map<std::string, Robot> fleet;

    // Populate the world database instantly!
    fleet["rover_01"] = {"Scout", 100, 45, 120};
    fleet["rover_02"] = {"Tank", 500, 10, 20};
    fleet["drone_01"] = {"Air", 50, 200, 300};

    // INSTANT LOOKUP (No loops required!)
    // Read a value just like JavaScript
    std::cout << "Rover 01 Health: " << fleet["rover_01"].health << "\n";

    // UPDATE A VALUE
    // Update the position of drone_01
    fleet["drone_01"].x = 250;
    fleet["drone_01"].y = 350;

    std::cout << "Drone 01 moved to X: " << fleet["drone_01"].x << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
    // Memory is automatically and safely cleaned up here!
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
Rover 01 Health: 100
Drone 01 moved to X: 250

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0033_returning_multiple_values</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>

// THE DATA PACKET
// This acts exactly like a JSON object in JavaScript.
// It simply holds our data. No logic, no pointers.
struct DiagnosticData 
{
    float voltage;
    float temperature;
    std::string status;
};

// THE PURE FUNCTION
// Zero ampersands. We build the packet locally and 
// return the entire object by value.
DiagnosticData get_system_diagnostics() 
{
    DiagnosticData reading;

    // Simulating raw hardware data gathering
    reading.voltage = 12.4f;
    reading.temperature = 42.8f;
    reading.status = "Nominal";

    return reading; // The compiler safely teleports this back
}

int main() 
{
    std::cout << "--- System Diagnostics ---\n";

    // Receive the data package exactly like a scripting language
    DiagnosticData current_status = get_system_diagnostics();

    // Output the safe, isolated data
    std::cout << "Voltage:     " << current_status.voltage << "V\n";
    std::cout << "Temperature: " << current_status.temperature << "C\n";
    std::cout << "Status:      " << current_status.status << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- System Diagnostics ---
Voltage:     12.4V
Temperature: 42.8C
Status:      Nominal

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 001</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

// THE DATA UNIT
// A pure data structure containing sensor metrics.
struct TelemetryPacket
{
    int device_id;
    float reading;
};

// THE PIPE FUNCTION
// Receives a full vector copy, processes it inside the bunker,
// and returns a fresh, isolated vector. Zero references.
std::vector<TelemetryPacket> filter_critical_packets(std::vector<TelemetryPacket> stream, float threshold)
{
    std::vector<TelemetryPacket> critical_bunker;

    for (size_t i = 0; i < stream.size(); i++)
    {
        if (stream[i].reading > threshold)
        {
            critical_bunker.push_back(stream[i]);
        }
    }

    return critical_bunker; // Instantly transferred via native Move Semantics
}

int main()
{
    // Create the original dataset
    std::vector<TelemetryPacket> original_stream;
    original_stream.push_back({101, 14.2f});
    original_stream.push_back({102, 98.6f}); // Critical
    original_stream.push_back({103, 33.1f});
    original_stream.push_back({104, 112.4f}); // Critical

    std::cout << "Total Packets Processed: " << original_stream.size() << "\n";

    // Pass through the pipe to generate an isolated subset
    std::vector<TelemetryPacket> alerts = filter_critical_packets(original_stream, 50.0f);

    std::cout << "Critical Alerts Isolated: " << alerts.size() << "\n\n";

    for (size_t i = 0; i < alerts.size(); i++)
    {
        std::cout << "Device ID: " << alerts[i].device_id 
        << " | Intensity: " << alerts[i].reading << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Total Packets Processed: 4
Critical Alerts Isolated: 2

Device ID: 102 | Intensity: 98.6
Device ID: 104 | Intensity: 112.4

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 002</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

struct TelemetryPacket
{
    int device_id;
    float reading;
};

// Takes a full list, gives back a new list containing only
// the entries whose reading is above the threshold.
// Nothing about the original list is touched or changed.
std::vector<TelemetryPacket> filter_critical_packets(std::vector<TelemetryPacket> stream, float threshold)
{
    std::vector<TelemetryPacket> alerts;

    for (auto packet : stream)
    {
        if (packet.reading > threshold)
        {
            alerts.push_back(packet);
        }
    }

    return alerts;
}

int main()
{
    std::vector<TelemetryPacket> original_stream = {
        {.device_id = 101, .reading = 14.2f},
        {.device_id = 102, .reading = 98.6f},
        {.device_id = 103, .reading = 33.1f},
        {.device_id = 104, .reading = 112.4f}
    };

    std::cout << "Total Packets Processed: " << original_stream.size() << "\n";

    std::vector<TelemetryPacket> alerts = filter_critical_packets(original_stream, 50.0f);

    std::cout << "Critical Alerts Isolated: " << alerts.size() << "\n\n";

    for (auto alert : alerts)
    {
        std::cout << "Device ID: " << alert.device_id
        << " | Intensity: " << alert.reading << "\n";
    }

    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Total Packets Processed: 4
Critical Alerts Isolated: 2

Device ID: 102 | Intensity: 98.6
Device ID: 104 | Intensity: 112.4

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 003</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>

// 1. THE DATA UNIT
struct TelemetryPacket 
{
    int device_id;
    float reading;
};

// 2. THE SIMPLE SCRIPTING PIPE
// We still define the inputs clearly, but the inside is super clean.
std::vector<TelemetryPacket> filter_critical_packets(std::vector<TelemetryPacket> stream, float threshold)
{
    // Create an empty array to hold the alerts
    std::vector<TelemetryPacket> alerts;

    // The Cozy Loop: Reads exactly like a JavaScript 'for...of' loop!
    for (auto packet : stream) 
    {
        if (packet.reading > threshold) 
        {
            alerts.push_back(packet); // Just push it in!
        }
    }

    return alerts; // Teleport it back safely
}

int main()
{
    std::cout << "--- Tactical Sensor Engine ---\n\n";

    // 3. JS-STYLE INITIALIZATION
    // Looks exactly like a JSON array of objects
    std::vector<TelemetryPacket> original_stream = {
        { .device_id = 101, .reading = 14.2f },
        { .device_id = 102, .reading = 98.6f }, // Critical
        { .device_id = 103, .reading = 33.1f },
        { .device_id = 104, .reading = 112.4f } // Critical
    };

    // 4. THE 'AUTO' CATCH
    // We don't need to type the heavy vector name again.
    // 'auto' figures it out automatically, just like 'let'.
    auto critical_alerts = filter_critical_packets(original_stream, 50.0f);

    std::cout << "[SYSTEM] Found " << critical_alerts.size() << " critical alerts:\n";

    // 5. SIMPLE PRINTING LOOP
    for (auto alert : critical_alerts)
    {
        std::cout << "-> Device ID: " << alert.device_id << " | Intensity: " << alert.reading << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Sensor Engine ---

[SYSTEM] Found 2 critical alerts:
-> Device ID: 102 | Intensity: 98.6
-> Device ID: 104 | Intensity: 112.4

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0035_null_free_search</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <optional> // The 21st-Century tool for safe missing data

// THE DATA UNIT
struct RadarContact
{
    int id;
    std::string classification;
    float distance;
};

// THE SECURE SEARCH FUNCTION
// Returns an 'optional' lockbox by value. 
// Zero pointers. Zero risk of a null-dereference crash.
std::optional<RadarContact> scan_for_target(std::vector<RadarContact> grid, int target_id)
{
    for (size_t i = 0; i < grid.size(); i++)
    {
        // If we find it, we put the pristine copy into the lockbox and return it
        if (grid[i].id == target_id)
        {
            return grid[i]; 
        }
    }

    // If the loop finishes and nothing is found, we return an empty lockbox.
    // std::nullopt is completely safe and requires no memory management.
    return std::nullopt;
}

int main()
{
    // Build a test grid
    std::vector<RadarContact> active_grid;
    active_grid.push_back({105, "Friendly Drone", 12.5f});
    active_grid.push_back({404, "Unknown Aircraft", 85.2f});
    active_grid.push_back({909, "Weather Balloon", 40.1f});

    std::cout << "--- Radar Scan Initiated ---\n";

    // Perform the scan. We are looking for ID 404.
    // The result is safely stored in our local lockbox.
    std::optional<RadarContact> result = scan_for_target(active_grid, 404);

    // Safely check the lockbox BEFORE extracting the data
    if (result.has_value())
    {
        // .value() safely extracts the data object from the box
        std::cout << "Target Acquired!\n";
        std::cout << "Class: " << result.value().classification << "\n";
        std::cout << "Range: " << result.value().distance << " km\n";
    }
    else
    {
        std::cout << "Target not found in current sector.\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Radar Scan Initiated ---
Target Acquired!
Class: Unknown Aircraft
Range: 85.2 km

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0036_safe_string_protocol_(buffer_overflow_immunity)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>

// THE SECURE STRING FUNCTION
// Inputs are passed purely by value. 
// Zero char*, zero malloc(), zero buffer overflow risk.
std::string generate_secure_log(std::string clearance, std::string operative, std::string action)
{
    // DYNAMIC ALLOCATION WITHOUT POINTERS
    // We concatenate strings exactly like JavaScript.
    // The C++ compiler invisibly calculates the exact memory needed,
    // safely resizes the bunker, and prevents any overflow.
    std::string log_entry = "[" + clearance + "] " + operative + " executed: " + action;

    // RETURN BY VALUE
    // The finished string is teleported safely back to main.
    return log_entry;
}

int main()
{
    std::cout << "--- Tactical Comms Uplink ---\n\n";

    // Clean, readable variables
    std::string level = "TOP SECRET";
    std::string user = "Alpha-Actual";
    std::string command = "UAV_SWARM_DEPLOY";

    // Generate the log securely
    std::string final_report = generate_secure_log(level, user, command);

    // Output the pristine data
    std::cout << final_report << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Comms Uplink ---

[TOP SECRET] Alpha-Actual executed: UAV_SWARM_DEPLOY

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0037_secure_dictionary_json_parity</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <unordered_map> // The 21st-Century Dictionary
#include <optional>

// THE DICTIONARY ALIAS (Rule 5 compliance)
// We create a clean nickname for our map. It maps a String Key to a String Value.
// This acts EXACTLY like a JavaScript Object.
using DroneRegistry = std::unordered_map<std::string, std::string>;

// THE SECURE LOOKUP BUNKER
// Passed purely by value. We check the dictionary safely.
// ========================================================
std::optional<std::string> get_drone_status(DroneRegistry bunker_map, std::string search_key)
{
    // C++20 gives us the ".contains()" method. 
    // It safely checks if the key exists without creating a memory error.
    if (bunker_map.contains(search_key))
    {
        return bunker_map.at(search_key); // Teleport the pristine value back
    }
    
    return std::nullopt; // Return the empty lockbox if not found
}

int main()
{
    std::cout << "--- Tactical Fleet Registry ---\n\n";

    // INITIALIZE LIKE JAVASCRIPT
    // Look at how clean this is. No pointers, no malloc. 
    // Just pure, readable data mapping.
    DroneRegistry fleet_status = {
        {"Alpha-1", "Airborne"},
        {"Bravo-2", "Refueling"},
        {"Charlie-3", "Maintenance"}
    };

    std::string target = "Bravo-2";
    std::cout << "Requesting status for: " << target << "...\n";

    // PERFORM THE SECURE LOOKUP
    std::optional<std::string> result = get_drone_status(fleet_status, target);

    if (result.has_value())
    {
        std::cout << "STATUS ACQUIRED: " << result.value() << "\n";
    }
    else
    {
        std::cout << "ERROR: Drone ID not found in registry.\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Fleet Registry ---

Requesting status for: Bravo-2...
STATUS ACQUIRED: Refueling

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0038_type_safe_variant_(polymorphism_without_pointers)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <variant> // The 21st-Century answer to void* and type-casting

// THE VARIANT DEFINITION
// A Payload can hold a string, an int, OR a float. 
// It can only hold ONE at a time, stored cleanly by value.
using Payload = std::variant<std::string, int, float>;

// THE SECURE COMS PROCESSOR
// Processes the mixed data payload safely with zero pointers.
void process_payload(Payload packet)
{
    std::cout << "Processing Packet: ";

    // std::holds_alternative checks what type is currently inside the bunker
    if (std::holds_alternative<std::string>(packet))
    {
        // std::get extracts the explicit type safely
        std::string text = std::get<std::string>(packet);
        std::cout << "[TEXT INSTR] -> " << text << "\n";
    }
    else if (std::holds_alternative<int>(packet))
    {
        int command_code = std::get<int>(packet);
        std::cout << "[CMD CODE]  -> System Command #" << command_code << "\n";
    }
    else if (std::holds_alternative<float>(packet))
    {
        float coordinate = std::get<float>(packet);
        std::cout << "[COORD DATA] -> Position Offset: " << coordinate << "\n";
    }
}

int main()
{
    std::cout << "--- Secure Multi-Type Pipeline ---\n\n";

    // CREATE A MIXED VECTOR BY VALUE
    // This looks and acts exactly like a flexible JavaScript array
    std::vector<Payload> communication_bus;

    // Load different types into the exact same array layout
    communication_bus.push_back("INITIALIZE_SYSTEM"); // String
    communication_bus.push_back(101);                  // Integer Code
    communication_bus.push_back(45.75f);               // Float Coordinate
    communication_bus.push_back("SHUTDOWN_PERIMETER"); // String

    // RUN THROUGH THE SECURE PIPELINE
    for (size_t i = 0; i < communication_bus.size(); i++)
    {
        process_payload(communication_bus[i]);
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Secure Multi-Type Pipeline ---

Processing Packet: [TEXT INSTR] -> INITIALIZE_SYSTEM
Processing Packet: [CMD CODE]  -> System Command #101
Processing Packet: [COORD DATA] -> Position Offset: 45.75
Processing Packet: [TEXT INSTR] -> SHUTDOWN_PERIMETER

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0039_secure_event_trigger_(lambdas_and_callbacks)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <functional> // The 21st-Century Event Engine tool

// ========================================================
// 1. THE EVENT ALIAS
// We define what an event looks like.
// This says: "An Action is any function that takes a string by value."
// ========================================================
using Action = std::function<void(std::string)>;

// ========================================================
// 2. THE SECURE EVENT BUS
// We pass the Action purely by value. Zero function pointers.
// ========================================================
void trigger_radar_event(std::string target_name, Action callback)
{
    std::cout << "[SYSTEM] Radar sweep complete.\n";
    std::cout << "[SYSTEM] Target isolated: " << target_name << "\n";
    
    // Execute the safe behavior passed into the bunker
    callback(target_name); 
}

int main()
{
    std::cout << "--- Tactical Event Engine ---\n\n";

    // 3. THE LAMBDA (Anonymous Function)
    // This looks and acts EXACTLY like a JavaScript arrow function: () => {}
    // It creates a block of logic we can store in a safe variable.
    Action deploy_intercept = [](std::string target) 
    {
        std::cout << "[ACTION] Deploying interceptor drones to intercept " << target << "!\n";
    };

    Action log_warning = [](std::string target) 
    {
        std::cout << "[ACTION] Logging warning: " << target << " entered restricted airspace.\n";
    };

    // 4. PASSING BEHAVIOR AS DATA
    // We hand the logic into the function without any dangerous memory routing.
    std::cout << "--- Scenario 1 ---\n";
    trigger_radar_event("Hostile_UAV_01", deploy_intercept);

    std::cout << "\n--- Scenario 2 ---\n";
    trigger_radar_event("Civilian_Helicopter", log_warning);

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Event Engine ---

--- Scenario 1 ---
[SYSTEM] Radar sweep complete.
[SYSTEM] Target isolated: Hostile_UAV_01
[ACTION] Deploying interceptor drones to intercept Hostile_UAV_01!

--- Scenario 2 ---
[SYSTEM] Radar sweep complete.
[SYSTEM] Target isolated: Civilian_Helicopter
[ACTION] Logging warning: Civilian_Helicopter entered restricted airspace.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0040_secure_async_promise_(deadlock_free_multithreading)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <future> // The 21st-Century Multithreading Tool
#include <chrono>

// THE HEAVY BACKGROUND FUNCTION
// This runs on a completely separate CPU core.
// It takes inputs by value and returns by value. Zero shared memory.
std::string analyze_satellite_imagery(std::string image_data)
{
    std::cout << "[CORE 2] Analyzing imagery: " << image_data << "...\n";
    
    // Simulate a heavy, 3-second calculation
    std::this_thread::sleep_for(std::chrono::seconds(3));

    return "TARGET_IDENTIFIED_AT_COORDINATES_45_90"; // Return pristine data
}

int main()
{
    std::cout << "--- Tactical Multithreading Engine ---\n\n";
    
    std::string raw_image = "Sector_7G_Scan";

    // THE ASYNC DISPATCH
    // We launch the heavy function on a background thread.
    // It instantly returns a 'std::future' (just like a JS Promise).
    // The main thread DOES NOT STOP. It keeps running.
    std::cout << "[CORE 1] Dispatching image to background core...\n";
    std::future<std::string> secure_promise = std::async(std::launch::async, analyze_satellite_imagery, raw_image);

    // THE MAIN LOOP CONTINUES
    // While Core 2 is thinking, Core 1 can do other things!
    std::cout << "[CORE 1] Maintaining flight controls and telemetry...\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "[CORE 1] Adjusting altitude...\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "[CORE 1] Polling sensors...\n";

    // RETRIEVING THE DATA
    // When we finally need the result, we call .get().
    // If the background thread isn't done, it waits safely.
    // If it is done, it extracts the data by value.

    std::cout << "\n[CORE 1] Requesting analysis results...\n";
    std::string result = secure_promise.get(); 
    
    std::cout << "[CORE 1] Analysis Received: " << result << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Multithreading Engine ---

[CORE 1] Dispatching image to background core...
[CORE 1] Maintaining flight controls and telemetry...
[CORE 2] Analyzing imagery: Sector_7G_Scan...
[CORE 1] Adjusting altitude...
[CORE 1] Polling sensors...

[CORE 1] Requesting analysis results...
[CORE 1] Analysis Received: TARGET_IDENTIFIED_AT_COORDINATES_45_90

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0041_panic_free_error_handling_(the_result_lockbox)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <variant>

// THE RESULT ALIAS (The Secure Error Lockbox)
// This variant holds EITHER a successful float (temperature)
// OR a string containing an error message. It cannot hold both.
using SensorResult = std::variant<float, std::string>;

// THE DETERMINISTIC FUNCTION
// Zero 'throw' statements. Zero invisible crashes.
SensorResult read_engine_temperature(int sensor_id)
{
    // Simulating a broken sensor
    if (sensor_id == 404)
    {
        // Instead of crashing the engine, we safely return an error string
        return "CRITICAL_ERROR: Sensor 404 is offline or damaged.";
    }

    // If everything is fine, we return the pure data
    float current_temp = 85.5f;
    return current_temp; 
}

int main()
{
    std::cout << "--- Tactical Diagnostic System ---\n\n";

    // SECURE ERROR CHECKING
    // We check Sensor 1 (Online)
    std::cout << "Polling Sensor 1...\n";
    SensorResult result_one = read_engine_temperature(1);

    if (std::holds_alternative<float>(result_one))
    {
        std::cout << "[SUCCESS] Engine Temp: " << std::get<float>(result_one) << "C\n\n";
    }

    // We check Sensor 404 (Offline)
    std::cout << "Polling Sensor 404...\n";
    SensorResult result_two = read_engine_temperature(404);

    // THE FORCED CHECK
    // The compiler forces the developer to check what is inside the bunker.
    // If it's a string, we know exactly how to handle the failure gracefully.
    if (std::holds_alternative<std::string>(result_two))
    {
        std::string error_msg = std::get<std::string>(result_two);
        std::cout << "[SYSTEM FAILURE PREVENTED] -> " << error_msg << "\n";
        std::cout << "[ACTION] Rerouting logic to backup sensor...\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Diagnostic System ---

Polling Sensor 1...
[SUCCESS] Engine Temp: 85.5C

Polling Sensor 404...
[SYSTEM FAILURE PREVENTED] -> CRITICAL_ERROR: Sensor 404 is offline or damaged.
[ACTION] Rerouting logic to backup sensor...

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0042_immutable_state_machine_(pointer_free_ai)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <variant>

// THE STATE PACKETS
// We define our states as pure data structs. Zero logic inside them.
struct StandbyMode { 
    float battery_level; 
};

struct PatrolMode { 
    int waypoints_cleared; 
};

struct InterceptMode { 
    std::string target_id; 
};

// THE STATE BUNKER (The Variant)
// The drone can only be in ONE of these states at a time.
using DroneState = std::variant<StandbyMode, PatrolMode, InterceptMode>;

// THE PURE AI ENGINE
// Takes the current state and sensor data by value.
// Returns the brand-new state by value. Zero internal mutation.
DroneState calculate_next_state(DroneState current_state, bool radar_ping)
{
    // Check if we are in Standby
    if (std::holds_alternative<StandbyMode>(current_state))
    {
        if (radar_ping)
        {
            std::cout << "[AI LOGIC] Radar ping detected! Booting thrusters...\n";
            return PatrolMode{0}; // Transition to Patrol
        }
        return current_state; // Stay in Standby
    }

    // Check if we are in Patrol
    if (std::holds_alternative<PatrolMode>(current_state))
    {
        if (radar_ping)
        {
            std::cout << "[AI LOGIC] Target locked! Engaging intercept...\n";
            return InterceptMode{"Bogey-Alpha"}; // Transition to Intercept
        }

        // If no ping, just update the patrol data safely
        int current_waypoints = std::get<PatrolMode>(current_state).waypoints_cleared;
        return PatrolMode{current_waypoints + 1}; 
    }

    // If in Intercept (Terminal state for this example)
    return current_state; 
}

int main()
{
    std::cout << "--- Tactical AI State Engine ---\n\n";

    // INITIALIZE THE STATE
    // The drone starts on the ground.
    DroneState active_drone = StandbyMode{100.0f};
    std::cout << "Starting Status: STANDBY\n\n";

    // THE PURE HARDWARE LOOP
    // We update the state by feeding it back into the pure function.

    // Tick 1: No radar ping
    std::cout << "--- Tick 1 ---\n";
    active_drone = calculate_next_state(active_drone, false);
    
    // Tick 2: Radar ping! (Transitions to Patrol)
    std::cout << "\n--- Tick 2 ---\n";
    active_drone = calculate_next_state(active_drone, true);

    // Tick 3: No radar ping (Updates Patrol waypoints)
    std::cout << "\n--- Tick 3 ---\n";
    active_drone = calculate_next_state(active_drone, false);
    
    // Tick 4: Radar ping! (Transitions to Intercept)
    std::cout << "\n--- Tick 4 ---\n";
    active_drone = calculate_next_state(active_drone, true);

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical AI State Engine ---

Starting Status: STANDBY

--- Tick 1 ---

--- Tick 2 ---
[AI LOGIC] Radar ping detected! Booting thrusters...

--- Tick 3 ---

--- Tick 4 ---
[AI LOGIC] Target locked! Engaging intercept...

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0043_stack_bound_command_center_(classes_without_new)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>

// THE ENGINE CLASS (The Blueprint)
// We bundle our secure variables and pure functions into 
// one clean, modular command center.
class CatopalianEngine 
{
private:
    // Internal state. std::vector manages its own memory invisibly. 
    // No manual pointers or memory allocation required here.
    std::vector<std::string> active_protocols;
    bool engine_running;

public:
    // CONSTRUCTOR (Initialization)
    // Automatically runs the instant the engine is spawned.
    CatopalianEngine() 
    {
        engine_running = true;
        active_protocols.push_back("CORE_DIAGNOSTICS");
        std::cout << "[SYSTEM] Engine initialized securely on the stack.\n";
    }

    // DESTRUCTOR (The Automatic Incinerator)
    // We do NOT need the 'delete' keyword anywhere in our code.
    // When the engine leaves its scope, C++ automatically calls 
    // this and destroys all internal vectors and variables safely.
    ~CatopalianEngine() 
    {
        std::cout << "[SYSTEM] Engine gracefully shut down. Zero memory leaks.\n";
    }

    // PURE COMMAND METHODS
    void engage_protocol(std::string protocol) 
    {
        active_protocols.push_back(protocol);
        std::cout << "[ACTION] Protocol engaged: " << protocol << "\n";
    }

    int get_active_protocol_count() 
    {
        return active_protocols.size();
    }
};

// THE MAIN BATTLESPACE
int main() 
{
    std::cout << "--- Tactical Engine Initialization ---\n\n";

    // THE CATOPALIAN INSTANTIATION
    // Legacy developers write: CatopalianEngine* command = new CatopalianEngine();
    // We simply write this:
    CatopalianEngine main_command;

    // EXECUTE LOGIC (The JavaScript Bridge)
    // Because we used pure Stack allocation, we don't use the messy pointer arrow (->).
    // We use the clean, standard dot operator (.), exactly like JavaScript.
    main_command.engage_protocol("DRONE_SWARM_UPLINK");
    main_command.engage_protocol("RADAR_SWEEP");
    main_command.engage_protocol("THERMAL_IMAGING");

    std::cout << "\nActive Protocols Running: " << main_command.get_active_protocol_count() << "\n\n";

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    // THE MAGIC HAPPENS HERE
    // The second 'return 0;' hits, 'main_command' is out of bounds.
    // The C++ compiler instantly drops the stack and incinerates the engine.
    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Engine Initialization ---

[SYSTEM] Engine initialized securely on the stack.
[ACTION] Protocol engaged: DRONE_SWARM_UPLINK
[ACTION] Protocol engaged: RADAR_SWEEP
[ACTION] Protocol engaged: THERMAL_IMAGING

Active Protocols Running: 4

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0044_secure_reference_registry_(pointer_free_tracking)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <unordered_map>
#include <optional>

// THE PURE DATA UNIT
struct DroneData 
{
    std::string callsign;
    float altitude;
};

// THE ENGINE REGISTRY
// The central command that owns all the data.
using FleetRegistry = std::unordered_map<std::string, DroneData>;

// THE TRACKING LOGIC
// Instead of a pointer, the tracker just holds an ID string.
void execute_tracking_sweep(FleetRegistry central_command, std::string target_id)
{
    std::cout << "[TRACKER] Requesting coordinates for ID: " << target_id << "...\n";

    // Safely ask the dictionary. Zero risk of a dangling pointer crash.
    if (central_command.contains(target_id))
    {
        DroneData target = central_command.at(target_id);
        std::cout << "[SUCCESS] Target locked. Altitude: " << target.altitude << "m\n";
    }
    else
    {
        // If the drone was destroyed and removed from the dictionary, 
        // we just get a safe failure state. The engine keeps running!
        std::cout << "[ALERT] Target ID missing or destroyed. Reverting to patrol.\n";
    }
}

int main()
{
    std::cout << "--- Tactical ID Referencing Engine ---\n\n";

    // POPULATE THE REGISTRY
    FleetRegistry active_fleet = {
        {"BETA-1", {"Beta-Actual", 450.5f}},
        {"GHOST-9", {"Ghost-Recon", 1200.0f}}
    };

    // DRONE A TRACKS DRONE B
    // Drone A only knows the word "GHOST-9", it does not have a memory address.
    std::string my_target = "GHOST-9";

    std::cout << "--- Scenario 1: Target is Active ---\n";
    execute_tracking_sweep(active_fleet, my_target);

    // TARGET IS DESTROYED
    std::cout << "\n[COMBAT EVENT] Ghost-9 shot down. Removing from registry...\n";
    active_fleet.erase("GHOST-9"); // Safely deleted from the dictionary

    // DRONE A TRIES TO TRACK AGAIN
    // In legacy C++, this exact moment causes a catastrophic blue-screen crash.
    // In the Catopalian Paradigm, it handles beautifully.
    std::cout << "\n--- Scenario 2: Target is Destroyed ---\n";
    execute_tracking_sweep(active_fleet, my_target);

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical ID Referencing Engine ---

--- Scenario 1: Target is Active ---
[TRACKER] Requesting coordinates for ID: GHOST-9...
[SUCCESS] Target locked. Altitude: 1200m

[COMBAT EVENT] Ghost-9 shot down. Removing from registry...

--- Scenario 2: Target is Destroyed ---
[TRACKER] Requesting coordinates for ID: GHOST-9...
[ALERT] Target ID missing or destroyed. Reverting to patrol.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0045_black_box_logger_(secure_file_i_o)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <fstream>   // The 21st-Century File Tool
#include <optional>  // Our secure lockbox for missing files

// ========================================================
// 1. THE SECURE WRITER (Data Persistence)
// Opens a file, writes to it, and securely closes it automatically.
// ========================================================
void write_secure_log(std::string filename, std::string log_message)
{
    // 'std::ios::app' tells it to append to the end of the file, not erase it.
    // This is spawned on the Stack. No pointers!
    std::ofstream black_box(filename, std::ios::app);

    if (black_box.is_open())
    {
        // We write to the file exactly like we write to std::cout
        black_box << "[SYSTEM LOG] " << log_message << "\n";
        
        std::cout << "[SUCCESS] Log securely written to " << filename << "\n";
    }
    else
    {
        std::cout << "[CRITICAL ERROR] Hardware failure. Cannot access drive.\n";
    }

    // MAGIC MOMENT: 
    // We do NOT need to type black_box.close(). 
    // As soon as this function hits the bracket below, the Stack destroys the 
    // 'black_box' variable and the compiler perfectly seals the file for us.
}

// ========================================================
// 2. THE SECURE READER (Config Loading)
// Reads a file safely. Returns an optional lockbox so a 
// missing config file never crashes the program.
// ========================================================
std::optional<std::string> read_system_config(std::string filename)
{
    std::ifstream config_file(filename);
    std::string file_contents = "";
    std::string current_line;

    if (config_file.is_open())
    {
        // Read the file line by line safely
        while (std::getline(config_file, current_line))
        {
            file_contents += current_line + "\n";
        }
        
        return file_contents; // Return the pristine data
    }
    
    // If the file doesn't exist, we return the empty lockbox. No crashes!
    return std::nullopt; 
}

int main()
{
    std::cout << "--- Tactical File I/O Engine ---\n\n";

    std::string target_file = "flight_data.txt";

    // 3. WRITE TO THE FILE
    std::cout << "--- Initiating System Log ---\n";
    write_secure_log(target_file, "Engine boot sequence initiated.");
    write_secure_log(target_file, "GPS lock acquired. Coordinates nominal.");

    // 4. READ FROM THE FILE
    std::cout << "\n--- Reading System Log ---\n";
    std::optional<std::string> retrieved_data = read_system_config(target_file);

    if (retrieved_data.has_value())
    {
        std::cout << "FILE CONTENTS:\n";
        std::cout << retrieved_data.value();
    }
    else
    {
        std::cout << "[ALERT] " << target_file << " not found on the local drive.\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical File I/O Engine ---

--- Initiating System Log ---
[SUCCESS] Log securely written to flight_data.txt
[SUCCESS] Log securely written to flight_data.txt

--- Reading System Log ---
FILE CONTENTS:
[SYSTEM LOG] Engine boot sequence initiated.
[SYSTEM LOG] GPS lock acquired. Coordinates nominal.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0046_tactical_chronometry_(type_safe_time_and_delays)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <chrono> // The 21st-Century Time Engine
#include <thread>

// ========================================================
// 1. TYPE-SAFE DURATIONS
// We demand exactly milliseconds. If a developer tries to 
// pass raw integers here, the compiler will reject it.
// ========================================================
void fire_maneuvering_thruster(std::chrono::milliseconds duration)
{
    std::cout << "[HARDWARE] Thruster engaged for " << duration.count() << "ms...\n";
    
    // 2. THE PRECISION SLEEP
    // Safely pauses this specific core without locking up the OS.
    std::this_thread::sleep_for(duration);
    
    std::cout << "[HARDWARE] Thruster cutoff.\n";
}

int main()
{
    std::cout << "--- Tactical Chronometry Engine ---\n\n";

    // 3. EXPLICIT TIME DEFINITIONS
    // We define time exactly like physical measurements.
    std::chrono::milliseconds short_burst(500);
    std::chrono::seconds long_burn(2);

    // 4. THE CATOPALIAN STOPWATCH
    // Every game engine and robotic loop needs to know exactly 
    // how long a process takes. We use the High Resolution Clock.
    std::cout << "[SYSTEM] Initiating diagnostic burn...\n";
    
    // Start the clock
    auto start_time = std::chrono::high_resolution_clock::now();

    // Execute the hardware commands
    fire_maneuvering_thruster(short_burst);
    fire_maneuvering_thruster(std::chrono::duration_cast<std::chrono::milliseconds>(long_burn));

    // Stop the clock
    auto end_time = std::chrono::high_resolution_clock::now();

    // 5. CALCULATE THE DELTA (Elapsed Time)
    // We safely calculate the exact difference and cast it to milliseconds.
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);

    std::cout << "\n[TELEMETRY] Total maneuver time: " << elapsed.count() << "ms\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Chronometry Engine ---

[SYSTEM] Initiating diagnostic burn...
[HARDWARE] Thruster engaged for 500ms...
[HARDWARE] Thruster cutoff.
[HARDWARE] Thruster engaged for 2000ms...
[HARDWARE] Thruster cutoff.

[TELEMETRY] Total maneuver time: 2521ms

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0047_deterministic_command_queue_(the_action_buffer)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <queue>   // The 21st-Century Action Buffer
#include <variant>

// THE COMMAND PACKETS
// Pure data structs. No pointers, no logic inside them.
struct MoveCommand { float x, y, z; };
struct FireCommand { std::string weapon_system; };
struct ScanCommand { int radius; };

// THE MULTI-TYPE PAYLOAD
using EngineCommand = std::variant<MoveCommand, FireCommand, ScanCommand>;

// THE COMMAND EXECUTOR (The Engine Core)
// Processes a single command entirely by value.
void execute_command(EngineCommand cmd)
{
    if (std::holds_alternative<MoveCommand>(cmd))
    {
        auto move = std::get<MoveCommand>(cmd);
        std::cout << "[ACTION] Thrusters engaged. Moving to coordinates: " 
                  << move.x << ", " << move.y << ", " << move.z << "\n";
    }
    else if (std::holds_alternative<FireCommand>(cmd))
    {
        auto fire = std::get<FireCommand>(cmd);
        std::cout << "[ACTION] Weapons hot. Firing " << fire.weapon_system << "!\n";
    }
    else if (std::holds_alternative<ScanCommand>(cmd))
    {
        auto scan = std::get<ScanCommand>(cmd);
        std::cout << "[ACTION] Radar sweeping at " << scan.radius << "m radius...\n";
    }
}

int main()
{
    std::cout << "--- Tactical Command Queue Engine ---\n\n";

    // THE SECURE QUEUE (First-In, First-Out)
    // Instantiated purely on the stack. No 'new' or 'delete'.
    std::queue<EngineCommand> action_buffer;

    // QUEUEING ACTIONS (The Scripting Bridge)
    // We load up the queue with different commands seamlessly.
    std::cout << "[SYSTEM] Receiving remote telemetry commands...\n\n";
    action_buffer.push(MoveCommand{45.0f, 90.5f, 120.0f});
    action_buffer.push(ScanCommand{500});
    action_buffer.push(FireCommand{"EMP_PULSE"});
    action_buffer.push(MoveCommand{0.0f, 0.0f, 0.0f}); // RTB (Return to Base)

    // THE DETERMINISTIC ENGINE LOOP
    // This is the heartbeat of the architecture. It reads exactly 
    // like a high-level scripting event loop.
    while (!action_buffer.empty())
    {
        // Extract the next command from the front of the queue securely
        EngineCommand current_action = action_buffer.front();

        // Execute it
        execute_command(current_action);

        // Safely destroy and remove the command from the queue
        action_buffer.pop(); 
    }

    std::cout << "\n[SYSTEM] Action buffer empty. Returning to standby.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Command Queue Engine ---

[SYSTEM] Receiving remote telemetry commands...

[ACTION] Thrusters engaged. Moving to coordinates: 45, 90.5, 120
[ACTION] Radar sweeping at 500m radius...
[ACTION] Weapons hot. Firing EMP_PULSE!
[ACTION] Thrusters engaged. Moving to coordinates: 0, 0, 0

[SYSTEM] Action buffer empty. Returning to standby.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0048_secure_binary_parser_(pointer_free_bitwise_math)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <cstdint> // Gives us explicit sizes like uint8_t (8-bit byte)
#include <optional>

// THE SAFE BYTE BUFFER
// We define a flat array of 8-bit integers. 
// This safely holds our raw radio/hardware data.
using ByteBuffer = std::vector<uint8_t>;

// THE TARGET DATA STRUCT
// What we want to extract from the raw bytes.
struct SensorTelemetry 
{
    uint16_t sensor_id;    // 16-bit number (requires 2 bytes)
    uint8_t status_code;   // 8-bit number (requires 1 byte)
};

// THE SECURE PARSER
// We pass the raw bytes by value. Zero pointer arithmetic.
std::optional<SensorTelemetry> parse_radio_packet(ByteBuffer packet)
{
    // A) SECURE BOUNDS CHECKING
    // We mathematically guarantee the packet is exactly the size we need (3 bytes).
    // This entirely prevents the infamous "Buffer Over-read" cyber attack.
    if (packet.size() < 3)
    {
        std::cout << "[ERROR] Corrupt radio packet. Dropping payload.\n";
        return std::nullopt;
    }

    SensorTelemetry extracted_data;

    // B) PURE BITWISE MATH (No memory casting!)
    // We want a 16-bit ID. We take the first 8-bit byte (packet[0]), 
    // shift it left by 8 spaces (<< 8), and combine it (Bitwise OR: |) 
    // with the second byte (packet[1]).
    extracted_data.sensor_id = (packet[0] << 8) | packet[1];

    // The third byte is just dropped straight into the status code
    extracted_data.status_code = packet[2];

    return extracted_data;
}

int main()
{
    std::cout << "--- Tactical Binary Parsing Engine ---\n\n";

    // SIMULATING A RADIO TRANSMISSION
    // Let's pretend the hardware sent us these three hexadecimal bytes.
    // 0x12 and 0x34 combined should make the ID: 4660 (in decimal)
    // 0xFF means "Status Critical"
    ByteBuffer incoming_transmission;
    incoming_transmission.push_back(0x12); // Byte 1 (High byte of ID)
    incoming_transmission.push_back(0x34); // Byte 2 (Low byte of ID)
    incoming_transmission.push_back(0xFF); // Byte 3 (Status code)

    std::cout << "[SYSTEM] Receiving radio transmission...\n";

    // PARSE SECURELY
    std::optional<SensorTelemetry> safe_result = parse_radio_packet(incoming_transmission);

    // HANDLE THE RESULT DETERMINISTICALLY
    if (safe_result.has_value())
    {
        std::cout << "\n[SUCCESS] Telemetry Parsed Successfully:\n";
        std::cout << "Sensor ID:   " << safe_result.value().sensor_id << "\n";
        
        if (safe_result.value().status_code == 0xFF)
        {
            std::cout << "Status Code: CRITICAL (0xFF)\n";
        }
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Binary Parsing Engine ---

[SYSTEM] Receiving radio transmission...

[SUCCESS] Telemetry Parsed Successfully:
Sensor ID:   4660
Status Code: CRITICAL (0xFF)

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0049_type_safe_categories_(enum_class)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>

// THE TYPE-SAFE CATEGORIES (enum class)
// These are mathematically isolated from each other.
// Even if they share the same underlying integer values, 
// they can NEVER be mixed up.
enum class ThreatLevel 
{
    Green,   // Coast is clear
    Yellow,  // Investigate
    Red      // Engage
};

enum class WeaponSystem 
{
    None,
    Laser,
    Railgun
};

// THE SECURE HARDWARE CONTROLLER
// This function ONLY accepts the exact 'ThreatLevel' category.
// You cannot pass it a raw integer like '2'.
WeaponSystem evaluate_threat_response(ThreatLevel current_status)
{
    // 3. EXPLICIT MATCHING
    // We must explicitly use the category name. No magic numbers!
    if (current_status == ThreatLevel::Green)
    {
        std::cout << "[AI] Threat Level Green. Holding fire.\n";
        return WeaponSystem::None;
    }
    else if (current_status == ThreatLevel::Yellow)
    {
        std::cout << "[AI] Threat Level Yellow. Powering targeting lasers.\n";
        return WeaponSystem::Laser;
    }
    else if (current_status == ThreatLevel::Red)
    {
        std::cout << "[AI] Threat Level Red! Spooling magnetic accelerators!\n";
        return WeaponSystem::Railgun;
    }

    return WeaponSystem::None;
}

int main()
{
    std::cout << "--- Tactical Categorization Engine ---\n\n";

    // THE CATOPALIAN EXECUTION
    std::cout << "--- Scenario 1 ---\n";
    WeaponSystem active_weapon = evaluate_threat_response(ThreatLevel::Yellow);

    std::cout << "\n--- Scenario 2 ---\n";
    // If a legacy engineer tried to type: evaluate_threat_response(2); 
    // The Catopalian compiler would immediately reject it and refuse to build.
    // They MUST be explicit:
    active_weapon = evaluate_threat_response(ThreatLevel::Red);

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Categorization Engine ---

--- Scenario 1 ---
[AI] Threat Level Yellow. Powering targeting lasers.

--- Scenario 2 ---
[AI] Threat Level Red! Spooling magnetic accelerators!

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0050_spatial_kinematics_engine_(pointer_free_vector3d_math)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <cmath> // For high-precision square root and trigonometric functions

// THE SPATIAL VALUE OBJECT
// A perfectly flat structure containing our 3D coordinates.
// Instantiated on the stack, passed purely by value.
struct Vector3D
{
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;

    // A) OPERATOR OVERLOADING (The Math Bridge)
    // Allows us to add two vectors together using the simple '+' sign,
    // exactly like modern high-level scripting languages.
    Vector3D operator+(Vector3D other)
    {
        return Vector3D{ x + other.x, y + other.y, z + other.z };
    }

    // Allows scalar multiplication (scaling velocity/acceleration)
    Vector3D operator*(float scalar)
    {
        return Vector3D{ x * scalar, y * scalar, z * scalar };
    }
};

// TACTICAL KINEMATICS FUNCTIONS
// Every single parameter is passed by value into an isolated bunker.

// Calculates the precise straight-line distance (Magnitude) of a vector
float calculate_magnitude(Vector3D vec)
{
    return std::sqrt((vec.x * vec.x) + (vec.y * vec.y) + (vec.z * vec.z));
}

// Predicts the next spatial coordinate using classic kinematic physics:
// New Position = Current Position + (Velocity * Time)
Vector3D predict_trajectory(Vector3D position, Vector3D velocity, float delta_time)
{
    Vector3D displacement = velocity * delta_time;
    Vector3D final_position = position + displacement;
    
    return final_position; // Teleported instantly via Return Value Optimization (RVO)
}

int main()
{
    std::cout << "--- Tactical Kinematics Math Engine ---\n\n";

    // DEFINE INITIAL SPATIAL STATES
    Vector3D drone_position{ 10.0f, 20.0f, 0.0f };
    Vector3D drone_velocity{ 5.0f,  -2.0f, 3.5f }; // Moving fast on X, down on Y, up on Z
    float frame_rate_delta = 0.5f;                  // A half-second time step

    std::cout << "[TELEMETRY] Initial Position: X=" << drone_position.x 
            << ", Y=" << drone_position.y << ", Z=" << drone_position.z << "\n";
              
    std::cout << "[TELEMETRY] Velocity Vector:  X=" << drone_velocity.x 
              << ", Y=" << drone_velocity.y << ", Z=" << drone_velocity.z << "\n\n";

    // EXECUTE COGNITIVE KINEMATICS
    std::cout << "[SYSTEM] Simulating next physics frame...\n";
    Vector3D next_position = predict_trajectory(drone_position, drone_velocity, frame_rate_delta);

    std::cout << "[SUCCESS] Predicted Position: X=" << next_position.x 
              << ", Y=" << next_position.y << ", Z=" << next_position.z << "\n";

    // CALCULATE DISTANCE FROM ORIGIN
    float distance = calculate_magnitude(next_position);
    std::cout << "[TELEMETRY] Total Distance from Ground Zero: " << distance << " meters\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Kinematics Math Engine ---

[TELEMETRY] Initial Position: X=10, Y=20, Z=0
[TELEMETRY] Velocity Vector:  X=5, Y=-2, Z=3.5

[SYSTEM] Simulating next physics frame...
[SUCCESS] Predicted Position: X=12.5, Y=19, Z=1.75
[TELEMETRY] Total Distance from Ground Zero: 22.8104 meters

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0051_secure_network_serialization_(pointer_free_comms)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <sstream> // The 21st-Century String Streamer
#include <vector>
#include <optional>

// THE DATA PAYLOAD
struct TelemetryPacket 
{
    std::string callsign;
    float altitude;
    int battery_percent;
};

// THE SECURE PACKER (Serialization)
// Converts a Struct into a clean, comma-separated string.
// Zero raw memory dumping. 100% Endian-safe.
std::string pack_telemetry(TelemetryPacket data)
{
    std::stringstream secure_buffer;

    // We stream the data in, separated by commas
    secure_buffer << data.callsign << "," 
                  << data.altitude << "," 
                  << data.battery_percent;

    return secure_buffer.str(); // Teleport the pure string back
}

// THE SECURE UNPACKER (Deserialization)
// Safely parses a string back into a Struct. 
// Uses our std::optional lockbox in case the radio packet is corrupted.
std::optional<TelemetryPacket> unpack_telemetry(std::string incoming_stream)
{
    std::stringstream secure_buffer(incoming_stream);
    std::string parsed_callsign;
    std::string temp_alt, temp_batt;

    // A) SECURE EXTRACTION
    // getline safely pulls data up to the next comma without overflowing
    if (std::getline(secure_buffer, parsed_callsign, ',') &&
        std::getline(secure_buffer, temp_alt, ',') &&
        std::getline(secure_buffer, temp_batt, ','))
    {
        // B) SECURE CONVERSION
        // Convert the string numbers back to actual numbers
        // stof = String to Float, stoi = String to Integer
        TelemetryPacket reconstructed_data;
        reconstructed_data.callsign = parsed_callsign;
        reconstructed_data.altitude = std::stof(temp_alt);
        reconstructed_data.battery_percent = std::stoi(temp_batt);

        return reconstructed_data; // Return the pristine struct
    }

    // If the packet was missing commas or corrupted, return safe failure
    std::cout << "[NETWORK ERROR] Malformed telemetry packet dropped.\n";
    return std::nullopt; 
}

int main()
{
    std::cout << "--- Tactical Serialization Engine ---\n\n";

    // PREPARE THE DATA
    TelemetryPacket my_drone = {"GHOST-ACTUAL", 1450.5f, 88};

    std::cout << "[SYSTEM] Original Data: " << my_drone.callsign 
              << " | " << my_drone.altitude << "m | " 
              << my_drone.battery_percent << "%\n\n";

    // PACK IT FOR TRANSMISSION
    std::string transmission_string = pack_telemetry(my_drone);
    std::cout << "[RADIO TX] Transmitting Packet: [" << transmission_string << "]\n\n";

    // RECEIVE AND UNPACK IT
    std::cout << "[RADIO RX] Receiving Packet...\n";
    std::optional<TelemetryPacket> decoded_result = unpack_telemetry(transmission_string);

    if (decoded_result.has_value())
    {
        std::cout << "[SUCCESS] Packet Decoded Safely:\n";
        std::cout << "-> Callsign: " << decoded_result.value().callsign << "\n";
        std::cout << "-> Altitude: " << decoded_result.value().altitude << "m\n";
        std::cout << "-> Battery:  " << decoded_result.value().battery_percent << "%\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Serialization Engine ---

[SYSTEM] Original Data: GHOST-ACTUAL | 1450.5m | 88%

[RADIO TX] Transmitting Packet: [GHOST-ACTUAL,1450.5,88]

[RADIO RX] Receiving Packet...
[SUCCESS] Packet Decoded Safely:
-> Callsign: GHOST-ACTUAL
-> Altitude: 1450.5m
-> Battery:  88%

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0052_tactical_entropy_(secure_randomization)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <random> // The 21st-Century Entropy Engine

// THE SECURE RNG BUNKER
// We enclose the random generator inside a stack-bound class.
// This safely maintains the mathematical state without global variables.
class TacticalRNG 
{
private:
    // The Mersenne Twister engine. 
    // Securely hidden inside the class. No pointers needed.
    std::mt19937 entropy_engine;

public:
    // CONSTRUCTOR: The Hardware Seed
    TacticalRNG() 
    {
        // std::random_device taps into the physical microchip (CPU temp, 
        // electromagnetic noise) to get a truly unpredictable starting seed.
        std::random_device silicon_noise;

        // We load that physical noise into our math engine
        entropy_engine.seed(silicon_noise());

        std::cout << "[SYSTEM] Tactical RNG initialized with hardware entropy.\n";
    }

    // SECURE GENERATION FUNCTION
    int get_evasion_coordinate(int min_val, int max_val) 
    {
        // std::uniform_int_distribution guarantees absolute statistical 
        // perfection. No "Modulo Bias". Every number has the exact same odds.
        std::uniform_int_distribution<int> distribution(min_val, max_val);

        return distribution(entropy_engine);
    }
};

int main() 
{
    std::cout << "--- Tactical Entropy Engine ---\n\n";

    // SPAWN THE ENGINE ON THE STACK
    // Zero 'new' keywords. Zero memory leaks.
    TacticalRNG evasion_system;

    std::cout << "\n[COMBAT EVENT] Missile lock detected! Initiating random evasion...\n";

    // EXECUTE SECURE GENERATION
    // We use clean dot-notation to get our coordinates.
    for (int i = 1; i <= 3; i++) 
    {
        int maneuver_x = evasion_system.get_evasion_coordinate(-500, 500);
        int maneuver_y = evasion_system.get_evasion_coordinate(-500, 500);
        
        std::cout << "-> Evasion Vector " << i << ": X(" << maneuver_x << ") Y(" << maneuver_y << ")\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0; // The stack instantly destroys the RNG engine securely.
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Entropy Engine ---

[SYSTEM] Tactical RNG initialized with hardware entropy.

[COMBAT EVENT] Missile lock detected! Initiating random evasion...
-> Evasion Vector 1: X(-121) Y(-456)
-> Evasion Vector 2: X(-411) Y(395)
-> Evasion Vector 3: X(336) Y(-63)

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0053_immutable_data_pipeline_(pointer_free_sorting_and_filtering)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // The 21st-Century Data Transformation Engine

// THE DATA PAYLOAD
struct RadarContact 
{
    std::string callsign;
    int threat_level; // 0 to 100
};

// THE SECURE FILTER
// Extracts high-threat targets without touching the original array.
std::vector<RadarContact> isolate_high_threats(std::vector<RadarContact> grid)
{
    std::vector<RadarContact> filtered_bunker;

    // std::copy_if acts exactly like JavaScript's array.filter()
    // It safely copies data into the new bunker based on a Lambda condition.
    std::copy_if(grid.begin(), grid.end(), std::back_inserter(filtered_bunker), 
        [](RadarContact target) 
        { 
            return target.threat_level >= 80; // Only keep threats 80 or higher
        });

    return filtered_bunker; // Return the brand-new, clean array
}

// THE SECURE SORT
// Sorts the array highest-to-lowest without mutating global memory.
std::vector<RadarContact> prioritize_targets(std::vector<RadarContact> grid)
{
    // std::sort organizes the local copy perfectly.
    // The Lambda tells it exactly how to compare two items.
    std::sort(grid.begin(), grid.end(), 
        [](RadarContact a, RadarContact b) 
        { 
            return a.threat_level > b.threat_level; // Highest threat first
        });

    return grid; // Teleport the sorted array back securely
}

int main()
{
    std::cout << "--- Tactical Data Transformation Engine ---\n\n";

    // THE MASTER DATA (The Immutable Truth)
    std::vector<RadarContact> master_radar_grid = {
        {"Alpha-1", 25},
        {"Bogey-X", 95},
        {"Delta-4", 10},
        {"Unknown-Y", 88}
    };

    std::cout << "[SYSTEM] Master Grid contains " << master_radar_grid.size() << " contacts.\n\n";

    // THE CATOPALIAN PIPELINE
    // Notice how the data flows safely from one function to the next, 
    // exactly like a high-level scripting pipeline.

    std::vector<RadarContact> active_threats = isolate_high_threats(master_radar_grid);
    std::vector<RadarContact> prioritized_threats = prioritize_targets(active_threats);

    // OUTPUT THE RESULTS
    std::cout << "[ALERT] High-Priority Targets Isolated:\n";
    for (size_t i = 0; i < prioritized_threats.size(); i++)
    {
        std::cout << "-> " << prioritized_threats[i].callsign 
                  << " (Threat: " << prioritized_threats[i].threat_level << ")\n";
    }

    // PROOF OF ARCHITECTURAL SAFETY:
    // The original master_radar_grid is still perfectly intact and unchanged!
    std::cout << "\n[SYSTEM DIAGNOSTIC] Master Grid remains uncorrupted. Size: " 
              << master_radar_grid.size() << "\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Data Transformation Engine ---

[SYSTEM] Master Grid contains 4 contacts.

[ALERT] High-Priority Targets Isolated:
-> Bogey-X (Threat: 95)
-> Unknown-Y (Threat: 88)

[SYSTEM DIAGNOSTIC] Master Grid remains uncorrupted. Size: 4

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 001_Standard_Array_(Single_Type)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>

int main() {
    // A dynamically sizing array of strings
    std::vector<std::string> names = {"Kirk", "Picard", "Sisko"};

    // Adding to the array (exactly like .push() in JavaScript)
    names.push_back("Janeway");

    // Iterating through the array by value (no pointers or references needed)
    for (auto name : names) {
        std::cout << name << "\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Kirk
Picard
Sisko
Janeway

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 002_Mixed_Array_(Multiple_Types)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <variant>

// Define our mixed type: It can be EITHER an int OR a string
using MixedValue = std::variant<int, std::string>;

int main() {
    // Create the array using our new mixed type
    std::vector<MixedValue> mixed_array = {
        42, 
        "Warp Core", 
        1701, 
        "Deflector Dish"
    };

    // We can even push new mixed values into it dynamically
    mixed_array.push_back(99);
    mixed_array.push_back("Shields up");

    // Read the array
    for (auto item : mixed_array)
    {
        // Check if the current item holds an integer
        if (std::holds_alternative<int>(item)) {
            // Extract the integer by value
            auto number = std::get<int>(item);
            std::cout << "Number: " << number << "\n";
        } 
        // Check if the current item holds a string
        else if (std::holds_alternative<std::string>(item)) {
            // Extract the string by value
            auto text = std::get<std::string>(item);
            std::cout << "String: " << text << "\n";
        }
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
Number: 42
String: Warp Core
Number: 1701
String: Deflector Dish
Number: 99
String: Shields up

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0055_secure_memory_view_(std_span)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <span> // The 21st-Century Memory Window

// THE SECURE SCANNER (Pointer-Free Slicing)
// We pass std::span BY VALUE. It creates a lightweight window 
// over the data without copying the massive underlying array.
void analyze_radar_sector(std::span<const int> sector_view)
{
    std::cout << "[SYSTEM] Analyzing sector containing " << sector_view.size() << " contacts...\n";

    int threat_count = 0;

    // SECURE ITERATION
    // The span mathematically guarantees we cannot read past the end of the window.
    // Zero pointer arithmetic. Zero buffer over-reads.
    for (size_t i = 0; i < sector_view.size(); i++)
    {
        if (sector_view[i] > 80) 
        {
            threat_count++;
        }
    }

    std::cout << "[RESULT] Detected " << threat_count << " high-level threats in this sector.\n";
}

int main()
{
    std::cout << "--- Tactical Memory View Engine ---\n\n";

    // THE MASSIVE DATA ARRAY
    // Imagine this vector contains 100,000 radar pings.
    std::vector<int> global_radar_grid = { 12, 45, 88, 92, 14, 5, 99, 10, 8, 85 };

    std::cout << "[SYSTEM] Global Radar Grid active. Total contacts: " << global_radar_grid.size() << "\n\n";

    // CREATING THE SECURE WINDOWS (Slices)
    // We want to look at contacts 2 through 5 without copying them.
    // We ask the span to start at index 2, and look at exactly 4 items.
    std::span<const int> sector_alpha(global_radar_grid.begin() + 2, 4);

    // We want to look at the last 3 contacts.
    std::span<const int> sector_bravo(global_radar_grid.end() - 3, 3);

    // EXECUTE THE ANALYSIS
    std::cout << "--- Scanning Sector Alpha ---\n";
    // Sector Alpha looks at: 88, 92, 14, 5
    analyze_radar_sector(sector_alpha); 

    std::cout << "\n--- Scanning Sector Bravo ---\n";
    // Sector Bravo looks at: 10, 8, 85
    analyze_radar_sector(sector_bravo);

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Memory View Engine ---

[SYSTEM] Global Radar Grid active. Total contacts: 10

--- Scanning Sector Alpha ---
[SYSTEM] Analyzing sector containing 4 contacts...
[RESULT] Detected 2 high-level threats in this sector.

--- Scanning Sector Bravo ---
[SYSTEM] Analyzing sector containing 3 contacts...
[RESULT] Detected 1 high-level threats in this sector.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0056_zero_cost_abstraction_(constexpr)</b></summary>


### `main.cpp`

```cpp
#include <iostream>

// THE COMPILE-TIME FUNCTION
// By using 'constexpr', we force the desktop compiler to 
// run this physics simulation during the build process.
constexpr float calculate_max_radar_range(float base_power, float atmospheric_density)
{
    // The compiler executes this multi-step math equation on your PC.
    // The drone's CPU will NEVER execute these lines.
    float effective_power = base_power * 0.85f;
    float resistance = atmospheric_density * 1.2f;

    return (effective_power * effective_power) / resistance;
}

// A HEAVY LOOKUP TABLE (Generated at Compile-Time)
// We can even generate entire arrays of data before the program runs!
struct TrigonometryTable 
{
    float values[5];
};

constexpr TrigonometryTable generate_tactical_angles()
{
    TrigonometryTable table = {};
    // Pre-calculating a set of fixed angles. 
    // The compiler does this looping, not the hardware chip!
    for (int i = 0; i < 5; i++) 
    {
        table.values[i] = i * 15.5f; 
    }
    return table;
}

int main()
{
    std::cout << "--- Tactical Compile-Time Engine ---\n\n";

    // THE ZERO-COST CONSTANT
    // The compiler already calculated the radar range equation.
    // In the compiled machine code, this line literally just looks like: 
    // float MAX_RANGE = 14781.5f;
    constexpr float MAX_RANGE = calculate_max_radar_range(5000.0f, 1.025f);

    std::cout << "[SYSTEM BOOT] Radar Systems Online.\n";
    std::cout << "[TELEMETRY] Maximum Theoretical Range: " << MAX_RANGE << " meters\n\n";

    // INSTANT MEMORY ACCESS
    // This table was generated entirely during the build process.
    // It is instantly available in memory the millisecond the software starts.
    constexpr TrigonometryTable angle_data = generate_tactical_angles();

    std::cout << "[TELEMETRY] Pre-calculated firing angles loaded instantly:\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << "-> Angle " << i << ": " << angle_data.values[i] << " degrees\n";
    }

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Compile-Time Engine ---

[SYSTEM BOOT] Radar Systems Online.
[TELEMETRY] Maximum Theoretical Range: 1.4685e+07 meters

[TELEMETRY] Pre-calculated firing angles loaded instantly:
-> Angle 0: 0 degrees
-> Angle 1: 15.5 degrees
-> Angle 2: 31 degrees
-> Angle 3: 46.5 degrees
-> Angle 4: 62 degrees

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0057_absolute_vault_(dynamic_memory_via_stdunique_ptr)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <memory> // The 21st-Century Dynamic Memory Vault

// A HEAVY SUBSYSTEM
// Imagine this class takes up 50 Megabytes of RAM.
// It is too big for the Stack, so it must go to the Heap.
class DroneAI_Core 
{
public:
    DroneAI_Core() 
    {
        std::cout << "[AI CORE] Neural matrix booted in dynamic memory.\n";
    }

    ~DroneAI_Core() 
    {
        // This is the proof. When this prints, the memory is safely destroyed.
        std::cout << "[AI CORE] Neural matrix purged. Zero memory leaks.\n";
    }

    void calculate_flight_path() 
    {
        std::cout << "[AI CORE] Crunching 3D telemetry data...\n";
    }
};

// THE SECURE SPAWNER
// Spawns the heavy object dynamically, completely bypassing 'new'.
void run_recon_mission()
{
    std::cout << "\n--- Initiating Recon Mission ---\n";

    // THE MAGIC SHIELD (make_unique)
    // We create the AI Core on the Heap, but we wrap it in a unique_ptr.
    // It strictly OWNS this memory. No one else can accidentally delete it.
    std::unique_ptr<DroneAI_Core> secure_ai = std::make_unique<DroneAI_Core>();

    // We can use it exactly like a standard object
    secure_ai->calculate_flight_path();

    // THE TRANSFER OF OWNERSHIP (std::move)
    // Because it is 'unique', you cannot copy it (which prevents double-delete crashes).
    // If you want to give it to another function, you must physically MOVE it.
    // std::unique_ptr<DroneAI_Core> stolen_ai = secure_ai; // ERROR: Will not compile!

    std::cout << "--- Mission Complete ---\n";

    // THE AUTOMATIC INCINERATION
    // Notice there is NO 'delete secure_ai;' written here.
    // The moment the function hits this bracket, 'secure_ai' goes out of bounds,
    // and the C++ compiler automatically triggers the Destructor.
}

int main()
{
    std::cout << "--- Tactical Dynamic Memory Engine ---\n";

    // We run the mission. Watch the console output closely.
    run_recon_mission();

    std::cout << "\n[SYSTEM DIAGNOSTIC] Main loop continuing. All dynamic RAM reclaimed.\n";

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Dynamic Memory Engine ---

--- Initiating Recon Mission ---
[AI CORE] Neural matrix booted in dynamic memory.
[AI CORE] Crunching 3D telemetry data...
--- Mission Complete ---
[AI CORE] Neural matrix purged. Zero memory leaks.

[SYSTEM DIAGNOSTIC] Main loop continuing. All dynamic RAM reclaimed.

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0058_dynamic_object_(variant maps)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <unordered_map>
#include <variant>

// THE DYNAMIC VALUE (The JS Hybrid)
// We define a variant that can hold text, whole numbers, 
// decimals, OR true/false booleans. 
using JSValue = std::variant<std::string, int, float, bool>;

// THE DYNAMIC OBJECT (The JS Dictionary)
// We map a standard String key to our dynamic JSValue.
// This perfectly recreates the flexibility of a JavaScript Object.
using JSObject = std::unordered_map<std::string, JSValue>;

// THE SAFE EXTRACTOR
// A helper function to safely pull data out of our JSObject.
// Passed purely by value. Zero pointers.
void inspect_object_property(JSObject data_object, std::string key)
{
    std::cout << "Inspecting key ['" << key << "']: ";

    // First, check if the key actually exists (Zero crashes!)
    if (!data_object.contains(key))
    {
        std::cout << "UNDEFINED\n";
        return;
    }

    // Extract the multi-type value safely
    JSValue property = data_object.at(key);

    // Determine what type it is currently holding and print it
    if (std::holds_alternative<std::string>(property))
    {
        std::cout << "[String] " << std::get<std::string>(property) << "\n";
    }
    else if (std::holds_alternative<int>(property))
    {
        std::cout << "[Integer] " << std::get<int>(property) << "\n";
    }
    else if (std::holds_alternative<float>(property))
    {
        std::cout << "[Float] " << std::get<float>(property) << "\n";
    }
    else if (std::holds_alternative<bool>(property))
    {
        // Booleans print as 1 (true) or 0 (false) natively
        std::cout << "[Boolean] " << (std::get<bool>(property) ? "TRUE" : "FALSE") << "\n";
    }
}

int main()
{
    std::cout << "--- Tactical Dynamic Object Engine ---\n\n";

    // INSTANTIATE EXACTLY LIKE JAVASCRIPT
    // Look at how clean this is! We mix strings, ints, floats, 
    // and booleans all in the exact same object structure.
    JSObject drone_config = {
        {"callsign", "Ghost-Actual"},
        {"max_speed", 125},
        {"shield_frequency", 88.5f},
        {"is_stealth_active", true}
    };

    // DOING STUFF WITH THE OBJECT
    // We can pass the entire object by value into our functions
    inspect_object_property(drone_config, "callsign");
    inspect_object_property(drone_config, "shield_frequency");
    inspect_object_property(drone_config, "is_stealth_active");

    // Testing a key that doesn't exist (Safely handled!)
    inspect_object_property(drone_config, "weapons_hot");

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical Dynamic Object Engine ---

Inspecting key ['callsign']: [String] Ghost-Actual
Inspecting key ['shield_frequency']: [Float] 88.5
Inspecting key ['is_stealth_active']: [Boolean] TRUE
Inspecting key ['weapons_hot']: UNDEFINED

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0059_arrays_of_objects_(the_json_pipeline)</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <variant>

// THE JAVASCRIPT BRICKS
// We bring back our dynamic types from the last tutorial.
using JSValue = std::variant<std::string, int, float, bool>;
using JSObject = std::unordered_map<std::string, JSValue>;

// THE ARRAY OF OBJECTS
// We define a flat vector that holds our JSObjects.
// This is perfectly equivalent to a JSON Array: [{...}, {...}]
using JSArray = std::vector<JSObject>;

// THE SAFE SCANNER (Iteration)
void scan_fleet_status(JSArray fleet)
{
    std::cout << "[SYSTEM] Scanning " << fleet.size() << " objects in the array...\n\n";

    // THE RANGE-BASED FOR LOOP
    // This looks and acts EXACTLY like JavaScript's "for...of" loop!
    // We pass the object by value to ensure we don't mutate the original array.
    for (JSObject drone : fleet) 
    {
        // Safely extract the ID (assuming it exists and is a string)
        if (drone.contains("id") && std::holds_alternative<std::string>(drone.at("id")))
        {
            std::string current_id = std::get<std::string>(drone.at("id"));
            std::cout << "-> Drone ID: " << current_id << "\n";

            // Safely check active status
            if (drone.contains("active") && std::holds_alternative<bool>(drone.at("active")))
            {
                bool is_active = std::get<bool>(drone.at("active"));
                std::cout << "   Status: " << (is_active ? "ONLINE" : "OFFLINE") << "\n";
            }
        }
        std::cout << "-----------------------\n";
    }
}

int main()
{
    std::cout << "--- Tactical JSON Array Engine ---\n\n";

    // INSTANTIATE LIKE JAVASCRIPT
    // Look at how beautiful and readable this is. No pointers. No 'new'.
    // Just pure, clean data structures.
    JSArray active_swarm = {
        {
            {"id", "Alpha-1"},
            {"speed", 150},
            {"active", true}
        },
        {
            {"id", "Bravo-2"},
            {"speed", 0},
            {"active", false}
        },
        {
            {"id", "Charlie-3"},
            {"speed", 300},
            {"active", true},
            {"payload", "EMP_Blast"} // We can even mix in extra keys!
        }
    };

    // EXECUTE THE PIPELINE
    scan_fleet_status(active_swarm);

    // Standardized Exit Pattern
    std::cout << "Press Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -o our_test.exe

/*
--- Tactical JSON Array Engine ---

[SYSTEM] Scanning 3 objects in the array...

-> Drone ID: Alpha-1
   Status: ONLINE
-----------------------
-> Drone ID: Bravo-2
   Status: OFFLINE
-----------------------
-> Drone ID: Charlie-3
   Status: ONLINE
-----------------------
Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: 0060_object_of_objects</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

// Define the Symmetrical 16-Property Node
struct ConceptNode {
    std::vector<std::string> root;
    std::vector<std::string> category;
    std::vector<std::string> aka;
    std::vector<std::string> types;
    std::vector<std::string> attributes;
    std::vector<std::string> sound;
    std::vector<std::string> tactile;
    std::vector<std::string> actions;
    std::vector<std::string> associations;
    std::vector<std::string> related;
    std::vector<std::string> colors;
    
    // Padding out to 16 for universal symmetry
    std::vector<std::string> visual;     // Re-added from your previous draft
    std::vector<std::string> spatial;    // Where does this exist?
    std::vector<std::string> temporal;   // When does this happen?
    std::vector<std::string> logic_link; // Links to XNOR/XOR logic states
    std::vector<std::string> memory_id;  // Reference for archiving/Forebrain
};

// Define the Engine's Cortex (The Relational Dictionary)
// This maps a string (e.g., "robin") directly to its ConceptNode.
typedef std::unordered_map<std::string, ConceptNode> SemanticCortex;

int main() {
    // Instantiate the Holographic Memory
    SemanticCortex cortex;

    // Populate the "bird" node
    cortex["bird"] = {
        /* root */         {}, // null in JS becomes an empty vector
        /* category */     {"animal", "life", "mammal", "creature"},
        /* aka */          {"birdie", "avian"},
        /* types */        {"robin", "blue jay", "eagle", "hawk", "chicken"}, // Truncated for brevity
        /* attributes */   {"feathers", "beak", "hollow bones"},
        /* sound */        {"chirp", "squawk"},
        /* tactile */      {"soft feathers", "smooth feathers", "hard beak"},
        /* actions */      {"fly", "chirp", "build nest", "hunt worms", "eat worms"},
        /* associations */ {"sky", "tree", "worms", "grass", "chirping"},
        /* related */      {},
        /* colors */       {},
        /* visual */       {},
        /* spatial */      {},
        /* temporal */     {},
        /* logic_link */   {},
        /* memory_id */    {}
    };

    // Populate the "robin" node
    cortex["robin"] = {
        /* root */         {"bird", "birdie", "avian"},
        /* category */     {},
        /* aka */          {},
        /* types */        {},
        /* attributes */   {"red breast", "fragile talons", "skittish", "beautiful song"},
        /* sound */        {},
        /* tactile */      {},
        /* actions */      {"hop", "hunt worms", "eat worms", "fly", "land", "take off quickly"},
        /* associations */ {"spring", "morning", "worm", "bird", "tree"},
        /* related */      {"worm", "spring", "morning"},
        /* colors */       {"warm rust", "reddish-orange breast", "grayish-brown back", "dark head", "dark tail"},
        /* visual */       {},
        /* spatial */      {},
        /* temporal */     {},
        /* logic_link */   {},
        /* memory_id */    {}
    };

    // Test the Engine: Drift from Robin to its Root
    std::cout << "A Robin's first root is: " << cortex["robin"].root[0] << std::endl;
    
    // Look up the root's first tactile sensation
    std::string rootConcept = cortex["robin"].root[0]; 
    std::cout << "Touching a " << rootConcept << " feels like: " << cortex[rootConcept].tactile[0] << std::endl;

    // Standardized Exit Pattern
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ main.cpp -std=c++20 -o our_test.exe

/*
A Robin's first root is: bird
Touching a bird feels like: soft feathers

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
// https://sites.google.com/view/CollegeOfScripting
```


</details>

---

<details>
<summary><b>Section: cpp</b></summary>


### `main.cpp`

```cpp
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
```


</details>

---

<details>
<summary><b>Section: 0002_pointers_vs_no_pointers</b></summary>


### `main.cpp`

```cpp
#include <iostream>
#include <vector>
#include <chrono>

// Professional aliasing (Rule 5 compliance)
namespace chr = std::chrono;

struct Drone {
    float x;
    float y;
    float z;
};

// LEGACY C++ PARADIGM (The Hazardous Way)
// Uses ampersand (&) reference tunneling to mutate data.
void updateLegacy(std::vector<Drone>& swarm) {
    for (int i = 0; i < swarm.size(); i++) {
        swarm[i].x += 1.5f;
        swarm[i].y += 2.0f;
    }
}

// CATOPALIAN PARADIGM (The Military-Grade Secure Way)
// Zero Pointers. Zero Ampersands. Pass-by-Value.
std::vector<Drone> updateCatopalian(std::vector<Drone> swarm) {
    for (int i = 0; i < swarm.size(); i++) {
        swarm[i].x += 1.5f;
        swarm[i].y += 2.0f;
    }
    return swarm; // Relying on the compiler's Return Value Optimization (RVO)
}

int main() {
    const int SWARM_SIZE = 10000000; // 10 Million Drones

    std::cout << "Initializing 10,000,000 Drones...\n";
    std::vector<Drone> legacySwarm(SWARM_SIZE, {0.0f, 0.0f, 0.0f});
    std::vector<Drone> catopalianSwarm(SWARM_SIZE, {0.0f, 0.0f, 0.0f});

    // --- TEST 1: LEGACY (Ampersand) ---
    auto startLegacy = chr::high_resolution_clock::now();
    
    updateLegacy(legacySwarm); // Mutates via reference tunnel
    
    auto endLegacy = chr::high_resolution_clock::now();
    auto durationLegacy = chr::duration_cast<chr::milliseconds>(endLegacy - startLegacy).count();

    // --- TEST 2: CATOPALIAN (Zero Pointers / Pure Value) ---
    auto startCatopalian = chr::high_resolution_clock::now();
    
    catopalianSwarm = updateCatopalian(catopalianSwarm); // Isolated copy and return
    
    auto endCatopalian = chr::high_resolution_clock::now();
    auto durationCatopalian = chr::duration_cast<chr::milliseconds>(endCatopalian - startCatopalian).count();

    // --- RESULTS ---
    std::cout << "\n--- BENCHMARK RESULTS ---\n";
    std::cout << "Legacy (Ampersand) Time   : " << durationLegacy << " ms\n";
    std::cout << "CATopalian (Pass-by-Value): " << durationCatopalian << " ms\n";
    
    std::cout << "\nPress Enter to Exit...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}

// g++ -O3 main.cpp -o safe_test

/*
Initializing 10,000,000 Drones...

--- BENCHMARK RESULTS ---
Legacy (Ampersand) Time   : 11 ms
CATopalian (Pass-by-Value): 55 ms

Press Enter to Exit...
*/

//----//

// Dedicated to God the Father
// All Rights Reserved Christopher Andrew Topalian Copyright 2000-2026
// https://github.com/ChristopherTopalian
// https://github.com/ChristopherAndrewTopalian
```


</details>


---
