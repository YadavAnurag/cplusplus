#include "header-files/Person.h"
#include <string>

using std::string;
Person::Person(
  std::string first,
  std::string last,
  int arbitrary
):firstname(first),lastname(last),arbitrarynumber(arbitrary){}

string Person::GetName() const{
  return firstname + " " + lastname;
}

int Person::GetNumber() const{
  return arbitrarynumber;
}

void Person::SetNumber(int arbitrary) {
  arbitrarynumber = arbitrary;
}