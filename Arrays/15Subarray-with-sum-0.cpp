// bool subArrayExists(int arr[], int n)
//     {
//        set <int>mpp;
//        int sum=0;
       
//        for(int i=0;i<n;i++)
//        {
//            sum+=arr[i];
//            if(sum==0)
//            return true;
//            if(mpp.find(sum)==mpp.end())
//             mpp.insert(sum);
//             else
//             return true;
//        }
//        return false;
     
//     }