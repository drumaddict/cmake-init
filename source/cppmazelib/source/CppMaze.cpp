
#include <iostream>
#include <fstream>

#include <cpp_maze/cpp_maze-version.h>

#include <baselib/baselib.h>


namespace cppmazelib
{


CppMaze::CppMaze()
{
}

CppMaze::~CppMaze()
{
}

void CppMaze::printMaze()
{

    // Library name
    std::cout << "CppMaze::printMaze" << std::endl;
    std::cout << "========================================" << std::endl;

}

int CppMaze::returnOne(){ return 1; }


} // namespace cppmazelib

