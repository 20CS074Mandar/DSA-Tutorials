#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void print(stack<int>);

void store(vector<int>&h1)
{    
    stack<int>s1;
    for (int i = 0; i <h1.size(); i++)
    {
        s1.push(h1[i]);
    }
    print(s1);
    cout<<s1.top()<<endl;
}
void print(stack<int>s)
{
    if(s.empty())
        return;
    int x=s.top();
    s.pop();
    print(s);
    cout<<x<<" ";
    s.push(x);
}
int main()
{
    vector<int>h;
    int n;
    cin>>n;
    int a;
    while (n--)
    {
        cin>>a;
        h.push_back(a);
    }
    store(h);

    return 0;
}