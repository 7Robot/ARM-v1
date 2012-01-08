#ifndef _MOTORCMD_H_
#define _MOTORCMD_H_

#include "Task.h"

class MotorCmd : public Task
{
	public:
		int getSensorValue;
		void exec(void);
		~MotorCmd();

	private:
		int m_sensor_value;
};

#endif
