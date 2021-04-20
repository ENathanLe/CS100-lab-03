#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

using namespace std;

class Mult : public Base {
	private: 
		double input1;
		double input2;
		string inputOne;
		string inputTwo;
	public:
		Mult(Base* operand1, Base* operand2) : Base() {
			this->input1 = operand1->evaluate();
			this->input2 = operand2->evaluate();
			this->inputOne = operand1->stringify();
			this->inputTwo = operand2->stringify();
		}
		
		double evaluate() {return (input1 * input2);}

		string stringify() {return inputOne + " * " + inputTwo;}
};

#endif
