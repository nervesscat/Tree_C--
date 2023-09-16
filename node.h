#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
private:
    T data;
    Node<T> *next;
    Node<T> *parent;
public:
    Node();
    Node(T d);
    void setData(T d);
    void setNext(Node<T> *n);
    void setParent(Node<T> *n);
    T getData();
    Node<T>* getNext();
    Node<T>* getParent();
};

#endif // NODE_H