#include <gtest/gtest.h>
#include "../../Advanced/Lambda/lambda.hpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
    EXPECT_EQ(4, 4);
}

//! Should fail
TEST(HelloTest, BasicAssertions2)
{
    EXPECT_EQ(4, 6);
}
