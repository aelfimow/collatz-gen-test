#include <gtest/gtest.h>
#include <collatz.h>

TEST(COLLATZ_LENGTH, N_1)
{
    auto len = collatz_length(1);
    EXPECT_EQ(len, 0);
}
