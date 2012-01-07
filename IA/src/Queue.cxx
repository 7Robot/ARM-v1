
#include "Queue.h"
#include <queue>
#include <iostream>

Queue::Queue()
{
	tasks = new std::queue<Task>;
}

void Queue::push(Task &task)
{
	tasks->push(task);
}

void Queue::pop()
{
	tasks->front()();
}
