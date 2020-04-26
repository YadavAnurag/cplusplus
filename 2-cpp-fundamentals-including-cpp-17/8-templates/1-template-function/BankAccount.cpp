#include <iostream>
#include "header-files/BankAccount.h"

using std::cout;
using std::endl;

BankAccount::BankAccount(){
  cout << "[BankAccount.cpp] constructing " << endl;
}

BankAccount::BankAccount(
  int balance
):balance(balance){
  cout << "[BankAccount.cpp] constructing " << endl;
}

BankAccount::~BankAccount(){
  cout << "[BankAccount.cpp] desstructing " << endl;
}

int BankAccount::GetBalance() const{
  return balance;
}

bool BankAccount::operator<(int const& i) const{
  return balance < i;
}

bool BankAccount::operator<(BankAccount const& b) const{
  return balance < b.GetBalance();
}


// free function
bool operator<(int const& i, BankAccount const& b){
  return i < b.balance; 
  // this free function can access private balance var because it is declared as friend function in the BankAccount class
}
