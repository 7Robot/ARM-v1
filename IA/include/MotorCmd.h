#ifndef _MOTORCMD_H_
#define _MOTORCMD_H_

#include "Task.h"

class MotorCmd : public Task
{
	public:
		MotorCmd();
		int getSensorValue;
		void exec(void);
		void operator()();

	private:
		int priority;
		int sensorValue;
};

#endif
