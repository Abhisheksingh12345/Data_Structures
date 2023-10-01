#include <iostream>
#include "node.h"
using namespace std;
bool add_last(Node* head, int x){
    Node* temp = head;
    while(temp->addresss != NULL)
        temp = temp->addresss;
    temp->addresss = new Node(x);
    return true;
}
void traversal(Node* head) {
    if(head == NULL)
    {
        cout << "NULL";
        return ;
    }
    Node* temp = head;
    while(temp != NULL) {
        cout<< temp->no << " ";
        temp = temp->addresss;
    }

}
int main() {
    Node* head = new Node(10);
    Node* temp_1 = new Node(20);
    Node* temp_2 = new Node(30);
    head->addresss = temp_1;
    temp_1->addresss = temp_2;
    int x = 5;
    add_last(head, x);
    traversal(head);
}