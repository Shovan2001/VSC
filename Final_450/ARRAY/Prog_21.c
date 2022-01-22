//subarray with sum 0
/*
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> subarray;
        int sum=0,i;
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i];
            
            if(sum==0 || subarray.find(sum)!=subarray.end() )
            return true;
            
            subarray.insert(sum);
        }
        return false;
    }
*/


//Largest subarray with sum 0
/*
    int maxLen(vector<int>&A, int n)
    {   
           unordered_map<int, int> presum;
 
        int sum = 0; // Initialize the sum of elements
        int max_len = 0; // Initialize result
 
        for (int i = 0; i < n; i++) 
        {
            sum += A[i];
 
            if (A[i] == 0 && max_len == 0)
                max_len = 1;
            if (sum == 0)
                max_len = i + 1;
 
            if (presum.find(sum) != presum.end()) 
                max_len = max(max_len, i - presum[sum]);
        
            else 
                presum[sum] = i;
        
        }
    return max_len;
        
    }
*/