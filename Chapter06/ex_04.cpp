#include <iostream>
#include <string>
#include <stdlib.h>     /* atoi */

using namespace std;

enum preference{fullname,title,bopname};

struct bop{
  string fullname;
  string title;
  string bopname;
  int preferenceNum;
};

int main(){

  int pNum = 0;
  char userInput;

  cout<<"How many programmers you want to enroll in right now?: \n";
  cin>>pNum;
  cin.get();
  bop Programmers[pNum];

  cout<<"Now type their information in!\n";
  for(int i =0; i < pNum; i++){
    cout<<"Programmer #"<<i+1<<": \nFull Name: ";
    getline(cin, Programmers[i].fullname);
    cout<<"title: ";
    getline(cin, Programmers[i].title);
    cout<<"bopname: ";
    getline(cin, Programmers[i].bopname);
    cout<<"Prefernence: \n";
    cout<<"(1=Fullname, 2=Title, 3=BOPName) \n";
    cin>>Programmers[i].preferenceNum;
    cin.get();
  }

  cout<<"Benevolent Order of Programmers Report \n";
  cout<<"a. display by name\tb. display by title\nc. display by bopname\td. display by preference\nq. quit\n";
  cin>>userInput;
  cin.get();
while ((int)userInput != 113) {
  if (isalpha(userInput)) {
      switch (userInput) {
        case 'a':
        for(int i =0; i < pNum; i++){
          cout<<"Programmer #"<<i+1<<": \nFull Name: "<<Programmers[i].fullname<<endl;
        }
        break;
        case 'b':
        for(int i =0; i < pNum; i++){
          cout<<"Programmer #"<<i+1<<": \nTitle: "<<Programmers[i].title<<endl;
        }
        break;
        case 'c':
        for(int i =0; i < pNum; i++){
          cout<<"Programmer #"<<i+1<<": \nBOPName: "<<Programmers[i].bopname<<endl;
        }
        break;
        case 'd':
        for(int i =0; i < pNum; i++){
          switch (Programmers[i].preferenceNum) {
            case 1:cout<<"Programmer #"<<i+1<<": \nFull Name: "<<Programmers[i].fullname<<endl;
            break;
            case 2:cout<<"Programmer #"<<i+1<<": \nTitle: "<<Programmers[i].title<<endl;
            break;
            case 3:cout<<"Programmer #"<<i+1<<": \nBOPName: "<<Programmers[i].bopname<<endl;
            break;
          }
        }
      }
  }else{
    printf("ERROR: Program can only process alphabet\n");
  }
  cout<<"Please enter a/b/c/d/q: \n";
  cin>>userInput;
  cin.get();
}

  return 0;
}
