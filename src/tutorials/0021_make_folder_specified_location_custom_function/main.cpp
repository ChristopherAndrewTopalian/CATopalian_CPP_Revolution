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