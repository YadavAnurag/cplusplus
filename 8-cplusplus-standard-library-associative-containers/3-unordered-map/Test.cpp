#include <unordered_map>
#include <iostream>

using namespace std; 
int main(){

  unordered_map<string, int> words;
  

  // c++ map and 
  words["first"] = 10;
  
  words.insert(make_pair<string, int>("first", 29));


  auto counts = words["first"];
  cout << words.size() << counts;

  return 0;
}