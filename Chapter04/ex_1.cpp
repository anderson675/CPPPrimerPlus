#include <iostream>

int main(){

  using namespace std;

  int charSize = 20;
  char firstName[charSize];
  char lastName[charSize];
  char grade;
  unsigned int age;

  cout<<"What is your first name?";
  cin.get(firstName,charSize).get();
  cout<<"What is your last name?";
  cin.get(lastName,charSize).get();
  cout<<"What letter grade do you deserve?";
  cin>>grade;
  cin.get();
  grade++;
  cout<<"What is your age?";
  cin>>age;
  cin.get();

  cout<<"Name: "<<lastName<<", "<<firstName<<endl;
  cout<<"Grade: "<<grade++<<endl;
  cout<<"Age: "<<age<<endl;

  return 0;
}
