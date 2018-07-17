#include <iostream>
#include <string>     // std::string, std::stoul, std::getline
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){

  string userInput;
  int stringLen = 0;
  int counter = 0;
  char* parseWord;

  cout<<"Enter words(to stop, type the word done):\n";
  getline(cin,userInput);
  stringLen = userInput.size();

  char myArray[stringLen+1];
  strcpy(myArray, userInput.c_str());
  parseWord = strtok(myArray, " ");

  while(parseWord != NULL){
    if(!strcmp(parseWord, "done")){
      break;
    }
    counter++;
    parseWord = strtok(NULL, " ");
  }

  cout<<"====================Print===============\n";
  cout<<"Words Num(before 'done'): "<<counter<<endl;

  return 0;
}
