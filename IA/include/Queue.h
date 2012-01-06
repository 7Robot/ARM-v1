#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <priority_queue>

#include "Task.h"

class Queue
{
	private:
		priority_queue<Task> queue;
}

#endif
