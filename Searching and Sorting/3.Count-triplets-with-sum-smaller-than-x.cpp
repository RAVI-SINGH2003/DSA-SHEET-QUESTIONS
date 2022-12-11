// https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1
// long long countTriplets(long long nums[], int n, long long sum)
// {

//     sort(nums, nums + n);
//     int count = 0;

//     for (int i = 0; i < n - 2; i++)
//     {

//         if (i == 0 || (nums[i] != nums[i - 1]))
//         {
//             int low = i + 1, high = n - 1;

//             while (low < high)
//             {
//                 long long sum1 = nums[low] + nums[high] + nums[i];

//                 if (sum1 < sum)
//                 {

//                     count += high - low;
//                     low++;
//                 }

//                 else if (sum1 >= sum)
//                 {
//                     high--;
//                 }
//                 while (low != i + 1 && low < high && nums[low] == nums[low - 1])
//                     low++;
//                 while (high != n - 1 && low < high && nums[high] == nums[high + 1])
//                     high--;
//             }
//         }
//     }

//     return count;
//    
// }
