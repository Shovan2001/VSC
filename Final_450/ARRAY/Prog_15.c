//Next Permutation
/*
I) Traverse the given number from rightmost digit, keep traversing till you find a digit which is smaller than the previously traversed digit. For example, if the input number is “534976”, we stop at 4 because 4 is smaller than next digit 9. If we do not find such a digit, then output is “Not Possible”.

II) Now search the right side of above found digit ‘d’ for the smallest digit greater than ‘d’. For “534976″, the right side of 4 contains “976”. The smallest digit greater than 4 is 6.

III) Swap the above found two digits, we get 536974 in above example.

IV) Now sort all digits from position next to ‘d’ to the end of number. The number that we get after sorting is the output. For above example, we sort digits in bold 536974. We get “536479” which is the next greater number for input 534976.
*/
#include<stdio.h>
int main()
{
    int n,i,j,temp,x,y,x1,y1,min_idx;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=n-1;i>0;i--)
    {
        if(a[i-1]<a[i])   //checking if the numbers are not in descending order
        break;
    }

    if(i==0)        //occurs when numbers are like 4 3 2 1 i.e all in descending order
    {
        //sort in ascending order and print as the numbers are all in descending order
        for (i = 0; i < n-1; i++)     
        {
            for (j = 0; j < n-i-1; j++) 
            {
                if (a[j] > a[j+1]) 
                {
                    temp = a[j]; 
                    a[j] = a[j+1]; 
                    a[j+1]= temp;
                }
            }
        }
        
        for(i=0;i<n;i++)
        printf("%d ",a[i]);
        return 0;

    }

    for(i=n-1;i>0;i--)
    {
        if(a[i]>a[i-1])
        {
            x1=i;
            x=i-1;
            break;
        }
    }
    y1=i;
    y=a[i];
    for(i=i;i<n;i++)
    {
        if(a[i]<y)
        {
            y=a[i];
            y1=i;
        }
    }
    
    temp = a[x]; 
    a[x] = a[y1]; 
    a[y1] = temp;
    
   for (i = x1; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        {
          if (a[j] < a[min_idx])
            min_idx = j;
        }
            temp = a[min_idx]; 
            a[min_idx] = a[i]; 
            a[i] = temp;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
