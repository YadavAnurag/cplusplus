#pragma once
#include <string>
#include "Person.h"

class Tweet : public Person{
  private:
    std::string twitterhandle;
  public:
    Tweet(std::string first, 
      std::string last,
      int arbitrary,
      std::string handle 
    );
    ~Tweet();
};