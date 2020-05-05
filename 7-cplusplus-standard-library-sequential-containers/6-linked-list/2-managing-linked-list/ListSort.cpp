#include <list>
#include <iostream>
#include <algorithm>

using namespace std;
ostream& operator<<(ostream& os, list<string> list){
  os << "[ ";
  for(auto const &n:list ){
    os << n << " ";
  }
  os << "]";
  return os;
}

int main(){

  list<string> planets{
    "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"
  };

  cout << "Initial content of list " << planets << endl;

  // sort(begin(planets), end(planets)); // wrong, because list required bi-directional iterator
  planets.sort();


  cout << "After sort " << planets << endl;

  return 0;
}