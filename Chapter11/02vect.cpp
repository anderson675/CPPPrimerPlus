#include <iostream>
#include <cmath>
#include "02vect.h"
using std::sin;
using std::cos;
using std::atan2;
using std::cout;

namespace VECTOR{
  const double Rad_to_deg = -57.2957795130823;
  double Vector::CalculateMag(double x, double y) const{
    return std::sqrt(x * x + y * y);
  }
  double Vector::CalculateAng(double x, double y) const{
  	if (x == 0.0 && y == 0.0)
  		return 0.0;
  	else
  		return std::atan2(x, y);
  }
  double Vector::CalculateX(double mag, double ang) const
  {
  	return mag * std::cos(ang);
  }

  double Vector::CalculateY(double mag, double ang) const
  {
  	return mag * std::sin(ang);
  }
  Vector::Vector(){
    x = y = mag = ang = 0.0;
    mode = 'r';
  }
  Vector::Vector(double n1, double n2,char form){
    Reset(n1,n2,form);
  }
  void Vector::Reset(double n1, double n2, char form)
{
	mode = form;

	if (form == 'r')
	{
		x = n1;
		y = n2;
	}
	else if (form == 'p')
	{
		x = CalculateX(n1, (n2 / Rad_to_deg));
		y = CalculateY(n1, (n2 / Rad_to_deg));
	}
	else
	{
		std::cout << "Incorrect 3rd argument to Vector() -- vector set to 0" << std::endl;
		x = y = 0.0;
		mode = 'r';
	}
}

  Vector::~Vector(){};
  void Vector::polar_mode(){mode = 'p';}
  void Vector::rect_mode(){mode = 'r';}

  Vector Vector::operator+(const Vector & b) const {
    return Vector(x + b.x, y + b.y);
  }
  Vector Vector::operator-(const Vector & b) const {
    return Vector(x - b.x, y - b.y);
  }
  Vector Vector::operator-() const{
    return Vector(-x. -y);
  }
  Vector Vector::operator*(double n) const{
    return Vector(n*x,n*y);
  }
  Vector operator*(double n, const Vector & a){
    return a*n;
  }

  std::ostream & operator<<(std::ostream & os, const Vector & v){
    if(v.mode =='r'){
      os<<" (x,y) = ("<<v.x<<", "<<v.y<<")";
    }else if(v.mode == 'p'){
      os<<"(m,a) = ("<<v.mag<<","<<v.ang*Rad_to_deg<<")";
    }else{
      os<<"Vector object mode is invalid";
      return os;
    }
  }
}
