#include <iostream>
using namespace std;

class Node
{
     public:
        int data;
        Node *next;
        Node *prev;
};

Node * addBeg(Node *head,int data)
{
        Node*new_node=new Node();
        new_node->data=data;
        new_node->next=head;
        new_node->prev=NULL;
        if (head!=NULL)
        {
                head->prev=new_node;
        }
        head=new_node;
        return head; 
}

Node * addAfte(Node *prev_node,int data)
{
        if(prev_node==NULL)
        {
                return;
        }

        Node *new_node=new Node();
        new_node->data=data;
        new_node->next=prev_node->next;
        prev_node->next=new_node;
        new_node->prev=prev_node;
        if (new_node->next!=NULL)
        {
                new_node->next->prev=new_node;
        }
        
}
int main()
{
        
        return 0;
}