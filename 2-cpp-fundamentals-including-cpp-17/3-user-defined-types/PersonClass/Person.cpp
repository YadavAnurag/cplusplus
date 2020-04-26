#include <iostream>
#include "Person.h"

using std::endl;
using std::cout;

Person::Person():arbitrarynumber(0){
  cout << "Constructing " << getName() << endl;
} 

Person::Person(std::string first, std::string last, int arbitrarynumber):
  firstname(first),lastname(last),arbitrarynumber(arbitrarynumber){
    cout << "Constructing " << getName() << endl;
  }

Person::~Person(){
  cout << "Destructing " << getName() << endl;
}

std::string Person::getName(){
  return firstname + " " + lastname;
}