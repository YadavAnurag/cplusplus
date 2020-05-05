#pragma once
#include <iostream>
#include <utility>
#include "IndexOutOfBoundException.h"
#include <vector>


using namespace std;
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

    // copy constructor-> if not implemented then, compiler by default will copy member-wise
    IntArray(IntArray const& source){
      if(! source.IsEmpty()){
        m_size = source.m_size;
        m_ptr = new int[m_size]{};

        for(int i=0; i<m_size; i++){
          m_ptr[i] = source.m_ptr[i]; 
        }
      }
    }


    ~IntArray(){
      delete[] m_ptr;
      std::cout << "Releasing memory, created by raw pointer\n";
    }

    // assignment operator (via copy-and-swap idiom)
    IntArray& operator=(IntArray source){
      swap(*this, source);
      return *this;
    }

    // swap to array objects member wise
    friend void swap(IntArray& a, IntArray& b) noexcept{
      //member wise swap
      swap(a.m_ptr, b.m_ptr);
      swap(a.m_size, b.m_size);
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



    // operator << overlading to print array
    friend std::ostream& operator<<(std::ostream& os, IntArray const& a){
      os << "[";
      for(int i=0; i<a.Size(); i++){
        os << a[i] << ' ';
      }
      os << "]";

      return os;
    }
};