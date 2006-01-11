#include <iostream>

#include "CallbackHandler.h"

using namespace std;

CallbackHandler::CallbackHandler()
{
	cout << "CallbackHandler::CallbackHandler()" << endl;
}

void CallbackHandler::apply(CallbackSet * cbs)
{
	cout << "CallbackHandler::push()" << endl;
}

void CallbackHandler::remove()
{
	//pop(true);
	cout << "CallbackHandler::pop()" << endl;
}
/*
CallbackHandler:pop(bool deleteSet)
{
	cout << "CallbackHandler::pop()" << endl;
}
*/
