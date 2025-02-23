#include <gtest/gtest.h>
#include "../src/classes/Value.h"
#include "../src/classes/Sum.h"
#include "../src/classes/Multiply.h"

TEST(CalculatorTest, TestSum) {
    Value* left = new Value(5);
    Value* right = new Value(3);
    Sum sum(left, right);
    EXPECT_EQ(sum.calc(), 8);
}

TEST(CalculatorTest, TestMultiply) {
    Value* left = new Value(5);
    Value* right = new Value(3);
    Multiply multiply(left, right);
    EXPECT_EQ(multiply.calc(), 15);
}

int main (int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}