#include <iostream>

using namespace std;

int main() {

  double incomes = 0.0;
  double salary = 0.0;
  double ratio_l1 = 0.10;
  double ratio_l2 = 0.15;
  double ratio_l3 = 0.20;

  cout<<"Enter your salary here: ";
  cin>>incomes;
  cin.get();

  if (incomes <= 5000) {
    salary = incomes;
  }else if (incomes<=15000 && incomes > 5000) {
    salary = incomes-(incomes-5000)*ratio_l1;
  } else if (incomes<=35000 && incomes > 15000) {
    salary = incomes-(incomes-15000)*ratio_l2 - 10000*ratio_l1;
  }else if (incomes > 35000) {
    salary = incomes-(incomes-35000)*ratio_l3-20000 *ratio_l2-10000 * ratio_l1;
  }
  cout<<"Your salary: "<<incomes<<"(Pre), "<<salary<<"(After tax)."<<endl;
  return 0;
}
