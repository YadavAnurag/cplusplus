#include <vector>
#include <fstream> 
#include <iostream>

using namespace std;
int main(){
  vector<int> vi{};

  ifstream dataFile{"./int-data.txt"};
  int n{};
  while(dataFile >> n){
    vi.push_back(n);
  }

  for(auto const& i:vi){
    cout << i << " ";
  }


  return 0;
}