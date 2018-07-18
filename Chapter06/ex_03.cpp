#include <iostream>
#include <stdlib.h>     /* atoi */

using namespace std;

enum Options {c=99,p=112,t=116,g=103};

int main(){

  char userInput;
  char* p;
  string keyWord;

  cout<<"Please enter one of the following choices: \n";
  cout<<"c) carnivore\t\tp) pianist\nt) tree\t\t\tg) game\n";
  cin.get(userInput).get();

  if (isalpha(userInput)) {
    p= &userInput;
    while (atoi(p) != 99||112||116||103) {
      switch (userInput) {
        case 99:
        cout<<"A maple is a carnivore"<<endl;
        return 0;
        case 112:
        cout<<"A maple is a pianist"<<endl;
        return 0;
        case 116:
        cout<<"A maple is a tree"<<endl;
        return 0;
        case 103:
        cout<<"A maple is a game"<<endl;
        return 0;
        default:
        cout<<"Please enter a c, p, t, or g: \n";
        cin.get(userInput).get();
      }
    }
  }else{
    printf("ERROR: Program can only process alphabet\n");
  }
  return 0;
}
