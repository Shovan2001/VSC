//find the missing and repeating number in O(1) space
/*
---Repeating---
    for(i=0;i<n;i++)
    {
        if(a[abs(a[i])-1]<0)
        repeating= abs(a[i]);
        else
        a[abs(a[i])-1]= -a[abs(a[i])-1];
        
    }
---missing---
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b=i+1;
            break;
        }
    }
*/