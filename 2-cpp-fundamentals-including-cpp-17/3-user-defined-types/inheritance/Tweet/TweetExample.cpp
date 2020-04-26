#pragma once
#include <iostream>
#include "header-files/Tweet.h"

using std::cout;
using std::endl;
using std::string;
int main(){

  Person p1("Anu", "Singh", 12);
  {
    Tweet t1("Anurag", "Yadav", 12, "@anu");
    string name2 = t1.getName();
  }

  cout << "After innermost block" << endl;
  string name = p1.getName();


  return 0;
}