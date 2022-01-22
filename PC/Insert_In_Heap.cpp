/*for(Max heap)
insert a new element in a max heap
void insert(int a[],int n,int k)
{
    n=n+1;
    a[n]=k;
    int i=n;
    while(i>1)
    {
        parent=i/2;
        if(a[parent]<a[i])
        {
            temp=a[parent];
            a[parent]=a[i];
            a[i]=temp;
            i=parent;
        }
        else
        return;
    }
}

*/