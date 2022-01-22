/*
record breaking day if:
it is the max element so far and
the next element is lesser than the current element
*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,curr_max,ans=0;
    cin>> n;
    int a[n+1];
    for(i=0;i<n;i++)
    cin>>a[i];

    curr_max=a[0];
    for(i=1;i<n;i++)
    {
        curr_max=max(curr_max,a[i]);
        if(a[i]==curr_max && a[i]>a[i+1])
        {
            ans++;
            cout<<a[i]<<endl;
        }
    }
    cout<<ans;

}