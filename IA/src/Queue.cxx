
#include "Queue.h"
#include <queue>
#include <iostream>

Queue::Queue()
{
	tasks = new std::priority_queue<Task*>;
}

void Queue::push(Task * task)
{
	tasks->push(task);
}

void Queue::pop()
{
	Task * task;
	task = tasks->top();
	(*task)();
}
