#include<iostream>
#include<stack>
using namespace std;
class Stack
{
public:
    int size;
    int top;
    int *arr;
};
int isEmpty(Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void print(stack<int>stk)
{
    while (!stk.empty())
    {
        cout<<stk.top()<<endl;
        stk.pop();
    }
    
}
int main()
{
    Stack *p;
    int b = 5;
    p->size = b;
    p->top = -1;
    p->arr = new int;

    if (isEmpty(p))
    {
        cout<<"The stack is empty"<<endl;
    }
    else
    {
        cout<<"The stack is not empty"<<endl;
    }

    p->arr[0] = 7;
    p->top++;

    // Check if stack is empty
    if (isEmpty(p))
    {
        cout<<"\nThe stack is empty"<<endl;
    }
    else
    {
        cout<<"The stack is not empty"<<endl;
    }
    
    //Using stack through stl;
    cout<<"Stack using stl"<<endl;
    stack<int>stk;
    stk.push(10);
    stk.push(11);
    stk.push(12);
    stk.push(13);
    print(stk);
    return 0;
}