#include <iostream>

using namespace std;
const int arraySize = 19;

class Plorg{
private:
  char name[arraySize];
  int CI;
public:
  Plorg();
  Plorg(const char* c_name);
  void newCI(int i_CI);
  void print() const;
};

Plorg::Plorg(){
  strcpy(name, "Plorga");
  CI = 50;
}
Plorg::Plorg(const char* c_name){
  strcpy(name, c_name);
  if (strlen(name) > arraySize){
    cout << "\a\tA plorg can not have a name with more than 19 characters!\n";
  } else{
    strcpy(name, c_name);
  }
  CI = 50;
}
void Plorg::newCI(int i_CI){
  CI = i_CI;
}
void Plorg::print() const{
  cout<<"Name: "<<name<<".\n";
  cout<<"CI value: "<<CI<<endl;
}

int main(){
  Plorg myPlorg1;
  Plorg myPlorg2 = Plorg("This is mine");

  myPlorg1.newCI(90);
  myPlorg2.newCI(20);
  myPlorg1.print();
  myPlorg2.print();
  cout<<"Bye!"<<endl;
  return 0;
}
