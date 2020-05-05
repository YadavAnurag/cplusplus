#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;
int main(){

  vector<string> lines{};
  ifstream inputFile{"./string-data.txt"};

  string line{};
  while(getline(inputFile, line)){
    lines.push_back(line);
  }

  for(auto const& line:lines){
    cout << line << endl;
  }

  return 0;
}