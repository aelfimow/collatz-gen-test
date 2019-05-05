#include <gtest/gtest.h>
#include <collatz.h>

TEST(COLLATZ_LENGTH, N_1)
{
    auto len = collatz_length(1);
    EXPECT_EQ(len, 0);
}

TEST(COLLATZ_LENGTH, N_2)
{
    auto len = collatz_length(2);
    EXPECT_EQ(len, 1);
}

TEST(COLLATZ_LENGTH, N_3)
{
    auto len = collatz_length(3);
    EXPECT_EQ(len, 7);
}

TEST(COLLATZ_LENGTH, N_4)
{
    auto len = collatz_length(4);
    EXPECT_EQ(len, 2);
}

TEST(COLLATZ_LENGTH, N_8)
{
    auto len = collatz_length(8);
    EXPECT_EQ(len, 3);
}

TEST(COLLATZ_LENGTH, N_16)
{
    auto len = collatz_length(16);
    EXPECT_EQ(len, 4);
}

TEST(COLLATZ_LENGTH, N_32)
{
    auto len = collatz_length(32);
    EXPECT_EQ(len, 5);
}

TEST(COLLATZ_LENGTH, N_1024)
{
    auto len = collatz_length(1024);
    EXPECT_EQ(len, 10);
}
