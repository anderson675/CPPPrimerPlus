#include <iostream>

using namespace std;

int Fill_array(double ar[], int arraySize);
void Show_array(double ar[], int arraySize);
void Reverse_array(double ar[], int arraySize);

int main(){
  int arraySize = 0;
  int counter = 0;
  cout<<"Enter a number as the elements number of an array you want to creat: \n";
  cin>>arraySize;
  cin.get();

  double myArray[arraySize];
  for(int i =0; i < arraySize; i++){myArray[i] = 0.0;}
  counter = Fill_array(myArray, arraySize);
  if(counter<arraySize){
    arraySize = counter;
  }
  cout<<"Here is the array you just typed: \n";
  Show_array(myArray, arraySize);
  Reverse_array(myArray, arraySize);

  return 0;
}

int Fill_array(double ar[], int arraySize){

  double num = 0;
  int counter = 0;

  cout<<"Please enter a floating point value here to store: \n";
  cout<<"(Notice that the program will stop when receive non-numerical info)\n";
  while (cin >> num && counter < arraySize) {
    ar[counter] = num;
    counter++;
    if(counter+1>arraySize){break;}
    cout<<"#"<<counter+1<<": ";
  }
  cout<<counter<<" numbers was typed in!";
  return counter;
}

void Show_array(double ar[], int arraySize){
  for(int i = 0; i < arraySize; i++){ cout << ar[i] << " ";}
  cout<<"\n============Done============\n";
}

void Reverse_array(double ar[], int arraySize){
  double newArray[arraySize];
  for(int i = 0; i < arraySize; i++){
    newArray[i] = ar[arraySize-i-1];
    newArray[arraySize-i-1] = ar[i];
  }
  cout<<"Here is the reversed array: \n";
  Show_array(newArray, arraySize);
  cout<<"送你一本秘籍吧！：\n";
  cout<<"┏┳━━━━━━━━━━┓\n";
  cout<<"┃┃██████████┃\n";
  cout<<"┣┫██████┏━━━┃\n";
  cout<<"┃┃██████┃陈 ┃\n";
  cout<<"┣┫██████┃独 ┃\n";
  cout<<"┃┃██████┃秀 ┃\n";
  cout<<"┣┫██████┃传 ┃\n";
  cout<<"┃┃██████┗━━━┃\n";
  cout<<"┣┫██████████┃\n";
  cout<<"┗┻━━━━━━━━━━┛\n";

}
