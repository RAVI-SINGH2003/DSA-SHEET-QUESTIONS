//    int subarraySum(vector<int>& arr, int k) {
//     map<int,int> mpp; int n = arr.size(),sum=0;
//         mpp[0] =1;
//         int ans=0;
//         for(int i =0;i<n;i++)
//         {
//             sum+=arr[i];
//             if(mpp.find(sum-k)!=mpp.end()) ans+=mpp[sum-k];
//             mpp[sum]++;
//         }
//             return ans;
//     }