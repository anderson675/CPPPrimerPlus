#include <iostream>
#include <string>

using namespace std;

struct CandyBar{

  string brand;
  double mass;
  int calories;

};

int main(){

  CandyBar* p = new CandyBar[3];

  for(int i = 0; i < 3; i++){
    p[i] = {"Mocha Munch", 2.3, 350};
    cout<<"Brand Name: "<<p->brand<<"; "<<"Mass: "<<p->mass<<": "<<"Calories: "<<p->calories<<"\n";
    p++;
  }

  delete []p;
  return 0;
}
