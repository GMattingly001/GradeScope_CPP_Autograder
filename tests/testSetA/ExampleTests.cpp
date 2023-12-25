#include "student_file.h"

#include "gtest/gtest.h"

TEST(ExampleTestA, MAC)
{
    int x = 42;
    int y = 16;
    int sum = 100;
    int oldSum = sum;
    int expectedNewSum = oldSum + x * y;
    EXPECT_EQ(
        expectedNewSum,
        MAC(x, y, sum));
    EXPECT_EQ(
        expectedNewSum,
        sum);
}

TEST(ExampleTestB, MAC)
{
    int x = 4;
    int y = 1;
    int sum = 100;
    int oldSum = sum;
    int expectedNewSum = oldSum + x * y;
    EXPECT_EQ(
        expectedNewSum,
        MAC(x, y, sum));
    EXPECT_EQ(
        expectedNewSum,
        sum);
}
