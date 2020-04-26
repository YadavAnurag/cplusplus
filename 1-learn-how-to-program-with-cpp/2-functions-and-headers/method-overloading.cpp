#include <iostream>

bool test(bool x){
  return x;
}
bool test(double x){
  return x > 0 ? true : false;
}

using namespace std;
int main(){
  
  bool a = test(true);
  cout << a << endl << test(4.0);
  return 0;
}