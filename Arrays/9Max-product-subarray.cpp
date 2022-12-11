// https://leetcode.com/problems/maximum-product-subarray
//  int maxProduct(vector<int>& nums) {
//         int cp =1,maxi= INT_MIN;
//         int n = nums.size();
//       for(int i=0; i<n; i++)
//       {
//           cp*=nums[i];
//           maxi = max(maxi , cp);
//           if(cp == 0)
//               cp =1;
//       }
//         cp = 1;
//        for(int i=n-1; i>=0; i--)
//       {
//           cp*=nums[i];
//           maxi = max(maxi , cp);
//           if(cp == 0)
//               cp =1;
//       }
//         return maxi;
//     }

//EXPLANATION : PEPCODING - BEST 
//flow :
// 1. this approach is based on the fact that the maximum produxt subarray will either 
// start from left to a point on right
//Ether from right to some point at left 
//it can not lie in the middle of the array
//so we will run two loops
//1 loop from start and one from end and we get the product and maximise it if 0 is encountered
// then obvioiusly cp =0 then we will again do cp=1
