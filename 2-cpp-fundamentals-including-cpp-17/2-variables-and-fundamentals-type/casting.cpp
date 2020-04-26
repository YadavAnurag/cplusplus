#include <iostream>

using namespace std;
int main(){

  int a1 = 1.2; // warnings
  cout << "a1 " << a1 << endl;

  int a2 = static_cast<int> (1.2); // no warnings
  return 0;
}