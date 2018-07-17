#include <iostream>

using namespace std;

int main(){

  const char* months[12] = {
  "January",
  "February",
  "March",
  "April",
  "May",
  "June",
  "July",
  "August",
  "September",
  "October",
  "November",
  "December"
};

  int* salesPerMonth = new int[12];
  int* totalSales = new int;

  *totalSales = 0;
  cout<<"Please enter the data of each month: \n";
  for(int i = 0; i < 12; i++){
    cout<<months[i]<<" :\n";
    cin>>*salesPerMonth;
    *totalSales += *salesPerMonth;
    salesPerMonth++;
  }

  cout << "\n'C++ for Fools' sold " << *totalSales << " copies." << endl;

  delete []salesPerMonth;

  return 0;
}
