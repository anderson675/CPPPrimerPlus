#include <iostream>
#include <cstring>

const int STRING_LEN = 64;
const int ARRAY_SIZE = 10;

using namespace std;

struct CandyBar{
  char brand[STRING_LEN];
  double mass;
  int calories;
};

void setBar(CandyBar & bar,
	const char * brand = "Millennium Munch",
	const float & mass = 285.5,
	const unsigned short & calories = 350);

void printItUp(const CandyBar & c);

int main(){
  int barNum = 0;

  cout<<"Enter the num you want to create of CandyBar: (10 at most)\n";
  cin>>barNum;
  cin.get();
  while (barNum < 0 || barNum > ARRAY_SIZE) {
    cout<<"Enter the num you want to create of CandyBar: (10 at most)\n";
    cin>>barNum;
    cin.get();
  }
  if (barNum == 10) {
    barNum = ARRAY_SIZE;
  }

  CandyBar myCandyBar[barNum];
  for(int i = 0; i < barNum; i++){
    char barBrand[STRING_LEN];
    double barMass;
    int barCalories;

    cout<<"Please enter the brand name for candy bar #"<<i+1<<": ";
    cin>>barBrand;
    cout<<"Please enter the mass value for candy bar #"<<i+1<<": ";
    cin>>barMass;
    cout<<"Please enter the calories value for candy bar #"<<i+1<<": ";
    cin>>barCalories;
    setBar(myCandyBar[i],barBrand,barMass,barCalories);
  }
  cout<<"Here are the informations about all candy bars: \n";
  for(int i = 0; i < barNum; i++){
    cout<<"Bar#"<<i+1<<":\n";
    printItUp(myCandyBar[i]);
  }

  return 0;
}

void setBar(CandyBar & bar, const char * brand, const float & mass, const unsigned short & calories)
{
    strcpy(bar.brand, brand);
    bar.mass = mass;
    bar.calories = calories;
}
void printItUp(const CandyBar & c){
  cout<<"Brand: "<<c.brand<<".\n";
  cout<<"Mass: "<<c.mass<<".\n";
  cout<<"Calories: "<<c.calories<<".\n";
}
