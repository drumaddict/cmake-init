
#include <iostream>

#include <baselib/baselib.h>
#include <mylib/MyLib.h>

int main(int /*argc*/, char* /*argv*/[])
{
    // Print library info
    baselib::printInfo();
    mylib::printMaze();
    std::cout << std::endl;

    // Main
    std::cout << "Main" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << std::endl;

    return 0;
}
