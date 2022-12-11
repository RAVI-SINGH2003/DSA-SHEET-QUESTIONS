    // https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1
    // ll findSubarray(vector<ll> arr, int n ) {
    //     map<ll,ll> mpp;
    //     int count=0;
    //     int sum =0;
    //     for(int i =0; i<n; i++)
    //     {
    //         sum+=arr[i];
    //         if(sum==0)
    //         count++;
    //         if(mpp.find(sum)!=mpp.end())
    //         {
    //             count+=mpp[sum];
    //         }
    //         mpp[sum]++;
    //     }
    //      return count;
    // }