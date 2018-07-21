#include <iostream>

typedef double Item;

class LIST{
private:
  const static unsigned short MAX_ITEMS = 8;
  Item items[MAX_ITEMS];
  unsigned short count;
public:
  LIST();
  void add(const Item & item);
  bool isEmpty();
  bool isFull();
  void visit(void (*p)(Item & item));
  void print() const;
};
