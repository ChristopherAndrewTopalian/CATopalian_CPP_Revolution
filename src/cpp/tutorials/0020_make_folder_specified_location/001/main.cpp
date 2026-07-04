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

