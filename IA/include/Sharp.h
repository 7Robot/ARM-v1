#ifndef _SHARP_H_
#define _SHARP_H_

#include "Task.h"

class Sharp : public Task
{
	public:
		Sharp();
		int getSensorValue;
		void exec(void);

	private:
		int priority;
		int sensorValue;
};

#endif
