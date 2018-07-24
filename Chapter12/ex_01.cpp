#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Cow{
  char name[20];
  char * hobby;
  double weight;
public:
  Cow();
  Cow(const char * nm, const char * ho, double wt);
  Cow(const Cow & c);
  ~Cow();
  Cow & operator=(const Cow & c);
  void ShowCow()const;
};

Cow::Cow(){
  name[0]='\n';
  hobby = nullptr;
  weight = 0.0;
}
Cow::Cow(const char * nm, const char * ho, double wt)
{
    strcpy(name, nm);

    int len;
    len = std::strlen(ho);
    hobby = new char[len];
    std::strcpy(hobby, ho);

    weight = wt;
}
Cow::Cow(const Cow & c){
  strcpy(name, c.name);
  cout<<"Removing Object...\n";
  delete[] hobby;
  hobby = new char[strlen(c.hobby)+1];
  strcpy(hobby, c.hobby);
  weight = c.weight;
}
Cow::~Cow(){
  cout<<"Removing Object...\n";
  delete [] hobby;
}
Cow & Cow::operator=(const Cow & c){
  if(this == &c){return *this;}
  delete []hobby;
  this->hobby = new char[strlen(c.hobby)+1];
  strcpy(this->hobby,c.hobby);
  strcpy(this->name,c.name);
  this->weight = c.weight;
  return *this;
}
void Cow::ShowCow()const{
  cout<<"Name: "<<name<<endl;
  if(hobby == NULL){cout<<"Hobby: None"<<endl;}else
  {cout<<"Hobby: "<<hobby<<endl;}
  cout<<"Weight: "<<weight<<endl;
}
//======================================================
int main()
{
  std::cout << "Creating object bessy." << std::endl;
	Cow bessy;
	std::cout << "Contents of bessy:" << std::endl;
	bessy.ShowCow();

	std::cout << "\nCreating object lizzy." << std::endl;
	Cow lizzy("Lizzy", "Mooing", 783.6);
	std::cout << "Contents of lizzy:" << std::endl;
	lizzy.ShowCow();


	std::cout << "\nbessy = lizzy." << std::endl;
	bessy = lizzy;
	std::cout << "Contents of bessy:" << std::endl;
	bessy.ShowCow();

	return 0;
}
