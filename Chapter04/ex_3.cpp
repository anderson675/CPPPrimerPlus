#include <iostream>
#include <cstring>

using namespace std;

int main() {

  int nameSize = 15;
  char firstName[nameSize];
  char lastName[nameSize];
  char stringName[2*nameSize];

  cout<<"Enter your first name: \n";
  cin.get(firstName,nameSize).get();
  cout<<"Enter your last name: \n";
  cin.get(lastName,nameSize).get();

  strcpy(stringName, strcat(strcat(lastName, ", "), firstName));
  cout<<"Here's the information in a single string: "<<stringName<<endl;

  return 0;
}
