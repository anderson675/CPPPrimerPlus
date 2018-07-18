#include <iostream>
#include <string>
#include <stdlib.h>     /* atoi */

using namespace std;

enum preference{fullname,title,bopname};

struct info{
  string name;
  int amount;
};

int main(){

  int pNum = 0;

  cout<<"Enter the amount of donator: \n";
  cin>>pNum;
  cin.get();
  info* p = new info[pNum];

  cout<<"Now type their information in!\n";
  for(int i =0; i < pNum; i++){
    cout<<"Donator #"<<i+1<<": \nFull Name: ";
    getline(cin, p->name);
    cout<<"Donation Amount: ";
    cin>>p->amount;
    cin.get();
    p++;
  }
  p = p - pNum;
  cout<<"Grand Patrons: \n";
  for(int i =0; i < pNum; i++){
    if(p->amount>10000){
      cout<<p->name<<endl;
    }
    p++;
  }
  p = p - pNum;
  cout<<"\nPatrons: \n";
  for(int i =0; i < pNum; i++){
    if(p->amount<=10000){
      cout<<p->name<<endl;
    }
    p++;
  }
  p = p - pNum;
  delete[]p;
  return 0;
}
