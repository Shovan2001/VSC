//Find the Union and Intersection of the two sorted arrays.
#include<stdio.h>
int main()
{
    int m,n,i,j,temp;
    printf("Enter the value of m\n");
    scanf("%d",&m);
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a[m],b[n];
    printf("Enter the elements of 1st array\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);

    printf("Enter the elements of 2nd array\n");
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    
    //Union
    printf("Union of the 2 arrays is:\n");
    i=0,j=0;
    while(i<m && j<n)
    {
        
        if(a[i]<b[j])
        {
            printf("%d\t",a[i]);
            i++;
        }
        else if(a[i]>b[j])
        {
        
            printf("%d\t",b[j]);
            j++;
        }
        else
        {
            printf("%d\t",a[i]);
            i++;
            j++;
        }
    }
    while(i<m)
    printf("%d\t",a[i++]);
    while(j<n)
    printf("%d\t",b[j++]);
    printf("\n");

    //Intersection
    printf("Intersetion of the 2 arrays is:\n");
    i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        i++;
        else if(a[i]>b[j])
        j++;
        else
        {
            printf("%d\t",a[i]);
            i++;
            j++;
        }        
       
    }
}
