#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

template <class T>
class LinkedQueue
{
    private:
    Node<T>* front;
    Node<T>* rear;
    int count;

    public:
    LinkedQueue();
    void enqueue(T item);
    T dequeue();
    bool isEmpty();
    int size();
    void display();
};

#include "LinkedQueue.cpp"
#endif