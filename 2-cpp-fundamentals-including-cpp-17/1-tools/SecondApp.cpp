#include <iostream>
#include <string>

using namespace std;
int main(){
  
  string name;
  cout << "Enter your name " << endl;
  getline(cin, name);
  cout << "Hello, " << name;

  return 0;
}