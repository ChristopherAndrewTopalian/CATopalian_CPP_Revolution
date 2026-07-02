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