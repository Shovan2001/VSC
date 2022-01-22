#include<iostream>
using namespace std;

int main()
{
    int n,i,k,j;
    cin>>n;

    for(i=0;i<=n/2;i++)
    {
        for(k=n-1-i;k>=0;k--)
            cout<<" ";
        for(j=0;j<i;j++)
            cout<<"*";
        for(j=1;j<i;j++)
            cout<<"*";    
        cout<<endl;
    }
    for(i=n/2-1;i>0;i--)
    {
        for(k=n-1-i;k>=0;k--)
            cout<<" ";
        for(j=0;j<i;j++)
            cout<<"*";
        for(j=1;j<i;j++)
            cout<<"*";    
        cout<<endl;
    }
    
    return 0;

}