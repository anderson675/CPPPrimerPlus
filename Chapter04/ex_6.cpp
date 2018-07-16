#include <iostream>
#include <string>

using namespace std;

struct CandyBar{

  string brand;
  double mass;
  int calories;

};

int main(){

  int arraySize = 3;
  CandyBar candyArray[arraySize];

  for(int i = 0; i < 3; i++){
    candyArray[i] = {"Mocha Munch", 2.3, 350};
    cout<<"Brand Name: "<<candyArray[i].brand<<"; "<<"Mass: "<<candyArray[i].mass<<": "<<"Calories: "<<candyArray[i].calories<<"\n";
  }

  return 0;
}
