#include <iostream>

using namespace std;

string atoA(string & myString);

int main(){
  string myString;

  cout<<"Enter a string here that you want it displayed in capital letters: \n";
  getline(cin,myString);
  while (strcmp(myString.c_str(), "q")) {
    cout<<atoA(myString)<<endl;
    cout<<"Enter a string (q to quit): ";
    getline(cin,myString);
  }
  return 0;
}

string atoA(string & myString){
  int stringLen = strlen(myString.c_str());
  for(int i = 0; i < stringLen; i++){
    myString[i] = toupper(myString[i]);
  }
  return myString;
}
