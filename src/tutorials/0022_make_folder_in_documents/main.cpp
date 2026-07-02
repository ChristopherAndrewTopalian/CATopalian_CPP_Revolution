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