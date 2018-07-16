#include <iostream>
#include <string>

using namespace std;

struct CandyBar{

  string brand;
  double mass;
  int calories;

};

int main(){

  CandyBar snack = {"Mocha Munch", 2.3, 350};
  cout<<"Brand Name: "<<snack.brand<<"\n";
  cout<<"Mass: "<<snack.mass<<"\n";
  cout<<"Calories: "<<snack.calories<<"\n";

  return 0;
}
