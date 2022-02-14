#include <iostream>
using namespace std;

int a[100];
int main()
{
        
        return 0;
}
int general_method(int v,int n)
{
        int low=0;
        int high=0;
        //high - low is used to avoid the possiblity of getting stuck in an infine loop
        while (high-low>1)
        {
                int mid=(high+low)/2;\
                if (a[mid]==v)
                {
                        return mid;
                }
                if (a[mid]>v)
                {
                        high=mid-1;
                }
                else
                        low=mid+1;
        }
        if (a[low]==v)
        {
                return low;
        }
        if (a[high]==v)
        {
                return high;
        }
        
        return -1; 
}

        /*Binary search we don't know
        ->Binary search can work on all increasing and decreacsing function
        ->Use Yes-No method to simplify */