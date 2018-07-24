#include <iostream>
#include "stock.h"

Stock::Stock(){
  company = new char[8];
  std::strcpy(company, "No Name");
  shares = 0;
  share_val = 0.0;
  total_val = 0.0;
}

Stock::Stock(const Stock & s){
  if(company!=NULL){
    delete[] company;
  }
  company = new char[strlen(s.company)+1];
  strcpy(company, s.company);
  shares = s.shares;
  share_val = s.share_val;
  total_val=s.total_val;
}

Stock::Stock(const char * co, int n, double pr){
  company = new char[strlen(co)+1];
  strcpy(company, co);

  if(n<0){
    std::cerr << "Number of shares cant be negative" << company<<
    " shares set to 0.\n";
    shares = 0;
  }else {
    shares = n;
    share_val = pr;
    set_tot();
  }
}

void Stock::buy(int num, double price){
  if(num<0){
    std::cerr<<"Number of shares purchased cant be negative. "<<"Transaction is aborted.\n";
  }else {
    shares += num;
    share_val = price;
    set_tot();
  }
}
void Stock::sell(int num, double price){
  using std::cerr;
  if(num<0){
    cerr<<"Number of shares sold cant be negative."<<
    "Transaction is aborted.\n";
  }else if(num > shares){
    cerr<<"Your cant sell more than you have!\n";
  }else{
    shares -= num;
    share_val = price;
    set_tot();
  }
}

Stock::~Stock(){
  delete [] company;
}

void Stock::update(double price){
  share_val = price;
  set_tot();
}

Stock & Stock::operator=(const Stock &s){
  if(this == &s){
    return *this;
  }
  delete[] company;
  company = new char[strlen(s.company)+1];
  strcpy(company, s.company);
  shares = s.shares;
  share_val = s.share_val;
  total_val=s.total_val;

  return *this;
}

void Stock::show() const{
  using std::cout;
  using std::endl;
  cout<<"Company: "<<company
  <<" Shares: "<<shares<<endl
  <<" Share prices: $"<<share_val
  <<" Total Worth: $"<<total_val<<endl;
}

const Stock & Stock::topval(const Stock & s) const{
  if(s.total_val > total_val){
    return s;
  }else {
    return *this;
  }
}

std::ostream & operator<<(std::ostream & os, const Stock & s)
{
	std::streamsize prec = os.precision(3);
	std::ios_base::fmtflags orig = os.setf(std::ios_base::fixed);

	os << "Company: " << s.company << "  Shares: " << s.shares << std::endl;
	os << "  Share Price: $" << s.share_val;

	os.precision(2);
	os << "  Total Worth: $" << s.total_val << std::endl;

	os.precision(prec);
	os.setf(orig, std::ios_base::floatfield);

	return os;
}
