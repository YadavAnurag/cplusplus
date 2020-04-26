#include <iostream>
#include <map>
#include <string>

using namespace std;
int main(){

  map<string, string> italianDictionary{
    {"casa", "home"},
    {"gatto", "cat"},
    {"tavolo", "table"}
  };
  auto result = italianDictionary.insert({"sedia", "chair"}); 
  // result contains iterator and boolean, if italianDictionary already contain "sedia" key then, "sedia" will be inserted
  // and iterator will point to inserted "sedia" and boolean will be true
  // otherwise iterator will point the key that is already in map and boolean will be false
  
  // old style
  if(result.second == true){ 
    cout << "Insertion is ok \n";
  }else{
    cout << "Use result.first to location existing item \n";
  }


  // modern style structured binding
  auto [position, success] = italianDictionary.insert({"sedia", "chair"});

  for(auto const& [italian, english]:italianDictionary){
    cout << italian << " : " << english << "\n";
  }

  return 0;
}