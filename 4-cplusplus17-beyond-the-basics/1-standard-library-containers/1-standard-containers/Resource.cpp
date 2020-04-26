#include <iostream>
#include "header-files/Resource.h"

using std::cout;
using std::endl;
Resource::Resource(){
  cout << "[Resource.cpp] Constructing default \n";
}

Resource::Resource(std::string n):name(n){
  cout << "[Resource.cpp] Constructing " << name << endl;
}

Resource::Resource(Resource const& r):name(r.name){
  cout << "[Resource.cpp] Constructing copy \n" << name << endl;
}

Resource& Resource::operator=(Resource const& r){
  // cout << "[Resource.cpp] operator= overloading \n";
  name = r.GetName();
  cout << "copy assigning " << name <<endl;
  return *this;
}

Resource::~Resource(){
  cout << "[Resource.cpp] Destructing \n";
}