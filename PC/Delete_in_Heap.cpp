/*for(max heap)
Delete element in a max heap(it means to delete the root node)
void delete(int a[],int n)
{
    a[1]=a[n]
    n=n-1;
    i=1;
    while(i<n)
    {
        left=a[2*i];
        right=a[2*i+1];
        larger=left>right?2*i:2*i+1;
        if(a[i]<a[larger])
        {
            swap(a[i]&a[larger]);
            i=larger;
        }
        else
        return;
    }
}
*/