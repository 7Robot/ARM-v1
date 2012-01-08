
#include <iostream>

#include "MotorCmd.h"

using namespace std;

MotorCmd::MotorCmd()
{
	std::cout << "motor constructor" << std::endl;
}

MotorCmd::exec()
{
	std::cout << "motor exec" << std::endl;
}

MotorCmd::~MotorCmd()
{
	std::cout << "motor destructor" << std::endl;
}
