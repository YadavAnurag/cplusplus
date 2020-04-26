#include "header-files/Noise.h"
#include <iostream>
#include <stdexcept> // std::invalid_argument

using std::cout;
using std::endl;

Noise::Noise(){
  cout << "[Noise.cpp] constructing...!";
}

Noise::Noise(std::string sound):soundIMake(sound){
  cout << "[Noise.cpp] constructing...!" << soundIMake << endl;
}

Noise::~Noise(void){
  cout <<"[Noise.cpp] destructing...! " << soundIMake << endl;
}