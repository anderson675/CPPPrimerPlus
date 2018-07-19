#include <iostream>

using namespace std;
long double probability(unsigned numbers, unsigned picks);

int main(){
  double total, choices, theOne;

  theOne = probability(27, 1);
  cout<<"Enter the number of choices of the field number and\n"
    "the number of picks allowed: \n";
    while((cin>>total>>choices)&& choices <=total){
      cout<<"You have one chance in ";
      cout<<probability(total,choices)*theOne;
      cout<<" of winning. \n";
      cout<<"Next two numbers (q to quit): ";
    }
    cout<< "bye\n";
  return 0;
}

long double probability(unsigned numbers, unsigned picks){
  long double result = 1.0;
  long double n;
  unsigned p;
  for(n = numbers, p = picks; p>0; n--,p--){
    result = result*n/p;
  }
  return result;
}
