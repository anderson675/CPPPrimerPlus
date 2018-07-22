
#include <iostream>

class Time{
private:
  int hours;
  int minutes;
public:
  Time();
  Time(int h, int m = 0);
  void AddMin(int m);
  void AddHr(int h);
  void Reset(int h, int m);
  friend Time operator+(const Time & t1, const Time & t2);
  friend Time operator-(const Time & t1, const Time & t2);
  friend Time operator*(const Time & t, const double n);
  friend Time operator*(double m, const Time & t){return t*m;}
  friend std::ostream & operator<< (std::ostream & os, const Time & t);
};
