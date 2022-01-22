//Find duplicates

/*
----M1----
for(i=0;i<n;i++)
{
    if(a[abs(a[i])-1]<0)
    repeating= abs(a[i]);
    else
    a[abs(a[i])-1]= -a[abs(a[i])-1];
}

----M2----
    Arrays.sort(nums);
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == nums[i-1])
                return nums[i];
        }

        return -1;


----M3----
i=0;j=0;
while(i<n)
{
    if(a[i]==a[++j])
    return a[j];
    if(j==n-1)
    {
        i++;
        j=i;
    }
}

*/