#include <iostream>

using namespace std;
int main(){

  int i1 = 1;
  cout << "i1 " << i1 << endl;
  int i2;
  i2 = 2;
  cout << "i2 " << i2 << endl;
  int i3(1);
  cout << "i3 " << i3 << endl;
  int i4{4};
  cout << "i4 " << i4 << endl;


  double d1 = 2.2;
  cout << "d1 " << d1 << endl;
  double d2 = i1;
  cout << "d2 " << d2 << endl;

  char c1 = 'a';
  cout << "c1 " << c1 << endl;

  bool flag = false;
  cout << "flag " << flag << endl;
  flag = i1;
  cout << "flag " << flag << endl;
  flag = d1;
  cout << "flag " << flag << endl;

  auto a1 = 1;
  auto a2 = 1.1;
  auto a3 = 'c';
  auto a4 = "c";
  auto a5 = true;
  auto a6 = 3L;
  auto a7 = 1'000'000'000'000;
  auto a8 = 0x77;
  auto a9 = 0b111;

  unsigned char n1 = 128;
  char n2 = 128;

  // if values get out of range, values get under and overflow
  

  return 0;
}