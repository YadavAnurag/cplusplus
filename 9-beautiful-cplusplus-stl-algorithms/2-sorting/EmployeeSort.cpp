#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

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

  vector<Employee> employees{
    {"Anu", "Yadav", 19},
    {"Anu", "Gopal", 19},
    {"Anurag", "Gopal", 30},
    {"Shivam", "Kushwaha", 20},
    {"Shivam", "Verma", 20},
    {"Shiv Shankar", "Singh", 20},
  };

  // to sort custom types you must have define predicate or overload comparator < or > operator
  sort(begin(employees), end(employees));
  cout << employees;

  // sort based on salary
  sort(begin(employees), end(employees), [](auto emp1, auto emp2){
    return emp1.GetSalary() < emp2.GetSalary();
  });
  cout << employees;

  // sort based on name
  sort(begin(employees), end(employees), [](auto emp1, auto emp2){
    return emp1.GetName() < emp2.GetName();
  });
  cout << employees;

  stable_sort(begin(employees), end(employees), [](auto emp1, auto emp2){
    return emp1.GetSalary() < emp2.GetSalary();
  });
  cout << employees;

  
  cout << "\ncheck if the list is sorted or not\n";
  cout << "by default\n";
  cout << is_sorted(begin(employees), end(employees));
  cout << endl;

  cout << "by name\n";
  cout << is_sorted(begin(employees), end(employees), [](Employee emp1, Employee emp2){
    return emp1.GetName() < emp2.GetName();
  });
  cout << endl;



  return 0;
}