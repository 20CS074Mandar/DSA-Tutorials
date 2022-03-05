#include <iostream>
using namespace std;

class Node
{
public:
        char data;
        Node *lptr;
        Node *rptr;
};

Node *create()
{
        Node *p;
        cout << "Enter \'n\' for no node : ";
        char x;
        cin >> x;
        if (x == 'n')
                return NULL;
        p = new Node();
        p->data = x;
        cout << "Enter left node child of \'" << x << "\' ";
        p->lptr = create();
        cout << "Enter the right node child of \'" << x << "\' ";
        p->rptr = create();
        return p;
}

void preorder(Node *root)
{
        if (root == NULL)
                return;
        cout << root->data << " ";
        preorder(root->lptr);
        preorder(root->rptr);
}
void inorder(Node *root)
{
        if (root == NULL)
                return;
        inorder(root->lptr);
        cout << root->data << " ";
        inorder(root->rptr);
}
void postorder(Node * root)
{
        if(root==NULL)
                return;
        postorder(root->lptr);
        postorder(root->rptr);
        cout<<root->data<<" ";
}
int main()
{
        Node *root;
        root = create();
        cout << "\nPreorder Traversal : ";
        preorder(root);
        cout << "\nInorder Traversal : ";
        inorder(root);
        cout<<"\nPostorder Traversal : ";
        postorder(root);
        return 0;
}