#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

ostream& operator<<(ostream& os, vector<string> const& vi){
  os << "[ ";
  for(auto const& i:vi){
    os << i << " ";
  }
  os << ']';
  return os;
}
int main(){

  vector<string> vs{"Anu", "Anurag", "Gopal"};

  cout << "String vector content \n";
  cout << vs << endl;
  cout << "Please enter a string to search using find- ";
  string search;
  cin >> search;

  auto pos = find(begin(vs), end(vs), search);
  if(pos != end(vs)){
    cout << search << " was found \n";
  }else{
    cout << search << " was not found \n";    
  }

  
  return 0;
}