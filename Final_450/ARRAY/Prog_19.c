//find common elements In 3 sorted arrays
#include<stdio.h>
int main()
{
    int n1,n2,n3,i,j,k;
    printf("Enter the value of n1\n");
    scanf("%d",&n1);
    printf("Enter the value of n2\n");
    scanf("%d",&n2);
    printf("Enter the value of n3\n");
    scanf("%d",&n3);
    
    int a[n1],b[n2],c[n3];
    
    printf("Enter the elements of array 1\n");
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the elements of array 2\n");
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    
    printf("Enter the elements of array 3\n");
    for(i=0;i<n3;i++)
    scanf("%d",&c[i]);

    i = 0, j = 0, k = 0;
 
    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {   
            printf("common elements are:\n");
            printf("%d ",a[i]);
            i++;
            j++; 
            k++; 
        }
 
         // x < y
         else if (a[i] < b[j])
             i++;
 
         // y < z
         else if (b[j] < c[k])
             j++;
 
         // We reach here when x > y and z < y, i.e., z is smallest
         else
             k++;
    }
        
}


