// APPROACH 1:o(NLONG) SC : O(1)
// int findLongestConseqSubseq(int arr[], int N)
// {
//     sort(arr, arr + N);
//     //   int inc = arr[0];
//     int maxi = 1;
//     int count = 1;
//     for (int i = 1; i < N; i++)
//     {
//         if (arr[i] == arr[i - 1])
//             continue;
//         if (arr[i] == arr[i - 1] + 1)
//         {
//             count++;
//         }
//         else
//         {
//             count = 1;
//         }
//         maxi = max(maxi, count);
//     }
//     return maxi;
// }

// APPROACH -2 O(N) ,SC : O(n)
//  int findLongestConseqSubseq(int arr[], int N)
//  {

//     const int SIZE = 1e5 + 1;
//     vector<int> v1(SIZE);
//     for (int i = 0; i < N; i++)
//     {
//         v1[arr[i]]++;
//     }
//     int count = 0;
//     int maxi = 1;
//     for (int i = 0; i < SIZE; i++)
//     {
//         if (count == 0 && v1[i] > 0)
//             count++;
//         if (v1[i] > 0 && v1[i - 1] > 0)
//         {
//             count++;
//         }
//         else
//         {
//             count = 0;
//         }
//         maxi = max(maxi, count);
//     }
//     return maxi;
// }