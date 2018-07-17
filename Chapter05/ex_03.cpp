#include <iostream>

using namespace std;

int main(){

  double depositD = 100, initD = 100, depositC = 100;
  int year = 0;

  while (depositC <= depositD) {
    depositD = depositD + 0.1 * initD;
    depositC = depositC*1.05;
    year++;
  }
  cout<<"After "<<year<<" years, Cleo's deposit will more than Daphne's\n";
  cout<<"Cleo: "<<depositC<<", Daphne: "<<depositD<<endl;

  return 0;
}
