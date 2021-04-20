#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"

class Pow : public Base {
    public:
	Pow(Base* operand) : Base(), operand(operand) {}
	string stringify() { return operand->stringify() + "**";}
	double evaluate() {
		double val = operand->evaluate();
		return val * val;
	}

    private:
	Base* operand;
};

#endif
