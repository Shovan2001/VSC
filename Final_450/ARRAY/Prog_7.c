//Write a program to cyclically rotate an array by one.
//for any no of rotation(general case)
#include<stdio.h>
int main()
{
    int n,k,i,j,temp;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the value of k\n");
    scanf("%d",&k);
    int a[n];
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Original array:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");

    printf("Array after rotation is:\n");

    k=k%n;
    for(i=0;i<n;i++)
    {
        if(i<k)
        printf("%d\t",a[n+i-k]);
        else
        printf("%d\t",a[i-k]);
    }
}