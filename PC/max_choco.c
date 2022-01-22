#include<stdio.h>

int main()
{
    int n,cpw,tot,w;
    scanf("%d %d",&n,&cpw);
    w=tot=0;
    while(n>0)
    {
        tot=tot+n;
        w=w+n;
        n=w/cpw;
        w=w%cpw;
    }

    printf("%d",tot);
}