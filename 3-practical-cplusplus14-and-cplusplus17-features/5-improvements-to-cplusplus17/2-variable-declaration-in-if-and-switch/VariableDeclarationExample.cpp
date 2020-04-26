#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void print(vector<string> const& names){
  for(auto const name: names) cout << name <<  " ";
  cout << "\n";
}

int main(){

  vector<string> names{"Hi", "this" , "is", "Anu"}; 

  // find and replace Anu, with ***
  auto const it = find(begin(names), end(names), "Anu");
  if(it != end(names)){
    *it = "***";
  }
  print(names);


  // again find this and replace with **
  { // use to not to redeclare it in same scope
    auto const it = find(begin(names), end(names), "this");
    if(it != end(names)){
      *it = "**";
    }
  }
  print(names);


  // #################################################
  // c++17 modern 

  cout << "Modern c++17 \n";
  if(auto const it = find(begin(names), end(names), "Hi"); it != end(names)){ // it in only if else scope
    *it = "Hello";
  }else{
    // it access scope also in else block
    *it = "Hello else";
  }
  print(names);


  switch(int const i{2}; i){
    case 1:
      cout << "1"; break;
    case 2:
      cout << "2"; break;
    default:
      cout << "default"; 
  }

  return 0;
}