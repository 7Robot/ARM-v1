#ifdef _TASK_H_
#define _TASK_H_

class Task
{
	private:
		int priority = 0;

	public:
		virtual void exec(void) = 0;

};

#endif
