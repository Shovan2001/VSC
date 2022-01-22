//Best time to buy and Sell stock
#include<stdio.h>
int main()
{
    int ch,n,i,min_so_far,profit,max_profit;
    printf("Enter 1 to buy and sell only 1 time\n");
    printf("Enter 2 to buy and sell multiple times\n");
    printf("Enter choice\n");
    scanf("%d",&ch);

    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    min_so_far=a[0];
    profit=max_profit=0;
    switch(ch)
    {
        case 1:
            for(i=1;i<n;i++)
            {
                if(a[i]<min_so_far)
                min_so_far=a[i];
                profit=a[i]-min_so_far;
                if(max_profit<profit)
                max_profit=profit;
            }
            printf("Max profit=%d",max_profit);

        break;

        case 2:
            for(i=1;i<n;i++)
            {
                if(a[i-1]<a[i])
                max_profit=max_profit+a[i]-a[i-1];
            }
            printf("Max profit=%d",max_profit);
        break;
    
        default:
        printf("Wrong choice\n");
    }

}