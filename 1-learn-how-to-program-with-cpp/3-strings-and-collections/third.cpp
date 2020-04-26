// vector

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main(){

  vector <int> vi;
  for(int i=0; i<10; i++){
    vi.push_back(i);
  }

  for(auto item:vi){
    cout << item << " ";
  }
  cout << endl;

  for(unsigned int i=0; i<vi.size(); i++){
    cout << i << " ";
  }
  cout << endl;

  for(auto i=begin(vi); i<end(vi); i++){
    cout << *i << " ";
  }
  cout << endl;
  cout << "Enter three words" << endl;
  vector <string> vs;
  for(int i=0; i<3; i++){
    string s;
    cin >> s;
    vs.push_back(s);
  }

  cout << "Sorted vs " << endl;
  sort(vs.begin(), vs.end());
  for(auto item:vs){
    cout << item << " ";
  }
  cout << endl;


  auto tees = count(begin(vs[0]), end(vs[0]), 't');
  cout << "String " << vs[0] << " has " << tees << " t " << endl;

  auto found = find(vs.begin(), vs.end(), "cat");
  cout << *found << " Found " << endl;

  return 0;
}
