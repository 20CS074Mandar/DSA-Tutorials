#include <iostream>
#include <climits>
using namespace std;
class Queue
{
public:
    int size;
    int r;
    int f;
    int *arr;
};
int isFull(Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(Queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
int front(Queue *q)
{
    if (isEmpty(q))
    {
        return INT_MIN;
    }
    return q->arr[q->f];
}
int rear(Queue *q)
{
    if (isEmpty(q))
    {
        return INT_MIN;
    }
    return q->arr[q->f];
}
void enque(Queue *ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "This Queue is full " << endl;
    }
    else
    {
        ptr->r++;
        ptr->arr[ptr->r] = val;
    }
}
int deque(Queue *ptr)
{
    int a = -1;
    if (isEmpty(ptr))
    {
        cout << "This Queue is Empty " << endl;
    }
    else
    {
        ptr->f++;
        a = ptr->arr[ptr->f];
    }
    return a;
}
int main()
{
    Queue q;
    q.size = 100;
    q.r = -1;
    q.f = -1;
    q.arr = new int;
    if (isEmpty(&q))
    {
        cout << "\nQueue is empty." << endl;
    }
    //Enque elements
    cout << "Enqueing elements" << endl;
    enque(&q, 1);
    enque(&q, 2);
    enque(&q, 3);
    enque(&q, 4);
    enque(&q, 5);
    enque(&q, 6);
    enque(&q, 7);
    enque(&q, 8);
    enque(&q, 9);
    enque(&q, 10);
    cout << "\nIf 0 then queue is not full and if 1 then queue is full :- " << isFull(&q) << endl;

    cout << "\nDequed element " << deque(&q) << endl;
    cout << "Dequed element " << deque(&q) << endl;
    cout << "Dequed element " << deque(&q) << endl;
    cout << "Dequed element " << deque(&q) << endl;
    cout << "Dequed element " << deque(&q) << endl
         << endl;

    return 0;
}