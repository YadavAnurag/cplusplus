#pragma once
#include <iostream>
#include "IndexOutOfBoundException.h"

class IntArray{
  private:
    int* m_ptr{nullptr};  // never forget to delete memory intialized by raw pointers
    int m_size{0};
    // c++11 feature, initialization at the time of class declaration

    bool IsValidIndex(int index) const {
      return (index >= 0) && (index < m_size);
    }

  public:
    IntArray() = default;
    
    explicit IntArray(int size){ // explicit is used, to mark constructor not to implicitly convert types to its object type.
      if(size != 0){
        m_ptr = new int[size]{};
        m_size = size;
      }
    }

    ~IntArray(){
      delete[] m_ptr;
      std::cout << "Releasing memory, created by raw pointer\n";
    }

    int Size() const {
      return m_size;
    }

    bool IsEmpty() const {
      return (m_size == 0);
    }

    // assignment to any index
    int& operator[](int index){
      if(! IsValidIndex(index)){
        throw IndexOutOfBoundException{};
      }

      return m_ptr[index];
    }

    // read only access to any index
    int operator[](int index) const {
      if(! IsValidIndex(index)){
        throw IndexOutOfBoundException{};
      }

      return m_ptr[index];
    }
};