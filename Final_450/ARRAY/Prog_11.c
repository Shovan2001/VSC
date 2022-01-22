//find duplicate in an array of N+1 Integers
#include<stdio.h>
int main()
{
    int n,i,j,temp,t;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    //sorting
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("duplicate number is\n");
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1] && a[i]!=a[i+1])
        printf("%d",a[i]);
    }
}        