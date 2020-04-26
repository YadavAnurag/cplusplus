#pragma once
#include<string>

class Resource{
  private:
    std::string name;
  public:
    Resource();
    Resource(std::string n);
    Resource(Resource const& r); // copy constructor
    Resource& operator=(Resource const& r);
    ~Resource(void);
    std::string GetName() const{return name;};
};