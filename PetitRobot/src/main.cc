#include <iostream>

#include "CallbackHandler.h"
#include "MissionHandler.h"
#include "CanHandler.h"
#include "PetitRobot.h"

using namespace std;

CallbackSet * CBS;
CallbackHandler * cbh;

int main(int argc, char ** argv)
{
	cout << "Starting IA …" << endl;
	CBS = new CallbackSet(true);
	cbh = new CallbackHandler();
	MissionHandler * mh = new MissionHandler();
	CanHandler * can = new CanHandler();
	mh->run();
	can->send(1236);

	pause();

	return 0;
}
