
#pragma once


#include <cppmazelib/cppmazelib_api.h>


namespace cppmazelib
{


/**
*  @brief
*    CppMaze
*/
class CPP_MAZE_LIB_API CppMaze
{
public:
    /**
    *  @brief
    *    Constructor
    */
    CppMaze();

    /**
    *  @brief
    *    Destructor
    */
    virtual ~CppMaze();

    /**
    *  @brief
    *    Print Maze
    *
    */
    void printMaze();
    int returnOne();
};


} // namespace cppmazelib
