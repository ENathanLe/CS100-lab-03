#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"
#include <string>

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpString) {
    Op* test = new Op(3.4);
    std::string test_str = test->stringify();
    EXPECT_EQ(test_str, "3.4");
}


#endif //__OP_TEST_HPP__
