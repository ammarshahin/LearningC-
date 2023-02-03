#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
    EXPECT_EQ(4, 4);
}

//! Should fail
TEST(HelloTest, BasicAssertions2)
{
    EXPECT_NE(4, 6);
}
