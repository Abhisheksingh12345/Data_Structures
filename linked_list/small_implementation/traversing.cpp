#include <iostream>
using namespace std;
struct Node
{
    int no;
    Node* addresss;
    Node(int no) {
        this->no = no;
        addresss = NULL;
    }
    /* data */
};
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
void recr_traversal(Node* head) {
    if(head == NULL)
        return;
    cout << head->no << " ";
    recr_traversal(head->addresss);
}
int main() {
    Node* head = new Node(10);
    Node* temp_1 = new Node(20);
    Node* temp_2 = new Node(30);
    head->addresss = temp_1;
    temp_1->addresss = temp_2;
    traversal(head);
    recr_traversal(head);

}