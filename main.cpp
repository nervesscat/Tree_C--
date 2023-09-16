#include <iostream>
#include "linkedlist.cpp"

using namespace std;

int main(){
    LinkedList<double> *list = new LinkedList<double>();
    list->add(1.1);
    list->add(2.2);
    list->add(3.3);
    list->remove(2.2);
    list->print();
    return 0;
}