#include "complex07.h"

Complex::Complex(){
  real = imagine = 0.0;
}

Complex::Complex(double r, double i){
  real = r;
  imagine = i;
}

Complex::~Complex(){}

Complex operator+(const Complex & a, const Complex & b){
  Complex temp;
  temp.real = a.real + b.real;
  temp.imagine = a.imagine + b.imagine;
  return temp;
}
Complex operator-(const Complex & a, const Complex & b){
  Complex temp;
  temp.real = a.real - b.real;
  temp.imagine = a.imagine - b.imagine;
  return temp;
}
Complex operator*(const Complex & a, const Complex & b){
  Complex temp;
  temp.real = a.real*b.real-a.imagine*b.imagine;
  temp.imagine = a.real*b.real+a.imagine*b.imagine;
  return temp;
}
Complex operator*(double n, const Complex & c){
  Complex temp;
  temp.real = n*c.real;
  temp.imagine = n*c.imagine;
  return temp;
}
Complex operator*(const Complex & c,double n){
  Complex temp;
  temp.real = n*c.real;
  temp.imagine = n*c.imagine;
  return temp;
}
Complex operator~(const Complex & c){
  Complex temp;
  temp.real = c.real;
  temp.imagine = -c.imagine;
  return temp;
}
std::istream & operator>>(std::istream & is, Complex & c){
  std::cout<<"real: ";
  is>>c.real;
  std::cout<<"imagine: ";
  is>>c.imagine;
  return is;
}
std::ostream & operator<<(std::ostream & os, const Complex & c){
  os << "(" << c.real << ", " << c.imagine << "i)";
  return os;
}
