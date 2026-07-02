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