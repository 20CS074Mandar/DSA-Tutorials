#include <iostream>
using namespace std;
#define rep(j, size) for (int j = 0; j < size; j++)
int main()
{
        int n;
        cin>>n;
        int arr[n];
        rep(i,n)cin>>arr[i];
        cout<<endl;
        for (int  i = 0; i < n; i++)
        {
                for (int j =i; j < n; j++)                      
                {
                        for (int k = i; k <=j; k++)
                        {
                                cout<<arr[k]<<" ";
                        }
                        cout<<endl;
                }
                
        }
        
        return 0;
}