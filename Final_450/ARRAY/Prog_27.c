//Find whether an array is a subset of another array
/*
string isSubset(int a1[], int a2[], int n, int m) 
{
    unordered_set<int>subset;
    int i;
    for(i=0;i<n;i++)
    subset.insert(a1[i]);
    
    for(i=0;i<m;i++)
    {
        if(subset.find(a2[i])==subset.end())
        return "No";
    }
    return "Yes";
}
*/