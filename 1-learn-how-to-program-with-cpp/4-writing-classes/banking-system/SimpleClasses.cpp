#include <iostream>
#include "header-files/Account.h"

void print_report(Account a){
  for(auto s:a.Report()){
    std::cout << s << " ";
  }
  std::cout << std::endl;
}

using namespace std;
int main(){

  Account a1;
  int amt;

  cout << "Enter amount to deposit " << endl;
  cin >> amt;
  if(a1.Deposit(amt)){
    cout << "Deposit succeeds, balance is " << a1.GetBalance() << endl;
  }else{
    cout << "Deposit denied" << endl;
  }
  print_report(a1);

  cout << "Enter amount to withdraw " << endl;
  cin >> amt;
  if(a1.Withdraw(amt)){
    cout << "Withdraw succeeds, balance is " << a1.GetBalance() << endl;
  }else{
    cout << "Withdraw denied" << endl;
  }
  print_report(a1);
  
  cout << "Enter amount to withdraw " << endl;
  cin >> amt;
  if(a1.Withdraw(amt)){
    cout << "Withdraw succeeds, balance is " << a1.GetBalance()<< endl;
  }else{
    cout << "Withdraw denied" << endl;
  }
  print_report(a1);

  return 0;
}