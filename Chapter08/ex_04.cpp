#include <iostream>
#include <cstring>

using namespace std;

struct stringy{
  char* str;
  int ct;
};

void set(stringy & s, const char string[]);
void show(stringy & s,unsigned int n = 1);
void show(const char ch[],unsigned int n = 1);

int main(){
  stringy beany;
  char testing[] = "Reality isn't what it used to be. ";

  set(beany,testing);
  show(beany);
  show(beany,2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing,3);
  show("Done! ");

  return 0;
}
void set(stringy & s, const char string[]){
  int strLen = strlen(string);
  s.ct = strLen;
  char* temp = new char[strLen+1];
  strcpy(temp, string);
  s.str = temp;
}
void show(stringy & s, unsigned int n){
  for(int i = 0; i < n;i++){
    cout<<s.str<<endl;
  }
}
void show(const char ch[],unsigned int n){
  for(int i = 0; i < n;i++){
    cout<<ch<<endl;
  }
}
