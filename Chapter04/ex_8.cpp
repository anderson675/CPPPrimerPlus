#include <iostream>
#include <string>

using namespace std;

struct Pizza{
  string brand;
  double diameter;
  double mass;
};

int main(){

  Pizza* p = new Pizza;

  cout<<"And enter the diameter of pizza here: \n";
  cin>>p->diameter;
  cin.get();
  cout<<"Please enter the brand: \n";
  getline(cin,p->brand);
  cout<<"Finally enter the mass of pizza here: \n";
  cin>>p->mass;

  cout<<"Here is the info: \n";
  cout<<"Brand: "<<p->brand<<"\n";
  cout<<"Diameter: "<<p->diameter<<"\n";
  cout<<"mass: "<<p->mass<<"\n";

  delete p;
  return 0;
}
