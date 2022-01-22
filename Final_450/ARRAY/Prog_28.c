//Triplet Sum in Array O(n^2)
/*
sort(A,A+n);
        for(int i=0;i<=n-1;i++)
        {
            int low=i+1;
            int high=n-1;
            while(low<high)
            {
                if(A[i]+A[low]+A[high]==X)
                return true;
                else if(A[i]+A[low]+A[high]<X)
                low++;
                else
                high--;
            }
        }
        return false;
*/