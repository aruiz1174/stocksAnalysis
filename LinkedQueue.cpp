using namespace std;
#include "Node.h"
#include <iostream>
#include "LinkedQueue.h"

template <class T>
LinkedQueue<T>::LinkedQueue()
{
    front = nullptr;
    rear = nullptr;
    count = 0;
}

template <class T>
void LinkedQueue<T>::enqueue(T item)
{
    Node<T>* temp = new Node<T>(item);

    if(rear == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }

    count++;

}

template <class T>
T LinkedQueue<T>::dequeue()
{
    if(isEmpty())
    {
        return;
    }

    Node<T>* temp = new Node<T>(front);
    T res = temp->data;

    front = front->next;

    count--;
    return res;
}

template <class T>
bool LinkedQueue<T>::isEmpty()
{
    return front == NULL;
}

template <class T>
int LinkedQueue<T>::size()
{

    return count;
}

template <class T>
void LinkedQueue<T>::display()
{
      Node<T>* temp = front;
      int a = 0;

     while(temp != nullptr) {
         cout << temp->data << endl;
         temp = temp->next;
     }


}

template<class T>
Node<T> *LinkedQueue<T>::getFront() const {
    return front;
}

