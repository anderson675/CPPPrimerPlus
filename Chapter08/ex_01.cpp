#include <iostream>

using namespace std;

void printItUp(const string & p, int i = 0);

int main(){
  string myArray;
  int callTimes = 0;

  cout<<"Enter your character array: \n";
  getline(cin, myArray);
  cout<<"How many times do you want to print?: \n";
  cin>>callTimes;
  cin.get();

  if(callTimes>0){
    for(int i = 0; i < callTimes; i++){
      printItUp(myArray,i);
    }
  } else {
    printItUp(myArray);
  }
  cout<<"Done!"<<endl;
  return 0;
}

void printItUp(const string & p, int i){
  static int counter = 0;
  counter++;
  if (i == 0) {
    cout<<"(Call #" << counter << ")\t" <<p<<endl;
  } else {
    for(i = 0; i < counter; i++){
      cout<<"(Call #" << counter << ")\t" <<p<<endl;
    }
  }
}
