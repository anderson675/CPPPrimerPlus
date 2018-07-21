#include <iostream>
#include <string>

using namespace std;

class bankAccount {
private:
  string fullName;
  int accountNum;
  double balance;
public:
  bankAccount(string userName, int inputNum, double m_balance);
  void display() const;
  void depositIn(double m_deposit);
  void withDraw(double m_withDraw);
  ~bankAccount();
};

bankAccount::bankAccount(string userName, int inputNum, double m_balance){
  fullName = userName;
  accountNum = inputNum;
  balance = m_balance;
}

bankAccount::~bankAccount(){
}

void bankAccount::display() const {
  cout<<"Name: "<<fullName<<"\n";
  cout<<"Account Number: "<<accountNum<<"\n";
  cout<<"Current Balance: "<<balance<<"\n";
}
void bankAccount::depositIn(double m_deposit){
  balance += m_deposit;
}
void bankAccount::withDraw(double m_withDraw){
  balance -= m_withDraw;
}


int main() {
  bankAccount myBankAccount = bankAccount("John III", 88888, 20);
  myBankAccount.display();
  myBankAccount.depositIn(920);
  cout<<"After deposit: \n";
  myBankAccount.display();
  myBankAccount.withDraw(10);
  cout<<"After withdraw: \n";
  myBankAccount.display();
  return 0;
}
