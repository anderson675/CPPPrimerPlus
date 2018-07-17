#include<iostream>

using namespace std;

int main(){

  int userInput = 0;
  int sum = 0;

  cout<<"Please type a number here, and the program will sum it with your previous input: \n";
  cin>>userInput;

  while(userInput != 0){
    sum = sum + userInput;
    cout<<"Right now the sum of your input is: "<<sum<<endl;
    cout<<"Please type a number here, and the program will sum it with your previous input: \n";
    cin>>userInput;
  }

  return 0;
}
