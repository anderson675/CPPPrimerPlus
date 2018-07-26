#include"queue.h"
#include<cstdlib>

Worker& Worker::operator = (const Worker& w)
{
	this->fullname = w.fullname;
	this->id = w.id;
	return *this;
}
void Worker::show()const
{
	std::cout << this->fullname << ",  " << this->id << std::endl;
}
