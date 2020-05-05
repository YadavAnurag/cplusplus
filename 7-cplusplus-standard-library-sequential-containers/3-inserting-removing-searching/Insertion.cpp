#include <vector>
#include <iostream>


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

  vector<int> vi{11, 22, 33, 44, 55};
  cout << "Initial vector \n"; 
  cout << vi << endl << endl;

  cout << "Inserting a single element at 1 postition \n";
  vi.insert(begin(vi)+1, 1, 99);
  cout<< vi << endl << endl;

  cout << "Inserting 3 copies of 100 at end \n";
  vi.insert(end(vi), 3, 100);
  cout << vi << endl << endl;

  vector<int> source{200, 200, 200};
  cout << "Inserting values from another source range \n";
  vi.insert(begin(vi), begin(source), end(source));
  cout << vi << endl << endl;

  cout << "Inserting values from initializer list \n";
  vi.insert(end(vi), {300, 300, 300});
  cout << vi << endl << endl;


  return 0;
}