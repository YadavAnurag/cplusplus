#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// unnamed function
// [] (int a, int b){
//   //do something    // inline implementation
// }


void print(vector<string> const& names){
  for(auto name:names) cout<<name << " ";
  cout << endl;
}

// old c++98 function
bool compare(string const& a, string const& b){
  return a.length() < b.length();
}
int main(){

  vector<string> names{
    "Anu", "Anurag", "Gopal", "Yadav", "Shankar", "Kushwaha", "Verma"
  };

  cout << "Using old c++98 compare function \n";
  sort(names.begin(), names.end(), compare);
  print(names);


  cout << "Using c++14 lambda compare function \n";
  sort(names.begin(), names.end(), 
    [](string const& a, string const& b){ // anonymous lambda compare function
      // for c++11 you must define the declare datatype
      return a.length() < b.length();
    }
  );
  print(names);

  return 0;
}