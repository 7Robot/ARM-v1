#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <queue>

#include "Task.h"

class Queue
{
	public:
		Queue();
		void push(Task &task);

	private:
		queue<int> &tasks;

};

#endif
