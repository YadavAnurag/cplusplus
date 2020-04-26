#include <vector>
#include <iostream>
#include "header-files/Resource.h"

using std::vector;
using std::cout;
using std::endl;
int main(){

  vector numbers{0,1,2}; // container class type deduction c+17
  numbers.push_back(-2);
  numbers[0] = 3;
  int num = numbers[2];

  for(int const& number:numbers){
    cout << number << " ";
  }


  Resource r{"local"};
  {// braces for scope
    cout << "--------------------\n";
    vector<Resource> resources{};
    resources.push_back(r);
    cout << "--------------------\n";
    
    resources.push_back(Resource{"first"});
    cout << "--------------------\n";
    resources.push_back(Resource{"second"});
  }

  return 0;
}