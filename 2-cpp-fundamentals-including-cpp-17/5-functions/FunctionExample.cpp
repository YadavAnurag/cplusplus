#include <iostream>
#include "Utility.h"

using namespace std;
int main(){
  
  int x;
  cout << "Enter a number" << endl;
  cin >> x;

  cout << "IsPrime " << IsPrime(x);
  cout << endl;
  cout << "Is2MorePrime " << Is2MorePrime(x);
  cout << "x after prime check " << x;

  return 0;
}