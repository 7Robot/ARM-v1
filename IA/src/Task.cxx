#include <iostream>
#include "Task.h"

Task::Task() : m_priority(0)
{
}

Task::~Task()
{
}

bool Task::operator<(Task * t)
{
	return this->m_priority < t->m_priority;
}

void Task::operator()()
{
	this->exec();
}

int Task::getPriority()
{
	return this->m_priority;
}
