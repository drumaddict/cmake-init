
#include <iostream>

#include <baselib/baselib.h>
#include <cppmazelib/CppMaze.h>

int main(int /*argc*/, char* /*argv*/[])
{
    // Print library info
    baselib::printInfo();
    cppmazelib::printMaze();
    std::cout << std::endl;

    // Solve Mazes
    std::cout << "Cpp Maze Main" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << std::endl;

    return 0;
}
