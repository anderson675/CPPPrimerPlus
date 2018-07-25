#include <iostream>
#include "port.h"
using namespace std;

Port::Port(const char * br, const char * st, int b){
  brand = new char[strlen(br)+1];
  strcpy(brand, br);
  strcpy(style,st);
  bottles = b;
}

Port::Port(const Port & p){
  brand = new char[strlen(p.brand)+1];
  strcpy(brand, p.brand);
  strcpy(style,p.style);
  bottles = p.bottles;
}

Port & Port::operator=(const Port &p){
  if(this == &p){return *this;}
  delete[] this->brand;
  this->brand = new char[strlen(p.brand)+1];
  strcpy(this->brand, p.brand);
  strcpy(this->style, p.style);
  this->bottles = p.bottles;
  return *this;
}

Port & Port::operator+=(int b){
  if(b<0){
    operator-=(-b);
    return *this;
  }
  bottles += b;
  return *this;
}

Port & Port::operator-=(int b){
  if(b>bottles){
    cout<<"Cannot subtract greater number"<<endl;
    return *this;
  }
  bottles -= b;
  return *this;
}

void Port::Show() const {
  cout<<"Brand: "<< brand <<endl;
  cout<<"Kind: "<< style <<endl;
  cout<<"Bottles: "<< bottles <<endl;
}

ostream & operator<<(ostream & os, const Port & p){
  cout<<"Brand: "<< p.brand <<endl;
  cout<<"Kind: "<< p.style <<endl;
  cout<<"Bottles: "<< p.bottles <<endl;
  return os;
}

//========================VintagePort Properties======================

VintagePort::VintagePort():Port("none","Vintage",0){
  nickname = new char[strlen("none")+1];
  strcpy(nickname, "none");
  year = 0;
}

VintagePort::VintagePort(const char * br, int b, const char* nn, int y)
:Port(br,"Vintage",b)
{
  nickname =new char[strlen(nn+1)];
  strcpy(nickname, nn);
  year = y;
}

VintagePort::VintagePort(const VintagePort & vp):Port(vp){
  nickname = new char[strlen(vp.nickname)+1];
  strcpy(nickname, vp.nickname);
  year = vp.year;
}

VintagePort & VintagePort::operator= (const VintagePort & vp){
  if(this == &vp){return *this;}
  Port::operator=(vp);
  delete[] nickname;
  this->nickname = new char[strlen(vp.nickname)+1];
  strcpy(this->nickname, vp.nickname);
  this->year = vp.year;
  return *this;
}
void VintagePort::Show()const{
  Port::Show();
  cout << "Nickname: " << nickname <<endl;
  cout << "year: " << year <<endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp){
  os << static_cast<const Port &>(vp);
  os << "Nickname: " << vp.nickname << endl;
  os << "Year: " << vp.year << std::endl;
  return os;
}
