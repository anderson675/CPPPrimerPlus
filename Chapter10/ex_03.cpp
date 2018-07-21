#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Golf {
private:
  char fullName[50];
  int handicap;
public:
  Golf();
  Golf(const char * name, int hc);
  //~Golf();
  const Golf & Setgolf(Golf & g);
  void Handicap(Golf & g, int hc);
  void Showgolf() const;
};

Golf::Golf(){
  strcpy(fullName, "None");
  handicap = 0;
}
Golf::Golf(const char * name, int hc){
  strcpy(fullName, name);
  handicap = hc;
}
const Golf & Golf::Setgolf(Golf & g){
  strcpy(fullName, g.fullName);
  handicap = g.handicap;
  return *this;
}
void Golf::Handicap(Golf & g, int hc){
  g.handicap = hc;
}
void Golf::Showgolf() const{
  cout << "fullname: " << fullName << endl;
  cout << "handicap: " << handicap << endl;
}

int main(){
  Golf g1 = Golf("Arslan Gurkhan", 5);
  g1.Showgolf();
  Golf g2;
  g2.Showgolf();
  g2.Setgolf(g1);
  g2.Showgolf();

  return 0;
}
