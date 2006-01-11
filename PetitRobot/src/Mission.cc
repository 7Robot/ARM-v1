#include <iostream>

#include "Mission.h"

using namespace std;

Mission::Mission()
{
	cout << "Mission::Mission()" << endl;
}

CallbackSet * Mission::getCallbackSet()
{
	return &cbs;
}
