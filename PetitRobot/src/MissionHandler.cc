#include <iostream>

#include "MissionHandler.h"
#include "CallbackHandler.h"
#include "Suiveur.h"

extern CallbackHandler * cbh;

using namespace std;

MissionHandler::MissionHandler()
{
	cout << "MissionHandler::MissionHandler()" << endl;
}

void MissionHandler::run()
{
	cout << "MissionHandler::run()" << endl;
	bool go = true;
	while (go) {
		if (1 == 0) {
		} else if (0 == 0) {
			Suiveur * s = new Suiveur();
			run(s);
			delete s;
		} else {
			cout << "Je suis perdu !" << endl;
		}
		go = false; // ---
	}
}

void MissionHandler::run(Mission * m)
{
	cout << "MissionHandler::activate()" << endl;
	cbh->apply(m->getCallbackSet());
	m->run();
	cbh->remove();
}
