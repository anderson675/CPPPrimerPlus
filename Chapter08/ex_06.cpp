#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T maxn(T arr[],int n);

template<>
const char* maxn(const char* arr[],int n);

int main(){

  int intArray[6] = {1,2,3,4,5,6};
  double doubleArray[4] = {1.0,2.0,3.0,4.4};
  const char * charArray[5] = {
  "People love C",
  "People love C#",
  "People love C++",
  "People love Swift",
  "But you'd better learn Java or Python if you want $ ASAP"
};
  cout<<"For an int value array, the max value is: "<<maxn(intArray,6)<<endl;
  cout<<"For an double value array, the max value is: "<<maxn(doubleArray,4)<<endl;
  cout<<"For an char value array, the max value is: "<<maxn(charArray,5)<<endl;

  return 0;
}
template <typename T>
T maxn(T arr[],int n)
{
  T max = arr[0];
  for(int i = 0; i < n; i++){
    if(max<arr[i]) max = arr[i];
  }
  return max;
}

template<>
const char* maxn(const char* arr[],int n)
{
  const char* longest = arr[0];
  for(int i = 0; i < n; i++){
    if(strlen(longest)<strlen(arr[i])){
      longest = arr[i];
    }
  }
  return longest;
}
