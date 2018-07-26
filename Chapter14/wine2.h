#pragma
#ifndef WINE2_H_
#define WINE2_H_
#include <iostream>
#include <string>
#include <valarray>

typedef std::valarray<int> ArrInt;
class Pair{
private:
  ArrInt x;
  ArrInt y;
  int arrSize;
public:
  Pair(int arrSize);
  Pair(const int x1[], const int x2[], int arrSize);
  ~Pair(){}
  ArrInt & first() { return x;}
  ArrInt & second(){ return y;}
  void setFirst(const int x1[]);
  void setSecond(const int x2[]);
  int sumFirst();
  int sumSecond();
  virtual void show();
};

class Wine:private std::string, private Pair{
private:
  int Years;
  int* year;
  int* bottle;
public:
  Wine();
  Wine(const char* l, int y, const int yr[], const int bot[]);
  Wine(const char* l, int y);
  ~Wine();
  void GetBottles();
  std::string & Label();
  int sum();
  void show();
};

#endif /* end of include guard:  */
