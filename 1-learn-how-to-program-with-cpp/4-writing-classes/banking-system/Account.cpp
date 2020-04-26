#include "header-files/Account.h"
using namespace std;

Account::Account(void):balance(0),service_charge(1){}

vector<string> Account::Report() const
{
  vector<string> report;
  report.push_back("Balance is " + to_string(balance) + "\n");
  report.push_back("Transactions: \n");
  for(auto t:log){
    report.push_back(t.Report());
  }
  report.push_back("--------------- \n");
  return report;
}

bool Account::Deposit(int amt){
  if(amt >= 0){
    balance += amt;
    log.push_back(Transaction(amt, "Deposit"));
    balance -= service_charge;
    log.push_back(Transaction(service_charge, "Service Charge"));
    return true;
  }else{
    return false;
  }
}

bool Account::Withdraw(int amt){
  if(amt >= 0){
    if(balance >= amt){
      balance -= amt;
      log.push_back(Transaction(amt, "Withdraw"));
      balance -= service_charge;
      log.push_back(Transaction(service_charge, "Service Charge"));
      return true;
    }else{
      return false;
    }
  }else{
    return false;
  }
}

// int Account::GetBalance(){
//   return balance;
// }