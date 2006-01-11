#include <iostream>

#include "CallbackHandler.h"
#include "MissionHandler.h"

using namespace std;

CallbackHandler * cbh;

int main(int argc, char ** argv)
{
	cout << "Starting IA …" << endl;
	cbh = new CallbackHandler();
	MissionHandler * mh = new MissionHandler();
	mh->run();
	return 0;
}
