// intro to string

#include <iostream>
#include <string>

using namespace std;
int main(){

  string name;
  cout << "Who are you ? ";
  cin >> name;

  string greeting = "Hello " + name;
  if(name == "anu"){
    greeting += ", I know You !";
  }
  cout << greeting;

  return 0;
}