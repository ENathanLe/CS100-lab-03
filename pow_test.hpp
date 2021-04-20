#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "add.hpp"
#include "mult.hpp"
#include "pow.hpp"

TEST(PowTest, PowEvaluateZero) {
    Base* val = new Op(0);
    Base* test = new Pow(val);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(PowTest, PowEvaluateNonZero) {
    Base* val = new Op(12.3);
    Base* test = new Pow(val);
    EXPECT_EQ(test->evaluate(), 12.3*12.3);
}

TEST(PowTest, PowEvaluateNeg) {
    Base* val = new Op(-5);
    Base* test = new Pow(val);
    EXPECT_EQ(test->evaluate(), 25);
}

TEST(PowTest, PowEvaluateAdd) {
    Base* val1 = new Op(4);
    Base* val2 = new Op(3);
    Base* add = new Add(val1, val2);
    Base* test = new Pow(add);
    EXPECT_EQ(test->evaluate(), 49);
}

TEST(PowTest, PowStringify) {
    Base* val = new Op(6);
    Base* test = new Pow(val);
    EXPECT_EQ(test->stringify(), "6**");
}

TEST(PowTest, PowStringifyMult) {
    Base* val1 = new Op(6);
    Base* val2 = new Op(2);
    Base* mult = new Mult(val1, val2);
    Base* test = new Pow(mult);
    EXPECT_EQ(test->stringify(), "6 * 2**");
}

TEST(PowTest, PowStringifyZero) {
    Base* val = new Op(0);
    Base* test = new Pow(val);
    EXPECT_EQ(test->stringify(), "0**");
}

TEST(PowTest, PowStringifyNeq) {
    Base* val = new Op(-2);
    Base* test = new Pow(val);
    EXPECT_EQ(test->stringify(), "-2**");
}

#endif
