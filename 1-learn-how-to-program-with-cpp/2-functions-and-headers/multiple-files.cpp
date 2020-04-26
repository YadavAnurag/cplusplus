#include <iostream>

double add(double x, double y);
double add(double x, double y, double z);

using namespace std;
int main(){

  auto a = add(3,4);
  cout << a << endl << add(3.9 ,4 ,5);

  return 0;
}