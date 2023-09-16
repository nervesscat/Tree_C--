#include <iostream>
#include "node.cpp"

using namespace std;

int main(){
    Node<int> *n = new Node<int>(5);
    cout << n->getData() << endl;
    
    return 0;
}