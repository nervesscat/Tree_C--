#include <iostream>
#include "linkedlist.h"
#include "node.cpp"

template <typename T>
LinkedList<T>::LinkedList(){
    first = NULL;
}

template <typename T>
void LinkedList<T>::add(T d){
    Node<T> *n = new Node<T>(d);
    if(first == NULL){
        first = n;
    }else{
        Node<T> *curr = first;
        while(curr->getNext() != NULL){
            curr = curr->getNext();
        }
        curr->setNext(n);
    }
}

template <typename T>
void LinkedList<T>::remove(T d){
    if(first == NULL){
        return;
    }else if(first->getData() == d){
        Node<T> *temp = first;
        first = first->getNext();
        delete temp;
    }else{
        Node<T> *curr = first;
        while(curr->getNext() != NULL){
            if(curr->getNext()->getData() == d){
                Node<T> *temp = curr->getNext();
                curr->setNext(curr->getNext()->getNext());
                delete temp;
                return;
            }
            curr = curr->getNext();
        }
    }
}

template <typename T>
void LinkedList<T>::print(){
    Node<T> *curr = first;
    while(curr != NULL){
        std::cout << curr->getData() << std::endl;
        curr = curr->getNext();
    }
}