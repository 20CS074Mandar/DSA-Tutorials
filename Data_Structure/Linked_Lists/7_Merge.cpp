//Merging Two sorted linked lists
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void traversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data<< " ";
        ptr = ptr->next;
    }
    cout << endl;
}
void insrtAtTail(Node *head,int val)
{
    Node*n=new Node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    Node *temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    
}
Node *merge(Node *head1, Node *head2)
{
    Node *head3 = new Node(-1);
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    Node *ptr3 = head3;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    while (ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
    }
    while (ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
    }

    return ptr3->next;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *head3 = NULL;
    int arr1[] = {1, 4, 5, 7};
    int arr2[] = {2, 3, 6};
    for (int i = 0; i < 4; i++)
    {
        insrtAtTail(head1, arr1[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        insrtAtTail(head2, arr2[i]);
    }
    traversal(head1);
    traversal(head2);
    // head3 = merge(head1, head2);
    // traversal(head3);
    return 0;
}