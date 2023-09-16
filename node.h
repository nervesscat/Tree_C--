#ifndef NODE_H
#define NODE_H

template <typename T>
class LinkedList;

template <typename T>
class Node {
private:
    T data;
    Node<T> *next;
    Node<T> *parent;
    LinkedList<T> *child;
public:
    Node();
    Node(T d);
    ~Node();
    void setData(T d);
    void setNext(Node<T> *n);
    void setParent(Node<T> *n);
    T getData();
    Node<T>* getNext();
    Node<T>* getParent();
    LinkedList<T>* getChild();
};

#endif // NODE_H