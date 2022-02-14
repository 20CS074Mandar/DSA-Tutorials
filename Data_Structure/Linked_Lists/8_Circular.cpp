#include <iostream>
using namespace std;

class Node
{
public:
        int data;
        Node *next;
};

Node *add(Node *last, int data)
{
        if (last != NULL)
                return last;

        Node *new_node = new Node();
        new_node->data = data;
        last = new_node;
        last->next = last;

        return last;
}

Node *addBeg(Node *last, int data)
{
        if (last == NULL)
        {
                return add(last, data);
        }

        Node *new_node = new Node();
        new_node->data = data;
        new_node->next = last->next;
        last->next = new_node;
        return last;
}

Node *addEnd(Node *last, int data)
{
        if (last == NULL)
                add(last, data);
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
        return last;
}

Node *addAfter(Node *last, int data, int item)
{
        if (last == NULL)
                return NULL;
        Node *p = last->next;
        Node *new_node;
        do
        {
                if (p->data == item)
                {
                        new_node = new Node();
                        new_node->data = data;
                        new_node->next = p->next;
                        p->next = new_node;
                        if (p == last)
                        {
                                last = new_node;
                        }
                        return last;
                }
                p = p->next;

        } while (p != last);
        cout << item << "Not found in the list." << endl;
        return last;
}

void traversal(Node *last)
{
        Node *ptr = last->next;
        if (last == NULL)
        {
                cout << "Empty list" << endl;
                return;
        }
        do
        {
                cout << ptr->data<<" ";
                ptr = ptr->next;
        } while (ptr != last->next);
        cout<<endl;
}

int main()
{
        Node *last=NULL;
        last=add(last,4);
        last=addBeg(last,2);
        last=addEnd(last,8);
        traversal(last);
        last=addAfter(last,6,4);
        traversal(last);        
        return 0;
}