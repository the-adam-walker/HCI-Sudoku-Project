# HCI-Sudoku-Project

Make sure you have Qt 5.15.0 installed and working on your system.

Add <QTDIR\bin> to your windows PATH. Mine was at "C:\Qt\5.15.0\mingw81_64\bin".

Now in the terminal, run windeployqt <path to binary>. 
In this case, windeployqt C:<installation directory>\build-sudoku-Desktop_Qt_5_15_0_MinGW_64_bit-Release\release\soduku.exe

All of this ensure that the proper .dlls are installed into your application library.

To run the project, go to ./build-sudoku-Desktop_Qt_5_15_0_MinGW_64_bit-Release/release/soduku.exe and double click.
