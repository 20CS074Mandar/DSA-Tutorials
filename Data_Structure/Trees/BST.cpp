#include <iostream>
using namespace std;

class Node
{
public:
        int data;
        Node *left;
        Node *right;
};

// creating a newNode for BST and assigning a value to that node
Node *newNode(int data)
{
        Node *temp = new Node();
        temp->data = data;
        temp->left = temp->right = NULL;
        return temp;
}
Node *addBst(Node *node, int key)
{
        if (node == NULL)
                return newNode(key);
        if (key < node->data)
                node->left = addBst(node->left, key);
        else if (key > node->data)
                node->right = addBst(node->right, key);

        return node;
}

// find smallest node
Node *smallest(Node *node)
{
        Node *current = node;
        while (current->left != NULL)
        {
                current = current->left;
        }
        return current;
}

Node *largest(Node *node)
{
        Node *current = node;
        while (current->right != NULL)
        {
                current = current->right;
        }
        return current;
}

Node *requested(Node *node, int data)
{
        if (node == NULL || node->data == data)
                return node;

        if (data < node->data)
        {
                return requested(node->left, data);
        }
        return requested(node->right, data);
}
void inorder(Node *root)
{
        if (root == NULL)
                return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
}

Node *deletion(Node *node, int data)
{
        if (node == NULL)
                return node;
        if (node->data < data)
                node->right = deletion(node->left, data);
        else if (node->data > data)
                node->left = deletion(node->right, data);
        else
        {
                if (node->left == NULL)
                {
                        Node *temp = node->right;
                        free(node);
                        return temp;
                }
                else if (node->right == NULL)
                {
                        Node *temp = node->left;
                        free(node);
                        return temp;
                }
                Node *temp = smallest(node->right);
                node->data = temp->data;
                node->right = deletion(node->right, temp->data);
        }
        return node;
}

bool isBST(Node *root)
{
}
int main()
{
        Node *root = NULL;
        root = addBst(root, 50);
        addBst(root, 60);
        addBst(root, 70);
        addBst(root, 80);
        addBst(root, 90);
        addBst(root, 100);

        inorder(root);
        cout << endl;
        cout << smallest(root)->data << endl;
        cout << largest(root)->data << endl;

        if (requested(root, 70) != NULL)
        {
                cout << requested(root, 70)->data << " Found" << endl;
        }
        else
        {
                cout << "Not found " << endl;
        }

        inorder(root);
        cout << endl;

        deletion(root, 100);
        inorder(root);
        cout << endl;

        deletion(root, 60);
        inorder(root);
        cout << endl;

        deletion(root, 50);
        inorder(root);
        cout << endl;

        return 0;
}