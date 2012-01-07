#ifndef _TASK_H_
#define _TASK_H_

class Task
{
	public:
		Task();
		Task(int priority);
		virtual void operator()();

	protected:
		int priority;

};

#endif
