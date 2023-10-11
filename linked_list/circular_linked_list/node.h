#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* pre;
    Node* next;
    Node(int data){
        this->data = data;
        pre = NULL;
        next = NULL;
    }
    /* data */
};
void backward_traversal(Node* tail) {
    if(tail == NULL)
        return ;
    while(tail != NULL) {
        cout << tail->data << " ";
        tail = tail->pre;
    }
}
bool forward_traversal(Node* head) {
    if(head == NULL)
    {
        return false;
    }
    Node* start = head;
    cout<< head->data << " ";
    head = head->next;
    while(head != start) {
        cout<< head->data << " ";
        head = head->next;
    }
    return true;
}