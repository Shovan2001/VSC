//Find the maximum and minimum element in an array
#include<stdio.h>
int main()
{
    int n,i,max,min;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    //finding max & min
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        
        if(a[i]<min)
        min=a[i];
    }
    printf("Maximum Element is:%d\n",max);
    printf("Minimum Element is:%d\n",min);
}
