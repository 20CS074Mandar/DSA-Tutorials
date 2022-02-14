#include <iostream>
using namespace std;

class Circular_Queue
{
public:
        int r;
        int f;
        int size;
        int *arr;
};
int isFull(Circular_Queue *q)
{
        if ((q->r + 1) % q->size == q->f) // if(r=size-1 && f==0)
        {
                return 1;
        }
        return 0;
}
int isEmpty(Circular_Queue *q)
{
        if (q->f == q->r)
        {
                return 1;
        }
        return 0;
}
void enqueue(Circular_Queue *q, int val)
{
        if (isFull(q))
        {
                cout << "OVERFLOW" << endl;
        }
        else
        {

                q->r = (q->r + 1) % q->size;
                q->arr[q->r] = val;
                cout << "Element enqued is :" << q->arr[q->r] << endl;
        }
}
int dequeue(Circular_Queue *q)
{
        int val = -1;
        if (isEmpty(q))
        {
                cout << "UNDERFLOW" << endl;
        }
        else
        {
                q->f = (q->f + 1) % q->size;
                val = q->arr[q->f];
                return val;
        }
}
int main()
{
        Circular_Queue q;
        q.size = 4;
        q.f = q.r = 0;
        q.arr = new int;

        enqueue(&q, 10);
        enqueue(&q, 20);
        enqueue(&q, 30);
        // the below operations will give overflow message
        // enqueue(&q,40);
        // enqueue(&q,50);
        // enqueue(&q,60);
        cout << "\nThe element dequed is :" << dequeue(&q) << endl;
        cout << "The element rdequed is :" << dequeue(&q) << endl;
        // cout<<"The element dequed is :"<<dequeue(&q)<<endl; this line will give underflow message along with the address value
        enqueue(&q, 40);
        enqueue(&q,50);
        enqueue(&q,60);
        return 0;
}