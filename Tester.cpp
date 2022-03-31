#include<iostream>
#include<vector>
using namespace std;

int main()
{
        int target;
        cin>>target;
        vector<vector<int>>arr{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
        for(int i=0;i<arr.size();i++)
        {
                int l=0;
                int h=arr[i].size()-1;
                int flag=0;
                while(l<=h)
                {
                        int mid=l+(l-h)/2;
                        if(arr[i][mid]==target)
                        {
                                flag=1;
                                cout<<"Found"<<endl;
                                break;
                        }
                        if(arr[i][mid]<l)
                                l=mid+1;
                        else
                                h=mid-1;
                }
                if(flag==0)
                        cout<<"Not found"<<endl;
                
        }

        return 0;
}