#ifndef __TOOTHNNAIL_TESTS_HPP__
#define __TOOTHNNAIL_TESTS_HPP__

#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "rand.hpp"
#include "pow.hpp"

TEST(ToothnnailTest, OddNegativeNumberMult) {
	Base* val1 = new Op(-1);
	Base* val2 = new Op(-2);
	Base* val3 = new Op(-3);
	Base* mult1 = new Mult(val1, val2);
	Base* mult2 = new Mult(mult1, val3);
	EXPECT_EQ(mult2->evaluate(), -6);
}//multiplying an odd amount of negative numbers together 

#endif
