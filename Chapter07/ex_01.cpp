#include <iostream>

using namespace std;

double harmonicMean(double x, double y);

int main(){

  double value1;
  double value2;

  cout<<"Please enter two numbers for their harmonic mean: \n";
  cout<<"#1: ";
  cin>>value1;
  cin.get();
  cout<<"#2: ";
  cin>>value2;
  cin.get();

  while (value1!=0.0||value2!=0.0) {
    cout<<"The harmonic mean is: "<<harmonicMean(value1, value2)<< endl;
    cout<<"Please enter two numbers for their harmonic mean: \n";
    cout<<"#1: ";
    cin>>value1;
    cin.get();
    cout<<"#2: ";
    cin>>value2;
    cin.get();
  }
  return 0;
}

double harmonicMean(double x, double y){
  return 2.0*x*y/(x+y);
}
