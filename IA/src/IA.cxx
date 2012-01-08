#include <iostream>

#include "Queue.h"
#include "MotorCmd.h"

using namespace std;

int main()
{
	cout << "Starting IA …" << endl;

	Queue queue;

	MotorCmd mc;

	queue.push(&mc);

	queue.pop();

	sleep(1);

	return 0;
}
