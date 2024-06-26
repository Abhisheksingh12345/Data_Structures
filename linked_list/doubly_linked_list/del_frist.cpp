#include "node.h"
using namespace std;
Node* del_frist(Node* head) {
    if(head == NULL)
        return NULL;
    head = head->next;
    return head;
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
    Node* _head = del_frist(head);
    cout << endl;
    forward_traversal(_head);
    // backward_traversal(temp4);
    // Node* _head = add_last(head, 0);
    cout << endl;
    // forward_traversal(_head);
    return 0;
}