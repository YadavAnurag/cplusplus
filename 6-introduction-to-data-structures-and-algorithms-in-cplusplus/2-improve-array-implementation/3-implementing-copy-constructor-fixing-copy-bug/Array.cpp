#include "header-files/Array.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;


// "<<" operator overloading -> code to print x object at cout
// ostream& operator<<(ostream& os,  X const& x){
//   return os;
// }
int main(){
  IntArray a{3}; 
  a[0] = 10;
  a[1] = 20;
  a[2] = 30;

  IntArray b = a;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  cout << "b[1] = 800 \n";
  b[1] = 800;

  cout << "a: " << a << endl;
  cout << "b: " << b << endl;


  return 0;
}
