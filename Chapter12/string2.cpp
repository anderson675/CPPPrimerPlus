#include <iostream>
#include "string2.h"
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
int String::numString = 0;

int String::HowMany(){
  return numString;
}

String::String(){
  len = 0;
  st = new char[len+1];
  st[0] = '\0';
  numString++;
}

String::String(const char* c){
  st = new char[strlen(c)+1];
  strcpy(st, c);
  numString++;
}

String::String(const String & s){
  this->len = s.len;
  this->st = new char[strlen(s.st)+1];
  strcpy(this->st, s.st);
  numString++;
}

String::~String(){
  --numString;
  delete[] st;
}

String & String::StringLow()
{
	for (int i = 0; i < strlen(st); i++)
		st[i] = tolower(st[i]);
	return *this;
}

String & String::StringUp()
{
	for (int i = 0; i < strlen(st); i++)
		st[i] = toupper(st[i]);
	return *this;
}

short String::hasChar(char ch)const {
	short charCount = 0;
	for (int i = 0; i < strlen(st); i++)
		if (st[i] == ch)
			charCount++;
	return charCount;
}

String & String::operator=(const String & st){
  if(this == &st){return *this;}
  else{
    delete[] this->st;
    this->len = st.len;
    this->st = new char[this->len+1];
    strcpy(this->st, st.st);
    return *this;
  }
}
String & String::operator=(const char* cst){
    delete[] st;
    st = new char[strlen(cst)+1];
    strcpy(st, cst);
    return *this;
}
char & String::operator[](int i)
{
	return st[i];
}
const char & String::operator[](int i) const{
  return st[i];
}
bool operator<(const String& st1, const String& st2){
  return(strcmp(st1.st, st2.st)<0);
}
bool operator>(const String& st1, const String& st2){
  return st2<st1;
}
bool operator==(const String& st1, const String& st2){
  return(strcmp(st1.st, st2.st)==0);
}
String operator+(const String & st1,const String & st2){
  unsigned short length = strlen(st1.st)+strlen(st2.st);
  char* temp = new char[length+1];
  strcpy(temp, st1.st);
  strcat(temp, st2.st);
  String concatenated(temp);
  delete[] temp;
  return concatenated;
}
String operator+(const char * cst, const String st1){
  return String(cst)+st1;
}
String operator+(const String st1, const char * cst){
  return st1+String(cst);
}
std::ostream& operator<<(std::ostream& os, const String& st1){
  os << st1.st;
	return os;
}
std::istream & operator>>(std::istream & is, String & st){
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}
