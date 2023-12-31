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
    if(pos == 1) {
        cout << "Del 1st Node" << endl;
        return true;
    }
    Node* pre = NULL;
    int current_pos  = 1;
    while(head != NULL) {
        if(current_pos == pos) {
            if(head->addresss == NULL)
                pre->addresss = NULL;
            else 
                pre->addresss = head->addresss;
            break;
        }
        pre = head;
        head = head->addresss;
        current_pos++;

    }
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
    int pos = 4;
    traversal(head);
    cout << endl;
    del_at(head, pos);
    traversal(head);
}