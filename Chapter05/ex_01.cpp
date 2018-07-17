#include <iostream>

using namespace std;

int main() {
  int firstNum;
  int secondNum;
  int sum = 0;

  cout<<"Please enter two int number, the program will sum all the num within them: \n";
  cin>>firstNum;
  cin>>secondNum;
  cout<<"Num1: "<<firstNum<<", Num2: "<<secondNum<<endl;

 if( firstNum > secondNum){
   while (firstNum >= secondNum) {
     sum = secondNum + sum;
     secondNum++;
   }
   cout<<"The sum is "<<sum<<endl;
 } else if (firstNum < secondNum){
   while (firstNum <= secondNum) {
     sum = firstNum + sum;
     firstNum++;
   }
   cout<<"The sum is "<<sum<<endl;
  } else {
    cout<<"They are equal!"<<endl;
  }

  return 0;
}
