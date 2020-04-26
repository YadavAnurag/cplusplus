#include "Person.h"
#include <memory> // for std::make_unique and std::unique_ptr
// make_unique<X> returns unique_ptr<X>

int main(){

  // using smart pointer to allocation memory on heap
  auto pAnu = std::make_unique<Person>();
  pAnu->SayHi();

  return 0;
}