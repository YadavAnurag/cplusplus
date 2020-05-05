#include <vector>
#include <iostream>

using namespace std;
int main(){

  vector<int> vi{1,2,3};

  vi[6] = 78; // no bound check - not safe but some bit fast
  cout << vi[6];

  vi.at(5) = 100; // bound check - safe, but some bit slow
  cout <<vi.at(5);

  return 0;
}