#include <iostream>
#include "header-files/Person.h"

using std::endl;
using std::cout;

Person::Person():arbitrarynumber(0){
  cout << "[Person] Constructing " << getName() << endl;
} 

Person::Person(std::string first, std::string last, int arbitrarynumber):
  firstname(first),lastname(last),arbitrarynumber(arbitrarynumber){
    cout << "[Person] Constructing " << getName() << endl;
  }

Person::~Person(){
  cout << "[Person] Destructing " << getName() << endl;
}

std::string Person::getName() const{
  return firstname + " " + lastname;
}