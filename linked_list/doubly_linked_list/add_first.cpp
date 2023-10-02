#include <iostream>
#include "node.h"
using namespace std;
Node* add_first(Node* head, int num) {
    Node* node = new Node(num);
    node->next = head->next;
    node->pre = head;
    head->next = node;
    return node;
}
void backward_traversal(Node* tail) {
    if(tail == NULL)
        return ;
    while(tail != NULL) {
        cout << tail->data << " ";
        tail = tail->pre;
    }
}
void forward_traversal(Node* head) {
    if(head == NULL)
    {
        cout << "NULL";
        return ;
    }
    while(head != NULL) {
        cout<< head->data << " ";
        head = head->next;
    }

}
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
    forward_traversal(head);
    // backward_traversal(temp4);
    head = add_first(head, 0);
    cout << endl;
    forward_traversal(head);
    return 0;
}