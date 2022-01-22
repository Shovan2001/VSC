//Trapping Rain water problem
#include<stdio.h>
int main()
{
    int n,i,j,k,temp;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a[n],left[n],right[n];                   //create 2 auxillary array
    printf("Enter the elements\n");              
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    left[0]=a[0];
   for(i=1;i<n;i++)                                 //left array stores maximium from left[7 4 0 9]--[7 7 7 9]
   {
          if(left[i-1]>a[i])
           left[i]=left[i-1];
           else
           left[i]=a[i];
    }
        right[n-1]=a[n-1];
       for(i=n-2;i>=0;i--)                          //right array stores maximium from right[7 4 0 9]--[9 9 9 9]
       {
           if(right[i+1]>a[i])
           right[i]=right[i+1];
           else
           right[i]=a[i];
        }
        int ans=0;
        for(i=0;i<n;i++)                       //final answer is minimum of each element of left                    
        {                                      //and right array minus the array provided i.e a[n] added to the 
            if(left[i]<=right[i])               //answer
            ans=ans+(left[i]-a[i]);
            if(left[i]>right[i])
            ans=ans+(right[i]-a[i]);
        }
        printf("Total RainWater=%d",ans);
}