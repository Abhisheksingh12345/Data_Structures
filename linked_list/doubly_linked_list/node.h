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
