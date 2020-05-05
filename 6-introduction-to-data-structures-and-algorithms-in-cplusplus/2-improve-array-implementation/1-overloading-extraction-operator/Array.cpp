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
  IntArray a{10};
  for(int i=0; i<a.Size(); i++){
    a[i] = (i+1)*10;
  }
  cout << "Array elements: " << a << endl;


  return 0;
}
