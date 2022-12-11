// https://www.youtube.com/watch?v=1iSJhfje97I
//Approach -1 Binary search for each row TC : O(N*LOG(M))
// int countOf1s(vector<vector<int>> &arr, int searchRow, int m)
// {
//     int low = 0, high = m - 1;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[searchRow][mid] == 0)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }

//     return m - low;
// }
// int rowWithMax1s(vector<vector<int>> arr, int n, int m)
// {
//     int maxi = 0, index = -1;

//     for (int i = 0; i < n; i++)
//     {
//         int count = countOf1s(arr, i, m);
//         if (count > maxi)
//         {
//             maxi = count;
//             index = i;
//         }
//     }
//     return index;
// }

//Approach -2 TC :  O(N+M)
// int rowWithMax1s(vector<vector<int> > arr, int n, int m) { 
//      int i = 0 ,j=m-1,ans=-1;
//      while(i<n && j>=0)
//      {
//          if(arr[i][j]==1)
//          {
//              j--;
//              ans = i;
//          }
//          else
//          {
//              i++;
//          }
//      }
//      return ans;
//     }
