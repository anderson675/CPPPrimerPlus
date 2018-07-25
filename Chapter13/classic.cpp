#include <iostream>
#include <cstring>
#include "classic.h"
using namespace std;

Cd::Cd(char* s0, char* s1, int n, double x){
  strcpy(performers, s0);
  strcpy(label, s1);
  selections = n;
  playtime = x;
}

Cd::Cd(const Cd & d){
  strcpy(this->performers, d.performers);
  strcpy(this->label, d.label);
  this->selections = d.selections;
  this->playtime = d.playtime;
}

Cd::Cd(){
  performers[0]='\0';
  label[0] = '\0';
  selections = 0;
  playtime = 0.0;
}

Cd::~Cd(){}

void Cd::Report() const {
  cout << "Performer: " << performers << endl
  << "Label: " << label << endl
  << "Selections: " << selections << endl
  << "Playtime: " << playtime << endl ;
}

Cd & Cd::operator=(const Cd&d){
  if(this == &d){return *this;}
  strcpy(this->performers, d.performers);
  strcpy(this->label, d.label);
  this->selections = d.selections;
  this->playtime = d.playtime;
  return *this;
}

Classic::Classic(const char * s0, const char * s1, const char * s2, int n, double x):Cd(s1,s2,n,x){
          works = new char[strlen(s0)+1];
          strcpy(works, s0);
        }
Classic::Classic(const char * s0, const Cd & d):Cd(d){
  works = new char[strlen(s0)+1];
  strcpy(works, s0);
}
Classic::Classic(const Classic & d):Cd(d){
  works = new char[strlen(d.works)+1];
  strcpy(works, d.works);
}
Classic::Classic():Cd(){
  works[0]='\0';
}
Classic::~Classic(){
  delete[] works;
}
void Classic::Report() const{
  Cd::Report();
  cout << "Primary Work: " << works << endl;
}
Classic & Classic::operator=(const Classic & c){
  if (this == &c)
  return *this;

  delete[] works;
  works = new char[strlen(c.works) + 1];
  strcpy(works, c.works);
  return* this;
}
