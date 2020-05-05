#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

ostream& operator<<(ostream& os, vector<int> const& vi){
  os << "[ ";
  for(auto const& i:vi){
    os << i << " ";
  }
  os << ']';
  return os;
}
int main(){

  vector<int> vi{1,2,3,4,5};
  cout << "Initial ";
  cout << vi << "\n\n";

  cout << "Remove all odd numbers \n";
  vi.erase(remove_if(begin(vi), end(vi), [](auto const& i){
    return i%2==1;
  }), end(vi)); // always specify the last boundary iterator to erase garbage values

  cout << "After remove \n";
  cout << vi << "\n\n";

  return 0;
}