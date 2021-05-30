#include "Node.h"

template <class T>
Node<T>::Node(T a) : data(a), next(nullptr) {} //

template <class T>
T Node<T>::get_data() const {
  return data;
}

template<class T>
Node<T>* Node<T>::get_next() const {
  return next;
}
