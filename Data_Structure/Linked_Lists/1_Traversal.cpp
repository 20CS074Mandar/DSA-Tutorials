#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};
void traversal(Node *ptr)
{
    while (ptr!= NULL){
        cout << ptr->data << " ";
        ptr=ptr->next; 
    }
    cout<<endl;
}
bool search(Node *head,int key)
{
    Node *temp=head;
    while (temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
    
}
int main()
{
    //Allocate memory for Nodes in the linked list in HEAP
    Node *head=NULL;
    Node *second = NULL;
    Node *third =NULL;

    head  = new Node();
    second= new Node();
    third = new Node();

    //Link first and second Node
    head->data = 7;
    head->next = second;
    //Link second and third Node
    second->data = 11;
    second->next = third;
    //Terminating the list at third nod
    third->data = 15;
    third->next = NULL;

    traversal(head);
    cout<<"Enter an element to search the Lined List"<<endl;
    int val;
    cin>>val;
    bool result=search(head,val);
    if(result==true)
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
    return 0;
}