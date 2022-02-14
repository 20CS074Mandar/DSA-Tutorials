// Operation using arrays

#include <iostream>
using namespace std;
class stack
{
public:
    int size;
    int top;
    int *arr;
};
int isEmpty(stack *ptr)
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

int isFull(stack *ptr)
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
void push(stack *ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "\nStack overflow" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "\nStack underflow" << endl;
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
void print(stack *ptr)
{
    for (int i = 0; i <= ptr->top; i++)
    {
        cout << ptr->arr[i] << " ";
    }
    cout << endl;
}
int peek(stack *ptr, int i)
{
    int arrayind = ptr->top - i + 1;
    if (arrayind < 0)
    {
        cout << "INvalid positin for the stack" << endl;
        return -1;
    }
    else
    {
        return ptr->arr[arrayind];
    }
}
int stacktop(stack *ptr)
{
    return ptr->arr[ptr->top];
}
int stackbotm(stack *ptr)
{
    return ptr->arr[0];
}

int main()
{
    stack *sp = new stack();
    sp->size = 10;
    sp->top = -1;
    sp->arr = new int;
    cout << "\nStack has been created succesfully" << endl;

    cout << "\nBefore pushing isfull :-" << isFull(sp) << endl;
    cout << "Before pushing isempty :-" << isEmpty(sp) << endl;

    // Push Operations
    push(sp, 51);
    push(sp, 52);
    push(sp, 53);
    push(sp, 54);
    push(sp, 55);
    push(sp, 56);
    push(sp, 57);
    push(sp, 58);
    push(sp, 59);
    push(sp, 60); // -->pushed 10 values
    // push(sp,61); //stack overflow since the size of the stack is 10
    cout << endl;
    print(sp);
    cout << "\nAfter pushing isfull :-" << isFull(sp) << endl;
    cout << "After pushing isempty :-" << isEmpty(sp) << endl;
    cout << "\nTop Element of stack :- " << stacktop(sp) << endl;
    cout << "Bottom Element of stack :- " << stackbotm(sp) << endl;
    // Pop Pop Operations
    cout << "\nPooped " << pop(sp) << " from the stack " << endl;
    cout << "Pooped " << pop(sp) << " from the stack " << endl;
    cout << "Pooped " << pop(sp) << " from the stack " << endl;
    cout << "Pooped " << pop(sp) << " from the stack " << endl;
    cout << "\nUpdated array after pop operations " << endl;
    print(sp);

    // Peek Operation
    for (int i = 1; i <= sp->top + 1; i++)
    {
        cout << "The value at index " << i << " is " << peek(sp, i) << endl;
    }

    return 0;
}