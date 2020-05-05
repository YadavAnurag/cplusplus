#include <iostream>
#include <vector>

using namespace std;
int main(){

  vector<int> vi{1,2,3};

  cout << "Size of vi " << vi.size()  << endl;;
  cout << "Capacity of vi " << vi.capacity()  << endl;;

  cout << "Reserve capacity vi.reserve(new_capacity) " << endl;

  vi.reserve(100); // make push_back faster

  cout << "Size of vi " << vi.size()  << endl;;
  cout << "Capacity of vi " << vi.capacity()  << endl;;


  return 0;
}