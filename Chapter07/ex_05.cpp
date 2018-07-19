#include <iostream>

using namespace std;

int factorial(int num);
int main(){
  int num = 0;

  cout<<"Enter a number you want to apply the factorial function: \n";
  while(cin>>num){
    cin.get();
    cout<<"The answer is "<<factorial(num)<<".\n";
    cout<<"Enter a number you want to apply the factorial function: \n";
  }
  return 0;
}

int factorial(int num){
  int result = 0;
  if(num!=1) {
    result = num * factorial(num - 1);
  } else {
    result = 1;
  }
  return result;
}
