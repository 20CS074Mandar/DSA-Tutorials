#include<iostream>
using namespace std;
class MyArray
{
    public:
        int total_size;
        int used_size;
        int *ptr; //This is used to get memory from heap
};

void createArray(MyArray *a,int tsize,int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=new int[tsize];// we get memory from heap using new 
//the reason to ask memory from heap because memory of stack gets destructed after execution of programme
}

void show(MyArray *a){
    for (int i = 0; i <a->used_size; i++)
    {
            cout<<a->ptr[i]<<" ";
    }
}
void setval(MyArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        cout<<"Enter Element "<<i<<" :-";
        cin>>n;
        a->ptr[i]=n;
    }
    
}
int main()
{
    MyArray marks;
    createArray(&marks,100,5);//Here only by the use of address of marks we are able to make changes in class myarray
    setval(&marks);
    show(&marks);
    return 0;
}