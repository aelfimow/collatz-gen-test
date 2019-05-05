#include <iostream>
#include <gtest/gtest.h>
#include <collatz.h>

TEST(COLLATZ_CALC, N_0)
{
    auto n = collatz_calc(0);
    EXPECT_EQ(n, 0);
}

TEST(COLLATZ_CALC, N_1)
{
    auto n = collatz_calc(1);
    EXPECT_EQ(n, 4);
}

TEST(COLLATZ_CALC, N_2)
{
    auto n = collatz_calc(2);
    EXPECT_EQ(n, 1);
}

TEST(COLLATZ_CALC, N_19)
{
    auto n = collatz_calc(19);
    EXPECT_EQ(n, 58);

    n = collatz_calc(n);
    EXPECT_EQ(n, 29);

    n = collatz_calc(n);
    EXPECT_EQ(n, 88);

    n = collatz_calc(n);
    EXPECT_EQ(n, 44);

    n = collatz_calc(n);
    EXPECT_EQ(n, 22);

    n = collatz_calc(n);
    EXPECT_EQ(n, 11);

    n = collatz_calc(n);
    EXPECT_EQ(n, 34);

    n = collatz_calc(n);
    EXPECT_EQ(n, 17);

    n = collatz_calc(n);
    EXPECT_EQ(n, 52);

    n = collatz_calc(n);
    EXPECT_EQ(n, 26);

    n = collatz_calc(n);
    EXPECT_EQ(n, 13);

    n = collatz_calc(n);
    EXPECT_EQ(n, 40);

    n = collatz_calc(n);
    EXPECT_EQ(n, 20);

    n = collatz_calc(n);
    EXPECT_EQ(n, 10);

    n = collatz_calc(n);
    EXPECT_EQ(n, 5);

    n = collatz_calc(n);
    EXPECT_EQ(n, 16);

    n = collatz_calc(n);
    EXPECT_EQ(n, 8);

    n = collatz_calc(n);
    EXPECT_EQ(n, 4);

    n = collatz_calc(n);
    EXPECT_EQ(n, 2);

    n = collatz_calc(n);
    EXPECT_EQ(n, 1);
}
