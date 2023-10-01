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
int main() {
    Node* head = new Node(10);
    Node* temp_1 = new Node(20);
    Node* temp_2 = new Node(30);
    

}