#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;
ostream& operator<<(ostream& os, vector<int> vi){
  os << "[ ";
  for(auto const& i:vi){
    os << i << " ";
  }
  os << "]";
  return os;
}
int main(){

  vector<int> vi{4,2,1,3,5,6,8};
  random_device randomDevice;
  mt19937 generator(randomDevice());

  cout << "after sorting\n";
  sort(begin(vi), end(vi));
  cout << vi << endl;

  cout << "after shuffle \n";
  shuffle(begin(vi), end(vi), generator);
  cout << vi << endl;


  return 0;
}