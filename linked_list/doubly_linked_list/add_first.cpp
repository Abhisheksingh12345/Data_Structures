#include <iostream>
#include "node.h"
using namespace std;
int main() {
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    Node* temp3 = new Node(40);
    Node* temp4 = new Node(50);
    head->next = temp1;
    temp1->pre = head;
    temp1->next = temp2;
    temp2->pre = temp1;
    temp2->next = temp3;
    temp3->pre = temp2;
    temp3->next = temp4;
    temp4->pre = temp3;
     
    return 0;
}