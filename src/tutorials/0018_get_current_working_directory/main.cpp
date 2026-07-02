// Get Current Working Directory

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

