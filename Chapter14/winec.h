#pragma once

#include <iostream>
#include <valarray>
#include <string>
#include <utility>

template <typename Type1, typename Type2>
class Pair{
private:
  Type1 x;
  Type2 y;
public:
  Pair():x(0),y(0){}
  Pair(Type1 x1, Type2 x2):x(x1),y(x2){}
  ~Pair(){}
  Type1 & first(){return x;}
  Type2 & second(){ return y;}
  void setFirst(Type1 x1);
  void setSecond(Type2 x2);
};

template <typename Type1, typename Type2>
void Pair<Type1, Type2>::setFirst(Type1 x1){
  x = x1;
}

template <typename Type1, typename Type2>
void Pair<Type1, Type2>::setSecond(Type2 x2){
  y = x2;
}

class Wine{
private:
  std::string FullName;
  int years;
  Pair<int, int>* YearBottles;
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
