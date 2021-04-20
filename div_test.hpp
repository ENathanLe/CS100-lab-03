#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "mockop.hpp"
#include "div.hpp"

TEST(DivTest, DivTestRun) {
	Base* testVal1 = new EightOpMock();
	Base* testVal2 = new SixOpMock();
	Div* test = new Div(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), (8.0/6.0));
}//testing to see that divide works in general

TEST(DivTest, PosDivNeg) {
	Base* testVal1 = new EightOpMock();
	Base* testVal2 = new NegThreeMock();
	Div* test = new Div(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), (8.0/-3.0));
}//testing to see if positive divided by negative works

TEST(DivTest, NegDivNeg) {
	Base* testVal1 = new NegFiveMock();
	Base* testVal2 = new NegThreeMock();
	Div* test = new Div(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), (5.0/3.0));
}//testing to see if negative divided by negative works


TEST(DivTest, NegDivPos) {
	Base* testVal1 = new NegFiveMock();
	Base* testVal2 = new EightOpMock();
	Div* test = new Div(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), (-5.0/8.0));
}//testing to see if negative divided by positive works




#endif

