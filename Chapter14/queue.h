#pragma
#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
#include <string>

class Worker{
private:
  std::string fullname;
  long id;
public:
  Worker():fullname("None"),id(0L){}
  Worker(const std::string & fn, long n):fullname(fn),id(n){}
  ~Worker();
  void set(const std::string & fn, long n){fullname = fn; id = n;}
  Worker& opertaor=(const Worker & w);
  void show() const;
};

template<typename Type>
class Queue{
private:
  struct Node{Type item; Node* next;};
  enum { Q_SIZE = 10};
  Node* front, *rear;
  int items;
  const int qsize;
  Queue(const Queue& q):qsize(0){}
  Queue& operator=(const Queue& q){return *this;}
public:
  Queue(int qs = Q_SIZE);
  ~Queue();
  bool isEmpty()const;
  bool isFull()const;
  int queuecount()const;
  bool enqueue(const Type& item);
  bool dequene(Type& item);
  void show()const;
};

template<typename Type>
Queue<Type>::Queue(int qs):qsize(qs)
{
  front = rear = nullptr;
  items = 0;
}

template<typename Type>
Queue<Type>::~Queue(){
  Node* temp;
  while (front != nullptr){
    temp = front;
    front = front->next;
    delete temp;
  }
}

template<typename Type>
bool Queue<Type>::isEmpty()const{
  return items ==0;
}

template<typename Type>
bool Queue<Type>::isFull()const{
  return items ==qsize;
}

template<typename Type>
int Queue<Type>::queuecount()const{
  return items;
}

template<typename Type>
bool Queue<Type>::enqueue(const Type& item)
{
	if (isFull()) return false;
	Node* add = new Node;
	add->item = item;
	add->next = nullptr;
	items++;
	if (front == nullptr)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}
template<typename Type>
bool Queue<Type>::dequene(Type& item)
{
	if (front == nullptr) return false;
	item = front->item;
	items--;
	Node* temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = nullptr;
	return true;
}
template<typename Type>
void Queue<Type>::show()const
{
	Node* temp = front;
	for (int in = 0; in < qsize; in++, temp = temp->next)
		temp->item.show();
}
#endif /* end of include guard:  */
