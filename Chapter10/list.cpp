#include <iostream>
#include "list.h"
using namespace std;

LIST::LIST(){
  count = 0;
}

void LIST::add(const Item &item){
  items[count] = item;
  count++;
}

bool LIST::isEmpty(){return count ==0? true:false;}
bool LIST::isFull(){return count == MAX_ITEMS? true:false;}
void LIST::visit(void (*p)(Item & item)){
  for(int i = 0; i < count; i ++){
    p(items[i]);
  }
}
void LIST::print() const{
  for(int i = 0; i < count; i++){
    cout<<"Item #"<<(i+1)<<": "<<items[i]<<endl;
  }
}
