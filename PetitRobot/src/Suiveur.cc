#include <iostream>

#include "Suiveur.h"

using namespace std;

Suiveur::Suiveur()
{
	cout << "Suiveur::Suiveur()" << endl;

	cbs.cb.lineCaptorAnswer = Suiveur::lineCaptorAnswer;
	cbs.cb.lineCaptorInt = 1000; // un message par seconde
}

void Suiveur::run()
{
	cout << "Suiveur::run()" << endl;
}

void Suiveur::lineCaptorAnswer(int exleft, int left, int right, int exright)
{
	cout << "Sharp Answer : " << exleft << "\t" << left << "\t" << right << "\t" << exright << endl;
}
