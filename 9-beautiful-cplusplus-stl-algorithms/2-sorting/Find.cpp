#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Employee{
  private:
    string firstname, lastname;
    int salary;
  public:
    Employee() = default;
    Employee(
      string first,
      string last,
      int salary
    ):firstname(first), lastname(last), salary(salary){};

    string GetName() const{ return firstname + " " + lastname; };
    int GetSalary() const{ return salary; };

    bool operator<(Employee employee){
      return employee.salary > salary; 
    }
};

ostream& operator<<(ostream& os, vector<Employee> employees){
  os << "\n\n";
  for(auto const& employee:employees){
    os << employee.GetName() << " " << employee.GetSalary() << endl;
  }
  os << "\n";
  return os; 
}

int main(){

  vector<int> vi{4,2,1,3,5,6,8};
  cout<< "Max element " << *max_element(begin(vi), end(vi)) << endl;
  cout << "Min element " << *min_element(begin(vi), end(vi)) << endl;

  vector<Employee> employees{
    {"Anu", "Gopal", 13},
    {"Anurag", "Yadav", 13},
    {"Anurag", "Gopal", 20},
    {"Shiv Shankar", "Singh", 20},
  };

  
  cout << "Upper bound or Lower bound always works on sorted order\n\n";
  sort(begin(vi), end(vi));
  for(auto const& i:vi){
    cout << i << " ";
  }
  

  cout << "\nUpper bound of 4\n";
  auto it = upper_bound(begin(vi), end(vi), 4);
  if(it != end(vi)){
    cout << *it << endl;
  }

  cout << "Lower bound of 4\n";
  it = lower_bound(begin(vi), end(vi), 4);
  if(it != end(vi)){
    cout << *it << endl;
  }

  return 0;
}