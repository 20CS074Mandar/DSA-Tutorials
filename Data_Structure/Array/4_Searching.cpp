#include<iostream>
using namespace std;
#define rep(j,size) for(int j=0 ; j<size;j++)

//-------------------------------------------------LINEAR-SEARCH--------------------------------------------------//

int linearsrch(int arr[],int size,int element)
{
    for (int i = 0; i < size; i++)
    {
        if(element==arr[i]){
            return i;
        }
    }
    return -1;
    
}

//-------------------------------------------------BINARY-SEARCH--------------------------------------------------//
int binarysrch(int arr[],int size,int element)
{
    int low,mid,high;
    //Searching starts
    low=0;
    high=size-1;
    while (low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]==element){
            return mid;
        }

        if(arr[mid]<element){
            low=mid+1;
        }
        else
            high=mid=1;
    }
    //Searching ends
    return -1;  
    
    
}
int main()
{
    cout<<"\n-----Linear Search-----"<<endl;
    cout<<"Enter the size of an array :-"<<endl;
    int size;
    cin>>size;
    int a[size];//If the array is filled and we want its size we can get using sizeof(arr)/sizeof(int)
    cout<<"Enter the content of the given array :-"<<endl;
    rep(i,size)cin>>a[i];
    int element;
    cout<<"Enter element to be searched :- ";
    cin>>element;
    int searchindex=linearsrch(a,size,element);
    if (searchindex==-1)
    {
        cout<<"The element "<<element<<"that you are looking for doesn't exist in the array."<<endl;
    }
    else{
        cout<<"The element "<<element<<" was found at "<<searchindex<<endl;
    }
    
    cout<<"\n-----Binary Search-----"<<endl;
    cout<<"Enter the size of an array :-"<<endl;
    int size2;
    cin>>size2;
    int ba[size2];
    cout<<"Enter the content of the given array :-"<<endl;
    rep(i,size2)cin>>ba[i];
    int element2;
    cout<<"Enter the element to be searched :- ";
    cin>>element2;
    int searchIndex=binarysrch(ba,size2,element2);
     if (searchIndex==-1)
    {
        cout<<"The element "<<element2<<"that you are looking for doesn't exist in the array."<<endl;
    }
    else{
        cout<<"The element "<<element2<<" was found at "<<searchIndex<<endl;
    }
    return 0;

}