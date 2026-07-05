// The Right Way
// g++ main.cpp -std=c++20 -o our_test.exe

// The previous wrong way:
// g++ main.cpp -o our_test.exe

Because designated initializers (the periods) were officially added in C++20, it is a great habit to explicitly tell the compiler to use the modern standard.
I highly recommend updating the compile comment at the bottom of your script to this:
// g++ main.cpp -std=c++20 -o our_test.exe
This ensures that no matter what computer your students use, the compiler won't complain about the periods.