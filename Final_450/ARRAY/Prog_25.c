//Given an array of size n and a number k, fin all elements that appear more than " n/k " times.
#include<stdio.h>
int main()
{
    int n,i,k;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    printf("Enter the value of k\n");
    scanf("%d",&k);
    
    int a[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int res[100000];
    for(i=0;i<100000;i++)
    {
        res[i]=0;
    }
    
    for(i=0;i<n;i++)
    {
        res[a[i]]++;
    }
    for(i=0;i<100000;i++)
    {
        if(res[i]>(n/k))
        printf("%d ",i);
    }
}