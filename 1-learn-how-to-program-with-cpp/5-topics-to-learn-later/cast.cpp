#include <iostream>

using namespace std;
int main(){

  int i;

  i = static_cast<int> (8.9); // no warnings
  cout << i;

  return 0;
}