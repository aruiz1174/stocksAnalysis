#ifndef NODE_H
#define NODE_H

#include <iostream>

template <class T>
class Node {
 public:
  T data;
  Node<T> *next;

  Node(T a);
  ~Node(){
    //if (next) delete next;
  }

  T get_data() const;
  Node<T>* get_next() const;
};

#include "Node.cpp"
#endif
