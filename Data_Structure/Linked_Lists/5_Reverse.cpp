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
Node *reverseIter(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
Node *reverseRec(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *ptr = reverseRec(head->next);
    head->next->next = head;
    head->next = NULL;
    return ptr;
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
    cout << "Linked List initially" << endl;
    traversal(head);
    cout << "Reversed Linked List using iterative method " << endl;
    head = reverseIter(head);
    traversal(head);

    cout << "Reversed Linked List using iterative method " << endl;
    head = reverseRec(head);
    traversal(head);

    return 0;
}