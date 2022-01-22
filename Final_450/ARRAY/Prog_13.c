//KADANE'S ALGORITHM
/*
Find the contiguous sub-array with maximum sum.
for(i=0;i<n;i++)
{
    now=now+a[i];
    if(before<now)
    before=now;
    if(now<0)
    now=0
}
print before
*/