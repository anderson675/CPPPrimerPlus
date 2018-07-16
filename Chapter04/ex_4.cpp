#include <iostream>
#include <cstring>

using namespace std;

int main() {

  string firstName;
  string lastName;
  string stringName;

  cout<<"Enter your first name: \n";
  getline(cin,firstName);
  cout<<"Enter your last name: \n";
  getline(cin,lastName);

  stringName = lastName + ", "+ firstName;
  cout<<"Here's the information in a single string: "<<stringName<<endl;

  return 0;
}
