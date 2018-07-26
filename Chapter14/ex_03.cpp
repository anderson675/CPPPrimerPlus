#include"queue.h"

const int SIZE = 3;
int main()
{
	int count = 0;
	Worker* pWorker = new Worker[SIZE];
	pWorker[0] = Worker("Jim", 1001);
	pWorker[1] = Worker("Tom", 1002);
	pWorker[2] = Worker("Tim", 1003);
	Queue<Worker> queue(3);
	while (queue.queuecount() < 3)
		queue.enqueue(pWorker[count++]);
	if (queue.queuecount() == 3)std::cout << "The Queue is full, the elements are: \n";
	queue.show();
	while (queue.queuecount() > 0)
		queue.dequene(pWorker[--count]);
	if (queue.queuecount() == 0)std::cout << "The Queue is empty now. \n";
	delete[] pWorker;
	return 0;
}
