#include <iostream>
using namespace std;

class Node
{
public:
        int data;
        Node *next;
        Node *prev;
};

Node *insAtBeg(Node *head, int data)
{
        Node *new_node = new Node();
        new_node->data = data;
        new_node->next = head;
        new_node->prev = NULL;
        if (head != NULL)
        {
                head->prev = new Node();
        }
        head = new_node;
        return head;
}

Node *insAtEnd(Node *head, int data)
{
        Node *new_node = new Node();
        Node *last = head;
        new_node->data = data;
        new_node->next = NULL;
        if (head == NULL)
        {
                new_node->prev = NULL;
                head = new_node;
                return head;
        }
        else
        {
                while (last->next != NULL)
                {
                        last = last->next;
                }
                last->next = new_node;
                new_node->prev = last;
        }
        return head;
}

Node * insAfter(Node * prevnode,int data)
{}
int main()
{

        return 0;
}