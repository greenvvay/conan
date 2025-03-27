#include "gtest/gtest.h"
#include "math/math.hpp"

TEST(MathTest, AddTest) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, 1), 0);
}