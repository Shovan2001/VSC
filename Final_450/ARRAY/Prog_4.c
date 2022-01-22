//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include<stdio.h>
int main()
{
    int n,i,s,e,temp;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    s=0;
    e=n-1;
    i=0;
    while (i<=e)
    {
        if(a[i]<1)
        {
            temp=a[s];
            a[s]=a[i];
            a[i]=temp;
            i++;
            s++;
        }
        
        else if(a[i]>1)
        {
            temp=a[e];
            a[e]=a[i];
            a[i]=temp;
            e--;
        }
        else
        i++;
    }
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
}

        