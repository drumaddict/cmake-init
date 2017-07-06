
#include <gmock/gmock.h>


#include <cppmazelib/CppMaze.h>

class cppmazelib_test: public testing::Test
{
public:
};

TEST_F(cppmazelib_test, ReturnOne)
{
    cppmazelib::CppMaze maze;

    EXPECT_EQ((unsigned int)1, maze.returnOne());
    // ...
}
