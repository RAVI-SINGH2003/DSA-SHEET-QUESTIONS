//  https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
//  long long findMinDiff(vector<long long> a, long long n, long long m){
    
//      sort(begin(a),end(a));
//      int i =0,j=0;
//      long long mini = INT_MAX;
//      while(j<a.size())
//      {
//          if(j-i+1< m)
//          {
//              j++;
//          }
//          else if(j-i+1==m)
//          {
//              mini = min(mini , a[j] - a[i]);
//              i++;
//              j++;
//          }
//      }
//     return mini;
//     }   