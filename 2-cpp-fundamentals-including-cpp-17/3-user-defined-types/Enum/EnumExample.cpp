#pragma once
#include "status.h"
#include <iostream>

using namespace std;
int main(){
  // old style lack of scoping
  Status s = PENDING;
  s = APPROVED;

  // modern style scoped enums
  FileError fe = FileError::NOT_FOUND;
  fe = FileError::OK;

  NetworkError ne = NetworkError::DISCONNECTED;
  ne = NetworkError::OK;

  return 0;  
}