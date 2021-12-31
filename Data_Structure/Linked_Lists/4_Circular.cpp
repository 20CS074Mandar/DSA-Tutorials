#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
};

void Traversal( Node *head){
    
    Node *ptr = head;
    do{
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }while(ptr!=head);
}

Node *insrtBeg(Node *head,int data)
{
    Node *ptr=new Node();
    Node *p=head->next;
    ptr->data=data;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;    
}
int main(){
    
     Node *head;
     Node *second;
     Node *third;
     Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = new Node();
    second = new Node();
    third =new Node();
    fourth =new Node();

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = head;

    cout<<endl;
    Traversal(head);
    cout<<"\nEnter the value to insert in beginig"<<endl;
    int data;
    cin>>data;
    head=insrtBeg(head,data);
    Traversal(head);
    return 0;
}