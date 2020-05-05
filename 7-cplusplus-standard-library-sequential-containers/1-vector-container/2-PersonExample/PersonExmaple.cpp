#include "header-files/Person.hpp"
#include <vector>
#include <string>
#include <iostream>


using namespace std;

int main(){

  vector<Person> vp{};

  vp.push_back(Person{"Anu", 19});
  vp.push_back(Person{"Anurag", 22});
  vp.push_back(Person{"Gopal", 21});


  for(auto const& p:vp){
    p.SayHi();
    cout <<endl;
  }

  return 0;
}
