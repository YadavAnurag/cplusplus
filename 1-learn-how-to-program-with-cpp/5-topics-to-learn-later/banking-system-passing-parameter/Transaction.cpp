#include "header-files/Transaction.h"

using namespace std;

Transaction::Transaction(int amt, string kind):amount(amt),type(kind){}

string Transaction::Report(){
  string report;
  report += "   ";
  report += type ;
  report += " ";
  report += to_string(amount);
  report += "\n";

  return report;
}

void Transaction::doubleAmount(){
  amount *= 2;
}
