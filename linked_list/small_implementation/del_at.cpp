#include <iostream>
#include "node.h"
using namespace std;
int main() {
    Node* head = new Node(10);
    Node* temp_1 = new Node(20);
    Node* temp_2 = new Node(30);
    head->addresss = temp_1;
    temp_1->addresss = temp_2;
    int x = 5;
    int pos = 3;
    add_at(head, x, pos);
    traversal(head);
}