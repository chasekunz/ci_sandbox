#include "gtest/gtest.h"
#include "arithmetic.h"

TEST(arithmetic, add){
    Arithmetic math;
    double x = 1;
    EXPECT_EQ( x + x, math.add(x, x));
}