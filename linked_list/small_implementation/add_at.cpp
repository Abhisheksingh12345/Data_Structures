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
void add_at(Node* head, int value, int pos) {
    int current_pos = 1;
    Node* node = new Node(value);
    while(head != NULL) {
        if(current_pos +1 == pos) {
            if (head->addresss == NULL)
                head->addresss = node;
            node->addresss = head->addresss;
            head->addresss = node;   
            break;     
        }
        current_pos++;
        head = head->addresss;
    }
}
int main() {
    Node* head = new Node(10);
    Node* temp_1 = new Node(20);
    Node* temp_2 = new Node(30);
    head->addresss = temp_1;
    temp_1->addresss = temp_2;
    int x = 5;
    int pos = 4;
    add_at(head, x, pos);
    traversal(head);
}