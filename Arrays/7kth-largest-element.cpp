//Approach 1 : priority queue TC: O(n)  (builgin heap is big o(n) and then removing kelements is o(k) when n==k it is also(n))
// int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int> p;
//         for(int i : nums)
//         p.push(i);
//         for(int i =0;i<k-1;i++)
//         {
//             p.pop();
//         }
//         return p.top();
//     }