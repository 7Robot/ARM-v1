#ifndef _TASK_H_
#define _TASK_H_

class Task
{
	public:
		Task();
		Task(int priority);
		int getPriority();
		virtual void operator()();
		virtual void exec() = 0;
		bool operator<(Task * t);
		virtual ~Task();

	protected:
		int m_priority;

};

#endif
