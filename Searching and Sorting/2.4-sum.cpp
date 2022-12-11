//SAME AS 3 SUM HERE WE FIX TWO NUMBERS  TC : N^3
// vector<vector<int>> fourSum(vector<int> &nums, int target)
// {
//     sort(nums.begin(), nums.end());
//     vector<vector<int>> ans;
//     int n = nums.size();
//     for (int i = 0; i < n - 3; i++)
//     {
//         if (i > 0 && nums[i] == nums[i - 1])
//             continue;
//         for (int j = i + 1; j < n - 2; j++)
//         {

//             if (j > i + 1 && nums[j] == nums[j - 1])
//                 continue;
//             int low = j + 1, high = n - 1, wantedSum = target - (nums[i] + nums[j]);

//             while (low < high)
//             {
//                 int sum = nums[low] + nums[high];
//                 if (sum == wantedSum)
//                 {

//                     ans.push_back({nums[i], nums[j], nums[low], nums[high]});
//                     low++;
//                     high--;
//                 }
//                 else if (sum < wantedSum)
//                     low++;
//                 else
//                     high--;

//                 while (low != j + 1 && low < high && nums[low] == nums[low - 1])
//                     low++;
//                 while (high != n - 1 && low < high && nums[high] == nums[high + 1])
//                     high--;
//             }
//         }
//     }
//     return ans;
// }