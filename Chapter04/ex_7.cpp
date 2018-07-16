#include <iostream>
#include <string>

using namespace std;

struct Pizza{
  string brand;
  double diameter;
  double mass;
};

int main(){

  Pizza myPizza;

  cout<<"Please enter the brand: \n";
  getline(cin,myPizza.brand);
  cout<<"And enter the diameter of pizza here: \n";
  cin>>myPizza.diameter;
  cout<<"Finally enter the mass of pizza here: \n";
  cin>>myPizza.mass;

  cout<<"Here is the info: \n";
  cout<<"Brand: "<<myPizza.brand<<"\n";
  cout<<"Diameter: "<<myPizza.diameter<<"\n";
  cout<<"mass: "<<myPizza.mass<<"\n";
  return 0;
}
