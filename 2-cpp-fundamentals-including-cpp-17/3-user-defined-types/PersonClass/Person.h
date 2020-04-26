#include <string>


// never ever use namespaces in header file, always use full name with scope resolution operator
// because whoever use your header may not want to use your namespace -> that's namespace collision

class Person{
  private:
    std::string firstname;
    std::string lastname;
    int arbitrarynumber;
  public:
    Person(); // or Person() = default -> no implementation required
    ~Person();
    Person(std::string first, std::string last, int arbitrarynumber);
    std::string getName();
};