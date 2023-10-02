#include <iostream>
#include "node.h"
using namespace std;
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
bool del_at(Node* head, int pos) {
    return true;
}
int main() {
    Node* head = new Node(10);
    Node* temp_1 = new Node(20);
    Node* temp_2 = new Node(30);
    Node* temp_3 = new Node(40);
    head->addresss = temp_1;
    temp_1->addresss = temp_2;
    temp_2->addresss = temp_3;
    int pos = 3;
    del_at(head, pos);
    traversal(head);
}