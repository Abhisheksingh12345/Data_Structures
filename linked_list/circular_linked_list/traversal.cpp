#include "node.h"
using namespace std;
int main() {
    Node* head = new Node(10);
    Node* temp = new Node(20);
    Node* temp1 = new Node(30);
    Node* temp2 = new Node(40);
    head->next = temp;
    temp->next = temp1;
    temp1->next = temp2;
    temp2->next = head;
    forward_traversal(head);
    Node* head_ = add_frist(head, 0);
    cout << endl;
    forward_traversal(head_);

    return 0;
}