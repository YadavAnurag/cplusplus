#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;
int main(){

  Person p1("Anurag", "Gopal", 12);
  Person p2("Anu", "Yadav", 20);

  if(!(p1<p2)){
    cout << "p1 is not less than p2 " << endl;
  }

  if(!(p1<300)){
    cout << "p1 is not less than 300 " << endl;
  }

  if(!(300<p1)){
    cout << "300 is not less than p1 " << endl;
  }


  return 0;
}