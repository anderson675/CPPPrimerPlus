#include <iostream>

#define arraySize 10

using namespace std;
unsigned short ArrayInput(unsigned short ar[]);
void DisplayArray(unsigned short ar[], unsigned short n);
float ArrayAverage(unsigned short ar[], unsigned short n);

int main(){

  unsigned short scores[arraySize];
  int counter = 0;
  cout<<"The program will store at most 10 grades.\n Please enter the grade now: \n ";
  cout<<"( press Q to run the program advance.)\n";
  while (counter != 10) {
    counter = ArrayInput(scores);
  }
  DisplayArray(scores, counter);
  return 0;
}

unsigned short ArrayInput(unsigned short ar[]){
  int counter = 0;
      for(int i = 0; i < arraySize; i++){ar[i] = 0.0;}
      for(int i = 0; i < arraySize; i++){
        if(counter ==10){break;}
        cout<<"#"<<i+1<<": \n";
        cin>>ar[i];
        cin.get();
        switch (ar[i]) {
          case 'q':
          counter = 10;
          break;
          default: counter++;
          break;
        }
      }
  return counter;
}

float ArrayAverage(unsigned short ar[], unsigned short n){
  float sum = 0.0;
  for(int i = 0; i < n; i++){
    sum += ar[i];
  }
  return sum/n;
}

void DisplayArray(unsigned short ar[], unsigned short n){
  for(int i = 0; i < n; i++){
    cout<<ar[i]<<" ";
  }
  cout<<"\nAverage Value: "<<ArrayAverage(ar,n)<<endl;
}
