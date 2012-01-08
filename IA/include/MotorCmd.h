#ifndef _MOTORCMD_H_
#define _MOTORCMD_H_

#include "Task.h"

class MotorCmd : public Task
{
	public:
		MotorCmd();
		int getSensorValue;
		void exec(void);
		~MotorCmd();

	private:
		int priority;
		int sensorValue;
};

#endif
