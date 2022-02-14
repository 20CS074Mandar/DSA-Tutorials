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
Node *insrtBeg(Node *head, int data)
{
    Node *ptr = new Node();
    ptr->next = head;
    ptr->data = data;
    head=ptr;
    return head;
}
Node *insrtIndx(Node *head, int index, int data)
{
    Node *ptr = NULL;
    ptr = new Node();
    Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
Node *insrtEnd(Node *head, int data)
{
    Node *ptr = new Node();
    //p is responsible for traversing the list 
    Node *p = new Node();
    p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    //After completion of the above loop p will be pointing on the last node 
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
Node *InsrtAfter(Node *preius, Node *head, int data)
{
    Node *ptr = new Node();
    ptr->data = data;
    Node *p = new Node();
    p = head;
    Node *q = new Node();
    q = preius;
    while (p->next != q)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
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
    traversal(head);

    cout << "Enter the number to insert at beg" << endl;
    int data1;
    cin >> data1;
    head = insrtBeg(head, data1);
    traversal(head);

    cout << "Enter the index and element to insert :- ";
    int element, index;
    cin >> index >> element;
    head = insrtIndx(head, index, element);
    traversal(head);

    cout << "Enter number to insert at end" << endl;
    cin >> data1;
    head = insrtEnd(head, data1);
    traversal(head);

    cout << "Enter element to insert after third node" << endl;
    cin >> element;
    head = InsrtAfter(third, head, element);
    traversal(head);
    return 0;
}