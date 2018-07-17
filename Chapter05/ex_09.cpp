#include <iostream>

using namespace std;

int main(){

  int rowNum = 0;

  cout<<"Enter number of rows: ";
  cin>>rowNum;

  for(int i = 0; i < rowNum; i++){
    for(int j = 0;j < rowNum - i -1; j++){
      cout<<".";
    }
    for(int m = 0;m<i+1;m++){
      cout<<"*";
    }
    cout<<endl;
  }

  return 0;
}
