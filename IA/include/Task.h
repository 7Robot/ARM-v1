#ifndef _TASK_H_
#define _TASK_H_

class Task
{
	public:
		virtual void exec(void) = 0;

	protected:
		int priority;

};

#endif
