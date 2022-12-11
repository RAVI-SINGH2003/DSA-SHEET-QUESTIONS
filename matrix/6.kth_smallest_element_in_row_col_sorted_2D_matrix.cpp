// https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
 /*int counting (vector<vector<int>>& matrix ,int row ,int value ,int n)
    {
        int low = 0 , high = n-1;
        while(low<=high)
        {
            int mid = low + (high  - low)/2;
            if(matrix[row][mid] <= value)  //count no of values <= k
            {
                low = mid+1;
                
            }
            else
            {
                high = mid - 1;
            }
        }
        return low;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size(),start = matrix[0][0],end= matrix[n-1][n-1];
        while(start <= end)
        {
            int count = 0;
            int mid = start + (end - start)/2;
            for(int i =0; i<n; i++)
            {
               count+=counting(matrix , i ,mid , n);
            }
            if(count <=k-1 )  // if count of elements less <= mid is <=k-1
            {
                start = mid +1;
            }
            else  
            {
                end = mid -1 ;
            }
        }
        return start;
    }
    */