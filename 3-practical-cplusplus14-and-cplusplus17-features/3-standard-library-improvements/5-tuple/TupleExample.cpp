#include <iostream>
#include <tuple>
#include <string>

using namespace std;
int main(){

  tuple<string, int, double> student;
  student = make_tuple("anu", 12, 42.41);

  cout << "Name " << get<string>(student) << endl; // if more than once string vars in tuple studnet then its error
  cout << "Age " << get<int>(student) << endl; // datatype based get
  cout << "Marks " << get<2>(student) << endl; // index based get

  // assignment
  get<0>(student) = "Gopal";
  cout << "Name " << get<0>(student) << endl;
  
  cout << "Tuple size: " << tuple_size<decltype(student)>() << endl;

  // auto [firstname, age, marks] = make_tuple("anurag", 142, 532.51); // c++17 structured binding use-> -std=c++17
  // cout << firstname; 

  return 0;
}