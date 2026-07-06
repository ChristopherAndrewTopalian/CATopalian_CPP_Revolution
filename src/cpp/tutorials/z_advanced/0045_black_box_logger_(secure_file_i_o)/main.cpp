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

