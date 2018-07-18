#include <iostream>
#include <cctype>
#include <string>
#include <cstring>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {

  double donation[10];
  double sum = 0.0;
  double average = 0.0;
  int mark = 0;
  int counter = 0;
  char* parseWord;
  string userInput;

  cout<<"Enter at most 10 donations to calculate the average value: \n";
  cout<<"Using space to separate each value.\n";

  getline(cin, userInput);
  int stringLen = userInput.size();
  char data[stringLen + 1];
  strcpy(data, userInput.c_str());
  parseWord = strtok(data, " ");
  while (parseWord != NULL) {
    if (!isdigit(*parseWord)) {
      break;
    }else{
      if(counter>10){
        break;
      }else{
        donation[counter] = 0.0;
        donation[counter] = atof(parseWord);
        counter++;
      }
    }
    parseWord = strtok(NULL, " ");
  }
  for(int i = 0; i < counter; i++){
    sum = sum + donation[i];
  }
  average = sum/(double)counter;
  for(int i = 0; i < counter; i++){
    if(donation[i]>average){mark++;}
  }
  cout<<"The average value is: "<<average<<".\n";
  cout<<"Within them "<<mark<<" donations greater than average!"<<endl;
  return 0;
}
