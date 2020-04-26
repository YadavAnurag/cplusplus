#include <string> // std::string std::getline
#include <iostream>
#include <vector> // std::vector
#include <algorithm> // std::sort
#include <fstream> // std::ifstream

using namespace std;
int main(){
  // open file for reading
  ifstream file{"./data.txt"};

  // read each line from file to vector 
  vector<string> lines{};
  string line;
  while(getline(file, line)){
    lines.push_back(line);
  }

  // sort the read lines by length of the line using lambdas
  sort(begin(lines), end(lines), [](auto const& a, auto const& b){
    return a.length() < b.length();
  });

  // print the sorted lines
  for(auto const& line: lines){
    cout << line << "\n";
  }

  return 0;
}