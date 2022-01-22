#include <stdio.h>
int main()
{
    int i, j, c = 1,n;
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = n - i+1; j > 1; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("%d ", c++);
        }

        printf("\n");
    }
}
