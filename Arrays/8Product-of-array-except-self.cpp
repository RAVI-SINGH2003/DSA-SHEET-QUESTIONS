// https://leetcode.com/problems/product-of-array-except-self/
//  vector<int> productExceptSelf(vector<int>& nums) {
//        int n = nums.size();
//         vector<int> prefix(n),prefix1(n);
//         prefix[0]=1;
//         prefix1[n-1]=1;
//      for(int i =1;i<n;i++)
//      {
//          prefix[i] = prefix[i-1] * nums[i-1];
//      }
//         for(int i =n-2;i>=0;i--)
//      {
//          prefix1[i] = prefix1[i+1] * nums[i+1];
//      }
//        vector<int> ans(n);         
//   for(int i =0;i<n;i++)
//   ans[i] = prefix[i]*prefix1[i];
        
//         return ans;
//     }