
#include <iostream>

#include "MotorCmd.h"

using namespace std;

void MotorCmd::exec()
{
	std::cout << "motor exec" << std::endl;
}

MotorCmd::~MotorCmd()
{
	std::cout << "motor destructor" << std::endl;
}
