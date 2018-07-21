#include <iostream>
#include <string>

using namespace std;

class Person{
private:
  static const int LIMIT = 25;
  string lname;
  char fname[LIMIT];
public:
  Person(){lname = ""; fname[0] = '\0';}
  Person(const string & ln, const char * fn = "Heyyou");
  void Show() const;
  void FormalShow() const;
};

Person::Person(const string & ln, const char * fn){
  lname = ln;
  strcpy(fname,fn);
}
void Person::Show() const{
  cout<<fname<<" "<<lname<<" \n";
}
void Person::FormalShow() const{
  cout<<fname<<", "<<lname<<" \n";
}

int main() {
  Person one;
  Person two("Smythecraft");
  Person three("Dimwiddy", "Sam");
  one.Show();
  cout << endl;
  one.FormalShow();
  return 0;
}
