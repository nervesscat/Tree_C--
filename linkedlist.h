#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

template <typename T>
class LinkedList{
private:
    Node<T> *first;
public:
    LinkedList();
    ~LinkedList();
    void add(T d);
    void remove(T d);
    void print();
};

#endif