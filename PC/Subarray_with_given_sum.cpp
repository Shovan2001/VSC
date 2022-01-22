//Subarray with given sum

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,min_idx;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int s,e,k,curr_sum;
    cin>>k;
    s=0,curr_sum=0,e=0;
    while(true)
    {
        curr_sum=curr_sum+a[e];
        e++;
        if(curr_sum>k)
        break;
    }    
    while(true)
    {
        if(curr_sum>k)
        {
            curr_sum=curr_sum-a[s];
            s++;
        }
        if(curr_sum==k)
        break;
    }   
    cout<<s+1<<e; 
}