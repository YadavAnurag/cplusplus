#pragma once
#include <string>
#include <iostream>
#include "Person.h"

Person::Person(){}

Person::Person(
  std::string first,
  std::string last,
  int arbitrarynumber 
):firstname(first),lastname(last){}

Person::~Person(){
  std::cout << "[Person] Destructing " << std::endl;
}

std::string Person::GetName() const{
  return firstname +  lastname;
}

int Person::GetNumber() const{
  return arbitrarynumber;
};

bool Person::operator<(Person const& p) const{
  return arbitrarynumber < p.arbitrarynumber;
}
bool Person::operator<(int const& i) const{
  return arbitrarynumber < i;
}

// free function
bool operator<(int const& i, Person const& p){
  return i < p.GetNumber(); 
  // if object is passed as const ref, free function can not call member function of the object that are not declared as const(member functions)
}