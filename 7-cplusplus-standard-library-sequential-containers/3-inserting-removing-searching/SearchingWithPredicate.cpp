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

// case-insensitive string comparision 
// (Note-  doesn't work for UTF-8)
inline bool EqualsCaseInsensitive(string const& s1, string const& s2){
  return equal(begin(s1), end(s1), begin(s2), end(s2), [](char const& ch1, char const& ch2){
    return tolower(ch1) == tolower(ch2); // compare char by char in lowercase
  });
}
int main(){

  vector<string> vs{"Anu", "Anurag", "Gopal"};

  cout << "String vector content \n";
  cout << vs << endl;
  cout << "Please enter a string to search using find_if- ";
  string search;
  cin >> search;

  auto pos = find_if(begin(vs), end(vs), [& search](string const& s){
    return EqualsCaseInsensitive(s, search);
  });
  if(pos != end(vs)){
    cout << search << " was found \n";
  }else{
    cout << search << " was not found \n";    
  }

  
  return 0;
}