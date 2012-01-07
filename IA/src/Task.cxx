#include <iostream>
#include "Task.h"

Task::Task() : priority(0)
{
}

Task::Task(int p) : priority(p)
{
}

void Task::operator()()
{
	std::cout << "generic task" << std::endl;
}

//bool Task::operator<(Task t)
//{
//	return this.priority < t.priority;
//}
