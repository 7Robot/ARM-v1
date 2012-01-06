#include "Task.h"
#include "Sharp.h"

Sharp::Sharp()
{
	priority = 0;
	sensorValue = 0;
}

Sharp::exec()
{
	cout << "Sharp::exec()" << endl;
}
