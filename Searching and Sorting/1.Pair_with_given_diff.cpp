//Mwthod -1 TC : nlogn SC : O(N)
// int Solution::solve(vector<int> &A, int B) {
    
//     unordered_map<int ,int> mpp;
//     for(int a : A)
//     {
//         if(mpp.find(B+a)!=mpp.end() || mpp.find(a-B)!=mpp.end())
//         {
//             return true;
//         }
//         mpp[a]++;
//     }
//     return false;
// }

// Method -2   b can be negative also
// int Solution::solve(vector<int> &A, int B) {
// sort(A.begin(),A.end());
// int i=0,j=1,n=A.size();
// while(i < n && j<n)
// {
//     int diff= A[j] -A[i];
//     if(diff == B)
//     return 1;
//     else if(diff>B)
//    {
//        i++;
//        if(i==j)
//        i++;
//    }
//     else {
//         j++;
//         if(i==j)
//         j++;
//     }
// }
// return 0;
// } 

