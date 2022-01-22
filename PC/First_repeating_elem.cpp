//prog to Find the first repeating element
#include <iostream>
using namespace std;
int main()
{
    int n,i,min_idx;
    cin>>n;
    int a[n],c[1000];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<1000;i++)
    c[i]=-1;
    min_idx=10000;
    for(i=0;i<n;i++)
    {
        if(c[a[i]]!=-1)
        {
            min_idx=min(min_idx,c[a[i]]);
        }
        else
        c[a[i]]=i;
    }
    if(min_idx == 10000)
    cout<<-1;
    else
    cout<<min_idx+1;
}