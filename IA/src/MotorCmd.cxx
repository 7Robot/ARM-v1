
#include <iostream>

#include "Task.h"
#include "MotorCmd.h"

using namespace std;

MotorCmd::MotorCmd()
{
}

void MotorCmd::operator()()
{
	std::cout << "motor command" << std::endl;
}
