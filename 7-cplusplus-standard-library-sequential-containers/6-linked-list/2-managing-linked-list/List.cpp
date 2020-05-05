#include <algorithm>
#include <list>
#include <iostream>

using namespace std;

ostream& operator<<(ostream &os, list<string> list){
  os << "[ ";
  for(auto const& n:list){
    os << n << " ";
  }
  os << "]";
  return os;
}
int main(){

  list<string> planets{ // doubly linked-list
    "Venus", "Mars", "Jupiter", "Saturn", "Uranus"
  };

  
  cout << "Initial list contents \n" << planets << endl; 

  cout << "Insertion of Mercury at the beggining \n";
  planets.push_front("Mercury");
  cout << planets << endl;

  cout << "Insertion of Neptune at the end \n";
  planets.push_back("Neptune");
  cout << planets << endl;

  // Insert Earth before Mars
  cout << "Insertion of Earth before Mars \n";
  auto pos = find(begin(planets), end(planets), "Mars");
  if(pos != end(planets)){
    planets.insert(pos, "Earth");
  }
  cout << planets << endl;


  return 0;
}