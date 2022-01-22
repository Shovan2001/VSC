//find Largest sum contiguous Subarray [V. IMP]
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int before,now;
    before=now=0;
    for(i=0;i<n;i++)
    {
        now=now+a[i];
        if(now>before)
            before=now;
        
        if(now<0)
            now=0;
    }
    printf("Largest sum contiguous Subarray is:%d",before);
}