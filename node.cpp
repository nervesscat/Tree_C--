#include <cstddef>
#include "node.h"

template <typename T>
Node<T>::Node(){
    next = NULL;
}

template <typename T>
Node<T>::Node(T d){
    data = d;
    next = NULL;
}

template <typename T>
void Node<T>::setData(T d){
    data = d;
}

template <typename T>
void Node<T>::setNext(Node *n){
    next = n;
}

template <typename T>
void Node<T>::setParent(Node *n){
    parent = n;
}

template <typename T>
T Node<T>::getData(){
    return data;
}

template <typename T>
Node<T>* Node<T>::getNext(){
    return next;
}

template <typename T>
Node<T>* Node<T>::getParent(){
    return parent;
}