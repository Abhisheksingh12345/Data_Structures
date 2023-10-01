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
    

}
