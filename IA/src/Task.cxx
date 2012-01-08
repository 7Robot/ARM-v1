#include <iostream>

#include "Task.h"

Task::Task() :
	m_priority(50),
	m_autofree(true),
	m_blocking(false)
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
	if (this->m_blocking) {
		this->exec();
	} else {
		pthread_t id;
		this->m_pth = &id;
		pthread_create(&id, NULL, Task::thread, (void *) this);
	}
}

void * Task::thread(void * arg)
{
	Task * task = (Task *) arg;
	task->exec();
	return NULL;
}

int Task::getPriority()
{
	return this->m_priority;
}
