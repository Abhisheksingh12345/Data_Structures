#include <iostream>
#include "node.h"
bool add_first(Node* head, int x) {
    
}
int main() {
    Node* head = new Node(10);
    Node* temp_1 = new Node(20);
    Node* temp_2 = new Node(30);
    head->addresss = temp_1;
    temp_1->addresss = temp_2;
    int x = 5;
    add_first(head, x);



}

