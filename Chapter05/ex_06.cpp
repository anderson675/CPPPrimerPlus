#include <iostream>
#include <string>

using namespace std;

struct Car{
  string brand;
  int year;
};

int main(){

  int carNum;

  cout<<"How many cars do you wish to catalog?\n";
  cin>>carNum;

  Car *p = new Car[carNum];
  for(int i = 0; i < carNum; i++){
    cout<<"Car #"<<i+1<<": \n";
    cout<<"Please enter the brand name: \n";
    cin>>p->brand;
    cout<<"Please enter the year made: \n";
    cin>>p->year;
    p++;
  }
  p = p-3;
  for(int i = 0; i < carNum; i++){
    cout<<"Car #"<<i+1<<": \n";
    cout<<"Brand: "<<p->brand<<".\n";
    cout<<"Year made: "<<p->year<<".\n";
    p++;
  }
  delete []p;
  return 0;
}
