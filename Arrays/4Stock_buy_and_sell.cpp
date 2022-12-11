//SAME AS MAX OF ARR[J]- ARR[I] 
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
/*    int maxProfit(vector<int>& nums) {
       int sum =0,mini = nums[0];
        int profit = 0;
        for(int i=1;i<nums.size();i++)
        {
            int diff = nums[i]- mini;
            profit = max(profit, diff);
            mini = min(mini, nums[i]);
        }
        return profit;
}*/
//idea is to maintan min number on left so that nums[j] - nums[i] is max;