#ifndef _MISSION_H_
#define _MISSION_H_

#include "CallbackSet.h"

class Mission
{

	public:
		Mission();
		virtual void run() = 0;
		CallbackSet * getCallbackSet();

	private:
		CallbackSet cbs;

};

#endif
