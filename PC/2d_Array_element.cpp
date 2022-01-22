//given a 2d matrix in which all elements are are in ascending order(both rowwise and column wise) find a speific element
#include <iostream>
using namespace std;
int main()
{
    int m,n,i,j,k,flag=0;
    cin>>m>>n>>k;
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }

    }
    int r=0,c=n-1;
    while(r<=m && c>=0)
    {
        if(a[r][c]==k)
        {
            flag=1;
            break;
        }
        if(a[r][c]>k)
        c--;
        else
        r++;
    }

    if(flag==1)
    cout<<"Found";
    else
    cout<<"not Found";
}    
