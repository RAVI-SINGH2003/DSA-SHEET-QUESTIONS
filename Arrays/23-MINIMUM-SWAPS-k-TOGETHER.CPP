// APPROACH -1 TC : O(N^2)
//  IDEA :
//  1.first count the number of elements <= k
//  2.then go through every subarray of size count and see how many elemnts are >k (how many elements needed to be swapped);
//  3.Do this for every subarray and return minimum swaps required.
// int minSwap(int arr[], int n, int k)
// {
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] <= k)
//             cnt++;
//     }
//     int mini = INT_MAX;
//     for (int i = 0; i <= n - cnt; i++)
//     {
//         int badcount = 0;
//         for (int j = i; j < i + cnt; j++)
//         {
//             if (arr[j] > k)
//                 badcount++;
//         }
//         mini = min(mini, badcount);
//     }
//     return mini;
// }

// APPROACH -2 window sliding TC: O(N)
//idea-> to calculate the numbers <=k  ie cnt because phir hum check kar sakte hai ki is cnt ki window me kitne elements hai aise hai jo > k hai jise badalne ki jarurat hai 
// un elements se  jo <=k by swapping yahi hum har eindow me check ar lenge aur minimum lete jaenge.
//    int cnt=0;
//         for(int i=0;i<n;i++)
//         {
//               if(arr[i]<=k)
//               cnt++;
//         }
//         if(cnt ==0) // if no elemnts <=k the swaps requires is 0 and we return 0 vecause if we entrer loop of winow sliding with cnt=0 then j-i+1 can never be equal to cnt and infinte loop 
 //                       continues.
//          return 0;
//      int i= 0,j=0;
//      int bad=0;
//      int ans=INT_MAX;
//         while(j<n)
//         {
//             if(arr[j] >k) bad++;

//            if(j-i+1<cnt)
//            j++;
//            else if(j-i+1 == cnt)
//            {
//                ans= min(ans,bad);
//                if(arr[i] > k)
//                bad=bad-1;
//                i++;
//                j++;
//            }
//        }

//         return ans;
// }