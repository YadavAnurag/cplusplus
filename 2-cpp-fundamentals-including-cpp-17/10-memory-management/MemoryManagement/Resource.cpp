#include "header-files/Resource.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;


Resource::Resource(string n):name(n){
  cout << "[Resource.cpp] constructing " << endl;
}


Resource::~Resource(void){
  cout << "[Resource.cpp] destructing " << endl;
}