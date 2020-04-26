// string manipulation

#include <iostream>
#include <string>

using namespace std;
int main(){

  string name;
  cout << "Enter your first and last(must) name " << endl;
  cin >> name;

  name = "Your name is " + name;

  cout << "length " << name.length();
  cout << "Enter substring to find in name ";
  
  string substring;
  cin >> substring;

  int pos = name.find(" ");
  cout << "Substring starting at " << pos << name.substr(pos%name.length());

  return 0;
}
