#include <iostream>

using namespace std;

const int ARRAY_SIZE = 5;

template <class T>
T returnMax(T arr[ARRAY_SIZE])
{
  T max = arr[0];
  for(int i = 0; i < ARRAY_SIZE;i++){
    if(max<arr[i]){
      max = arr[i];
    }
  }
  return max;
}

int main(){
  int intArray[ARRAY_SIZE] = {1,2,3,4,5};
  double doubleArray[ARRAY_SIZE] = {1.0,2.0,3.0,4.0,5.5};

  cout<<"For an int value array, the max value is: "<<returnMax(intArray)<<endl;
  cout<<"For an double value array, the max value is: "<<returnMax(doubleArray)<<endl;

  return 0;
}
