#pragma once
#include <memory>
#include <iostream>

struct Node{
  int data{}; // declaration & initialization
  std::unique_ptr<Node> next{nullptr};  // declaration & initialization

  Node(int value): data{value}, next{nullptr} {} // constructor
  // ~Node(){ std::cout<< "Destroy node with data " << data <<std::endl; } // desctructor
  //nodes of linked list always destory recursively
};

class SinglyLinkedList{
  private:
    std::unique_ptr<Node> head{nullptr};
  public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    void InsertAtHead(int const& val); // insert at start
    int Size() const;
    
};