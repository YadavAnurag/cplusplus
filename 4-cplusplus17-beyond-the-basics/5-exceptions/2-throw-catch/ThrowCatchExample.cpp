#include "header-files/Person.h"
#include <iostream>
#include <exception>

using std::cout;
using std::endl;

int main(){

  try{

    Person p1{"anu", "singh", 0};
    Person p2{"anu", "singh", -1};

  }catch(std::exception& e){ // always catch exception by ref, it will retain the ref of throwed exception object
    cout << "Exception: \n" << e.what() << endl;
  }

  return 0;
}