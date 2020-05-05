#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>

using namespace std;

void print(vector<string> vs){
  for(auto const& s:vs){
    cout << s <<endl;
  }
  cout << endl;
}
int main(){

  ifstream inputFile{"./string-data.txt"};
  vector<string> lines{};
  
  string line{};
  while(getline(inputFile, line)){
    lines.push_back(line);
  }

  sort(begin(lines), end(lines)); // simple sort
  print(lines);
  
  sort(begin(lines), end(lines), [](auto const& line1, auto const& line2){
    return line1.length() < line2.length();
  }); // custom sort using lambda function
  print(lines);

  return 0;
}