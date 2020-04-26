#include "Person.h"

int main(){

  // raw pointer heap allocation
  Person* pAnu = new Person{};
  pAnu->SayHi();

  // missing delete pointer
  return 0;
}