#include <iostream>
class Complex {
private:
  double real;
  double imagine;
public:
  Complex();
  Complex(double r, double i);
  ~Complex();

  friend Complex operator+(const Complex & a, const Complex & b);
  friend Complex operator-(const Complex & a, const Complex & b);
  friend Complex operator*(const Complex & a, const Complex & b);
  friend Complex operator*(double n, const Complex & c);
  friend Complex operator*(const Complex & c,double n);
  friend Complex operator~(const Complex & c);
  friend std::istream & operator>>(std::istream & is, Complex & c);
  friend std::ostream & operator<<(std::ostream & os, const Complex & c);
};
