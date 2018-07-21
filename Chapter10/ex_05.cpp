#include <iostream>

using namespace std;

struct customer{
  char fullname[35];
  double payment;
};

typedef customer Item;

class Stack{
private:
  const static short MAX = 10;
  Item items[MAX];
  short top;
public:
  Stack();
  ~Stack();
  bool isEmpty() const;
  bool isFull() const;
  bool push(const Item & item);
  bool pop(Item & item);
};

Stack::Stack(){
  top = 0;
}
Stack::~Stack(){
  //delete[] items;
}
bool Stack::isEmpty() const{
  return top == 0;
}
bool Stack::isFull() const{
  return top == MAX;
}
bool Stack::push(const Item & item){
  if(top<MAX){
    items[top++] = item;
    return true;
  }else{ return false;}
}
bool Stack::pop(Item & item){
  if(top>0){
    item = items[--top];
    return true;
  }else{ return false;}
}

int main()
{
	Stack st;
	char ch;
	Item customer;
	double runningTotal = 0.0;

	std::cout << "Please enter A to add a customer," << std::endl;
	std::cout << "P to process a customer, or Q to quit." << std::endl;

	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;

		if (!isalpha(ch))
		{
			std::cout << '\a';
			continue;
		}

		switch (ch)
		{
		case 'A':
		case 'a':
			if (st.isFull())
				std::cout << "\aThe stack is already full." << std::endl;
			else
			{
				std::cout << "Enter the customer's name: ";
				std::cin >> customer.fullname;
				std::cout << "Enter " << customer.fullname << "'s payment: $";
				std::cin >> customer.payment;
				st.push(customer);
			}
			break;
		case 'P':
		case 'p':
			if (st.isEmpty())
				std::cout << "\aThe stack is already empty." << std::endl;
			else
			{
				st.pop(customer);
				runningTotal += customer.payment;
				std::cout << "Customer " << customer.fullname << " popped." << std::endl;
				std::cout << "Running total: $" << runningTotal << std::endl;
			}
			break;
		}

		std::cout << "\nPlease enter A to add a customer," << std::endl;
		std::cout << "P to process a customer, or Q to quit." << std::endl;
	}

	std::cout << "Bye!" << std::endl;

	return 0;
}
