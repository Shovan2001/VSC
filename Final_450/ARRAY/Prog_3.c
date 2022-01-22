//Find the "Kth" max and min element of an array 
#include<stdio.h>
int main()
{
    int n,i,j,k,temp;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the value of k\n");
    scanf("%d",&k);
    if(k>n)
    printf("Wrong value of k\n");
    else
    {
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
        printf("Kth min element is:%d\n",a[k-1]);
        printf("Kth max element is:%d\n",a[n-k]);
    }
}
        