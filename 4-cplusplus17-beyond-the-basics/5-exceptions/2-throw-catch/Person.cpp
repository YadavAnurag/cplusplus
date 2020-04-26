#include "header-files/Person.h"
#include <stdexcept> // std::invalid_argument


Person::Person():firstname(""),lastname(""),arbitrarynumber(-1){}

Person::Person(
  std::string first,
  std::string last,
  int arbitrary
):firstname(first),lastname(last),arbitrarynumber(arbitrary){
  if(arbitrary == 0){
    throw std::invalid_argument("Arbitrary Number for a person can not be zero. \n");
  }
}