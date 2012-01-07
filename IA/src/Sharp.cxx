
#include <iostream>

#include "Task.h"
#include "Sharp.h"

using namespace std;

Sharp::Sharp() : priority(0), sensorValue(0)
{
}

void Sharp::exec()
{
	std::cout << "Sharp::exec()" << std::endl;
}
