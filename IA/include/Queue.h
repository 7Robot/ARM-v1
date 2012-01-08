#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <queue>

#include "Task.h"

class Queue
{
	public:
		Queue();
		void push(Task * task);
		void pop();

	private:
		std::priority_queue<Task*> *tasks;

};

#endif
