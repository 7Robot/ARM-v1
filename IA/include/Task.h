#ifndef _TASK_H_
#define _TASK_H_

#include <pthread.h>

class Task
{
	public:
		Task();
		int getPriority();
		void operator()();
		virtual void exec() = 0;
		static void * thread(void * arg);
		bool operator<(Task * t);
		virtual ~Task();
		void code(...);

	protected:
		int m_priority;
		bool m_autofree;
		bool m_blocking;
	
	private:
		pthread_t * m_pth;

};

#endif
