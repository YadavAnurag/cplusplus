#include "header-files/Noise.h"
#include <iostream>
#include <exception>
#include <memory>
#include <vector>

using namespace std;
int main(){

  vector<int> vi{1,2,3};
  vector<Noise> vn;
  try{
    auto n1 = new Noise("beep");
    vn.push_back(*n1);

    vi.at(99); // exception;
    //risky stuff
    delete n1; // you must have to delete x, otherwise memory leak because new is created memory on heap, and try block only destruct stack allocation
  }catch(exception &e){
    cout << " Exception using stack " << e.what() << endl;
  }


  ///////////////////////////////////
  cout << "///////////////////////////////////";
  try{
    auto n2 = make_unique<Noise>("bloop");
    vn.push_back(*n2);

    vi.at(99); //exception
    //risky stuff
    // no need to delete explicitly
  }catch(exception &e){
    cout << " Exception using heap " << e.what() << endl;
  }

  return 0;
}