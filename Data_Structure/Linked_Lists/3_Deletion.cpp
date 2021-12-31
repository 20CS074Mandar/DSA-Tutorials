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

Node *delFirst(Node *head)
{
    Node *ptr = head;
    head = head->next;
    delete ptr;
    return head;
}
Node *delIndex(Node *head, int index)
{
    Node *p = head;
    Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    delete q;
    return head;
}
Node *delLast(Node *head)
{
    Node *p = head;
    Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    delete q;
    return head;
}

Node *delVal(Node *head, int value)
{
    Node *p = head;
    Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        delete q;
    }
    return head;
}
//Deleting a node without head
/*void *delNode(Node *node1)
{
    Node *p=node1;
    while (node->next!=NULL)
    {
        p=node1;
        node1->data=node->next->data;
        node=node->next;
    }
    p->next=NULL;
    delete node1;
}*/
int main()
{
    //Allocate memory for Nodes in the linked list in HEAP
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *fourth = NULL;
    Node *fifth = NULL;
    Node *sixth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth = new Node();
    sixth = new Node();

    //Link first and second Node
    head->data = 5;
    head->next = second;
    //Link second and third Node
    second->data = 7;
    second->next = third;
    //Terminating the list at third nod
    third->data = 9;
    third->next = fourth;
    fourth->data = 11;
    fourth->next = fifth;
    fifth->data = 13;
    fifth->next = sixth;
    sixth->data = 15;
    sixth->next = NULL;
    cout << "Elements of Linked List are " << endl;
    traversal(head);
    cout << "Deleteing the first element of Linked list" << endl;
    head = delFirst(head);
    traversal(head);
    cout << "Enter the index of the element that you want to delete :-";
    int index;
    cin >> index;
    head = delIndex(head, index);
    traversal(head);
    cout << "Deleting Last Element from Linked list " << endl;
    head = delLast(head);
    traversal(head);
    cout << "Enter the value to delete from Linked List :-";
    int element;
    cin >> element;
    head = delVal(head, element);
    traversal(head);
    return 0;
}