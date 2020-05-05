#pragma once
#include <iostream>
#include "IndexOutOfBoundException.hpp"

#ifndef ARRAY_HPP_INCLUDED
#define ARRAY_HPP_INCLUDED 

using namespace std;
template <typename T>
class Array{
  private:
    T* m_ptr{nullptr};  // never forget to delete memory intialized by raw pointers
    int m_size{0};
    // c++11 feature, initialization at the time of class declaration

    bool IsValidIndex(int index) const {
      return (index >= 0) && (index < m_size);
    }

  public:
    // default constructor
    Array() = default;
    
    // constructor to create an array of give size(element count)
    explicit Array(int size){ // explicit is used, to mark constructor not to implicitly convert types to its object type.
      if(size != 0){
        m_ptr = new T[size]{};
        m_size = size;
      }
    }

    // copy constructor
    //if not implemented then, compiler by default will copy member-wise
    Array(Array const& source){
      if(! source.IsEmpty()){
        m_size = source.m_size;
        m_ptr = new T[m_size]{};

        for(int i=0; i<m_size; i++){
          m_ptr[i] = source.m_ptr[i]; 
        }
      }
    }

    // move constructor
    Array(Array&& source):m_ptr{source.m_ptr},m_size{source.m_size}{
      cout <<"\n---Working move constructor---\n";
      source.m_ptr = nullptr;
      source.m_size = 0;
    }

    // desctructor
    ~Array(){
      delete[] m_ptr;
      std::cout << "Releasing memory, created by raw pointer\n";
    }

    // Assignment operator (via copy-and-swap idiom)
    Array& operator=(Array source){
      swap(*this, source);
      return *this;
    }

    // swap to array objects (member wise swap)
    friend void swap(Array& a, Array& b) noexcept{
      swap(a.m_ptr, b.m_ptr);
      swap(a.m_size, b.m_size);
    }

    int Size() const {
      return m_size;
    }

    bool IsEmpty() const {
      return (m_size == 0);
    }

    // assignment to any index // safe element access with bounds checking
    T& operator[](int index){
      if(! IsValidIndex(index)){
        throw IndexOutOfBoundException{};
      }

      return m_ptr[index];
    }

    // safe read only access to any index with bounds checking
    T operator[](int index) const {
      if(! IsValidIndex(index)){
        throw IndexOutOfBoundException{};
      }

      return m_ptr[index];
    }


    // Enable idiomatic stream insertion for Array objects
    // operator << overlading to print array e.g. cout << myArray;
    friend std::ostream& operator<<(std::ostream& os, Array const& a){
      os << "[";
      for(int i=0; i<a.Size(); i++){
        os << a[i] << ' ';
      }
      os << "]";

      return os;
    }
};

#endif //ARRAY_HPP_INCLUDED