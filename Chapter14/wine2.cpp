#include "wine2.h"
#include <cstdlib>

Pair::Pair(int arrSize){
  this->arrSize = arrSize;
  ArrInt X(arrSize);
  ArrInt Y(arrSize);
  for( int i = 0; i < arrSize; i++){
    X[i] = 0;
    y[i] = 0;
  }
  this->x = X;
  this->y = Y;
}
Pair::Pair(const int x1[], const int x2[], int arrSize){
  this->arrSize = arrSize;
  ArrInt X(arrSize);
  ArrInt Y(arrSize);
  for( int i = 0; i < arrSize; i++){
    X[i] = x1[i];
    y[i] = x2[i];
  }
  this->x = X;
  this->y = Y;
}

void Pair::setFirst(const int x1[]){
  for( int i = 0; i < arrSize; i++){
    x[i] = x1[i];
  }
}
void Pair::setSecond(const int x2[]){
  for( int i = 0; i < arrSize; i++){
    y[i] = x2[i];
  }
}
int Pair::sumFirst(){
  return this->x.sum();
}

int Pair::sumSecond(){
  return this->y.sum();
}
void Pair::show(){
  for(size_t in = 0; in < x.size(); in++){
    std::cout<<x[in]<<", "<<y[in]<<"\n ";
  }
}

Wine::Wine():std::string("None"),Years(0), Pair(0){
  this->year = new int[1];
  this->bottle = new int[1];
  this->year[0] = 0;
  this->bottle[0] = 0;
}
Wine::Wine(const char* l, int y, const int yr[], const int bot[]):std::string(l),Years(y),Pair(yr,bot,y){
  this->year = new int[1];
  this->bottle = new int[1];
  this->year[0] = 0;
  this->bottle[0] = 0;
}
Wine::Wine(const char* l, int y):std::string(l),Years(y),Pair(y){
  this->year = new int[1];
  this->bottle = new int[1];
  this->year[0] = 0;
  this->bottle[0] = 0;
}
Wine::~Wine(){
  delete[] this->year;
  delete[] this->bottle;
}
void Wine::GetBottles(){
  std::cout << "Enter the Years: ";
	std::cin >> Years;
	this->year = new int[Years];
	this->bottle = new int[Years];
	std::cout << "Enter the year of manufacture and the corresponding number of bottles.\n";
	for (int in = 0; in < Years; in++)
	{
		std::cout << "The manufacture year: ";
		std::cin >> year[in];
		std::cout << "The number of bottles: ";
		std::cin >> bottle[in];
	}
	Pair::setFirst(year);
	Pair::setSecond(bottle);
}

std::string & Label(){
  return (std::string&) *this;
}

int Wine::sum(){
  return Pair::sumSecond();
}
void Wine::show(){
  std::cout << "FullName: " << (std::string)*this << std::endl;
  std::cout << "Years: " << Years << std::endl;
  Pair::show();
}
