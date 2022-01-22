//longest arithmetic subarray means an array which has diff between 2 simultanious elements same
#include<iostream>
using namespace std;

int main()
{
    int n,i,j,curr,ans,pd;                             //curr=current length/ ans=final answer/ pd= difference between 2 consequtive elements

    cin>>n;
    int a[n];
    for (int i = 0; i<n; ++i) 
    {
        cin>>a[i];
    }

    ans=2;
    curr=2;
    pd=a[1]-a[0];

    for(i=2;i<n;i++)
    {
        if(pd==a[i]-a[i-1])
        {
            curr++;
        }
        else
        {
            pd=a[i]-a[i-1];
            curr=2;
        }
        ans=max(ans,curr);
    }
    cout<<ans;
}
