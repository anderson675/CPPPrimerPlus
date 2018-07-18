#include <iostream>
#include <cctype>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){

  char userInput;

  cout<<"Enter character/num/@ here:\n";
  cin>>userInput;
  while(userInput != '@'){
    cout<<"Enter character/num/@ here:\n";

    if(isupper(userInput)){
      userInput = tolower(userInput);
    }else if(islower(userInput)){
      userInput = toupper(userInput);
    }

    if(!isdigit(userInput)){
      cout<<userInput<<endl;
    }
    cin>>userInput;
  }

  return 0;
}
