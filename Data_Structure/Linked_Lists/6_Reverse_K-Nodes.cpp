#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void traversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
Node *reverse(Node *head,int k)
{
    Node *prev=NULL;
    Node *curr=head;
    Node *nextptr;
    int count=0;
    Node *temp;
    while(curr!=NULL and count<k)
    {
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        count++;
    }
    if(temp!=NULL){
    head->next=reverse(temp,k);
    }
    return prev;
}
int main()
{
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 15;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 17;
    fourth->next = NULL;
    cout << endl;
    cout<<"Initial List"<<endl;
    traversal(head);
    cout<<"Enter k"<<endl;
    int k;
    cin>>k;
    head=reverse(head,k);
    traversal(head);
    return 0;
}