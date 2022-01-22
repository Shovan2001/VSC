//Move all the negative elements to one side of the array 
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
    while(i<=e)
    {
        if(a[i]<0)
        {
            temp=a[s];
            a[s]=a[i];
            a[i]=temp;
            i++;
            s++;
        }
        else if(a[i]>0)
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