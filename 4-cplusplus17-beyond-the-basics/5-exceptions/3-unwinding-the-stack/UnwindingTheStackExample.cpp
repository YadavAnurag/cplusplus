#include "header-files/Noise.h"
#include <exception>
#include<iostream>
#include <vector>

using std::vector;
using std::exception;
using std::cout;
using std::endl;
int main(){

  // remember always after exception occurred in try block destructor run for objects in try block
  Noise n{"beep"};
  try{
    vector<int> vi{1,2,3};
    Noise n1{"bloop"};
    vi.at(8);

  }catch(exception& e){
    cout << "Exception: " << e.what() << endl;
  }

  return 0;
}