#include <iostream>
#include "header-files/Person.h"

using std::cout;
using std::endl;

Person::Person(){
  cout << "[Person.cpp] constructing " << endl;
}

Person::Person(
  std::string first,
  std::string last,
  int arbitrary
):firstname(first),lastname(last),arbitrarynumber(arbitrary){
  cout << "[Person.cpp] constructing " << endl;
}

Person::~Person(){
  cout << "[Person.cpp] destructing " << endl;
}

std::string Person::GetName() const {
  return firstname + " " + lastname;
}

bool Person::operator<(int const& i) const{
  return arbitrarynumber < i;
}

bool Person::operator<(Person const& p) const{
  return arbitrarynumber < p.GetNumber();
}


// free function
bool operator<(int const& i, Person const& p){
  return i < p.GetNumber();
}

