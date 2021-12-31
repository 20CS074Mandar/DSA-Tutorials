//Operations using Linked lists
#include<iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
};
Node *top=NULL;
void traversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int isfull(Node*top);
Node *push(Node *top,int x)
{
    if(isfull(top)){
        cout<<"Stack overflow "<<endl;
    }
    else{
        Node *n=new Node;
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }
}
int isempty(Node*);
int pop(Node **tp)
{
    if(isempty(*tp))
    {
        cout<<"Stack Underflow"<<endl;
    }
    else{
        Node *n=*tp;
        *tp=(*tp)->next;
        int x=n->data;
        delete n;
        return x;
    }
}
int isempty(Node *top)
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
int isfull(Node *top)
{
    Node *p=new Node;
    if(p==NULL)
    {
        return 1;
    }
    return 0;
}
int peek(int pos,Node *top2){
    Node* ptr = top2;
    for (int i = 0; (i < pos-1 && ptr!=NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
    
}
int main()
{
    Node *top=NULL;
    top=push(top,1);
    top=push(top,2);
    top=push(top,3);
    top=push(top,4);
    top=push(top,5);
    top=push(top,6);
    top=push(top,7);
    top=push(top,8);
    cout<<"\nStack after pushing elements into it "<<endl;
    traversal(top);
    
    cout<<"\nPoped "<<pop(&top)<<" from the stack "<<endl;
    cout<<"Poped "<<pop(&top)<<" from the stack "<<endl;
    cout<<"Poped "<<pop(&top)<<" from the stack "<<endl;
    cout<<"Poped "<<pop(&top)<<" from the stack "<<endl;
    cout<<"\nStack after poping out elements "<<endl;
    traversal(top);

    //Declaring another arry to practice peek operations
    Node *top2=NULL;
    top2=push(top2,11);
    top2=push(top2,12);
    top2=push(top2,13);
    top2=push(top2,14);
    traversal(top2);
    cout<<"Value at position 2 is :- "<<peek(2,top2);
    cout<<"Printing all elements of stac using peek operation "<<endl;
    for (int i = 1; i <= 4; i++)
    {
        cout<<"Value at position "<<i<<" is : "<<peek(i,top2)<<endl;
    }

    return 0;
}
