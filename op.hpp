#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    public:
        Op(double value) : Base(), value(value) { }
        virtual double evaluate() { return value; }
        virtual std::string stringify() {
		std::string truncStr = std::to_string(value);
		if(value != 0){
			std::size_t found = truncStr.find_last_not_of("0");
			if(found!=std::string::npos) truncStr.erase(found+1);
			else truncStr.clear();
		}else
			truncStr = "0.0";
		return truncStr;
	}
    protected:
	double value;
};

#endif //__OP_HPP__
