#include <iostream>
#include "stack.h"

Stack::Stack(int n){
  if (n <= 0)
{
  std::cout << "\aStack size must be greater than 0. Stack size set to 10. (Argument was " << n << ")" << std::endl;
  n = 10;
}
else if (n > MAX)
{
  std::cout << "\aStack size must not be greater than 10. Stack size set to 10. (Argument was " << n << ")" << std::endl;
  n = 10;
}
  size = n;
  pitems = new Item[size];
  top = 0;
}

Stack::Stack(const Stack & st){
  this->top = st.top;
  this->size = st.size;
  this->pitems = new Item[st.size];
  for(int i = 0; i < size; i++){
    this->pitems [i] = st.pitems[i];
  }
}

Stack::~Stack(){
  delete[]pitems;
}

bool Stack::isempty() const{
  return top == 0;
}

bool Stack::isfull() const{
  return top == size;
}

bool Stack::push(const Item & item){
  if(!isfull()){
    pitems[top++] = item;
    size++;
    return true;
  }else{return false;}
}

bool Stack::pop(Item & item){
  if(!isempty()){
    item = pitems[--top];
    size--;
    return true;
  }else{return false;}
}

Stack & Stack::operator=(const Stack &st){
  delete[] this->pitems;
this->pitems = new Item[MAX];
this->top = st.top;
this->size = st.size;
for (int in = 0; in < st.size; in++)
  this->pitems[in] = st.pitems[in];
return *this;
}

std::ostream& operator<<(std::ostream& os, const Stack& st)
{
	os << "The elements: ";
	for (int in = 0; in < st.size; in++)
		os << st.pitems[in] << "  ";
	os << "\n";
	return os;
}
