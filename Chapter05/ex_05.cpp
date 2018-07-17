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

  int sales[3][12];
  int total = 0;

  cout<<"Please enter the data of each month: \n";
  for(int j = 0; j < 3; j++){
    int yearSales = 0;
    for(int i = 0; i < 12; i++){
      sales[j][i] = 0;
      cout<<months[i]<<" :\n";
      cin>>sales[j][i];
      yearSales += sales[j][i];
    }
    cout<<yearSales<<" copies sold in year "<<j+1<<endl;
    total += yearSales;
  }

  cout << "\n'C++ for Fools' sold " << total << " copies." << endl;

  return 0;
}
