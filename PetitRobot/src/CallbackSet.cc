#include <iostream>

#include "CallbackSet.h"

using namespace std;

CallbackSet::CallbackSet()
{
	cout << "CallbackSet::CallbackSet()" << endl;
	// Init
	cb.sharpAnswer = NULL;
	cb.sharpInt = 0;
	cb.lineCaptorAnswer = NULL;
	cb.lineCaptorInt = 0;
}

CallbackSet::CallbackSet(bool warning)
{
	cout << "CallbackSet::CallbackSet()" << endl;
	// Init
	if (warning) {
		cb.sharpAnswer = CallbackSet::sharpAnswer;
		cb.lineCaptorAnswer = CallbackSet::lineCaptorAnswer;
	} else {
		cb.sharpAnswer = NULL;
		cb.lineCaptorAnswer = NULL;
	}
	cb.sharpInt = 0;
	cb.lineCaptorInt = 0;
}

void CallbackSet::sharpAnswer(int id, int value)
{
	cout << "Warning: appel d'une fonction de callback non écouté (sharpAnswer)" << endl;
	cout << "Sharp ID : " << id << ", value : " << value << endl;
}

void CallbackSet::lineCaptorAnswer(int exleft, int left, int right, int exright)
{
	cout << "Warning: appel d'une fonction de callback non écouté (lineCaptorAnswer)" << endl;
	cout << "Value : \t" << exleft << "\t" << left << "\t" << right << "\t" << exright << endl;
}
