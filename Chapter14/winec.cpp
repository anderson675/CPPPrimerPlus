#include "winec.h"

Wine::Wine(){
  FullName = "None";
  years = 0;
  YearBottles = new Pair<int,int>[1];
  YearBottles[0].setFirst(0);
  YearBottles[0].setSecond(0);
}

Wine::Wine(const char* l, int y, const int yr[], const int bot[]){
  FullName = l;
  years = y;
  YearBottles = new Pair<int, int>[years];
  for(int i = 0; i < years; i++){
    YearBottles[i].setFirst(yr[i]);
    YearBottles[i].setSecond(bot[i]);
  }
}

Wine::Wine(const char* l, int y){
  FullName = l;
  years = y;
  YearBottles = new Pair<int, int>[years];
  for(int i = 0; i < years; i++){
    YearBottles[i].setFirst(0);
    YearBottles[i].setSecond(0);
  }
}

Wine::~Wine(){
  delete[] YearBottles;
}

void Wine::GetBottles(){
  int y,b;
  std::cout<<"Please enter the years amount: ";
  std::cin>> years;
  YearBottles = new Pair<int, int>[years];
  std::cout<<"Now please enter the year of manufacturing and its number of bottles\n";
  for(int i = 0; i < years; i ++){
    std::cout << "Manufacturing Year: ";
    std::cin>>y;
    std::cout << "Number of bottles: ";
    std::cin>>b;
    YearBottles[i].setFirst(y);
    YearBottles[i].setSecond(b);
  }
}

std::string & Wine::Label(){
  return FullName;
}

int Wine::sum(){
  int total = 0;
  for(int i =0; i < years; i++){
    total += YearBottles[i].second();
  }
  return total;
}

void Wine::show(){
  std::cout<<"Full Name: "<<FullName<<std::endl;
  std::cout<<"Years: "<<years<<std::endl;
  for(int i = 0; i <years; i++){
    std::cout<<YearBottles[i].first()<<", "<<YearBottles[i].second()<<std::endl;
  }
}
