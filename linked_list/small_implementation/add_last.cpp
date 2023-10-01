#include <iostream>
#include "node.h"
using namespace std;
bool add_last(Node* head, int x){
    Node* temp = head;
    while(temp->addresss != NULL)
        temp = temp->addresss;
    temp->addresss = new Node(x);
    
}