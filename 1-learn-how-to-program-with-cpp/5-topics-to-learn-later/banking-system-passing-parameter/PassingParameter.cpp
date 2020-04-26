#include <iostream>
#include "header-files/Transaction.h"

using namespace std;

// passing Transaction parameter by value and reference 
void tryToChangeTransaction(Transaction t){
  t.doubleAmount();
}
// void anotherTryToChangeTransaction(const Transaction& t){
//   t.doubleAmount(); // -> const does not allow to modification inside it
// }
void changeTransaction(Transaction& t){
  t.doubleAmount();
}


int main(){

  Transaction T(50, "Deposit");
  cout << "Original: " << T.Report() << endl;

  tryToChangeTransaction(T);
  cout << "After pass by value: \n" << T.Report() << endl;

  changeTransaction(T);
  cout << "After pass by reference: \n" << T.Report() << endl;
  
  return 0;
}