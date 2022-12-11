// https://www.youtube.com/watch?v=bXD-ADPo1SI

// int getMinDiff(int arr[], int n, int k)
// {
//     
//     sort(arr, arr + n);
//     int maxi = arr[n - 1];
//     int mini = arr[0];
//     int diff = arr[n - 1] - arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i]-k < 0)
//             continue;
//         maxi = max(arr[i - 1] + k, arr[n - 1] - k);
//         mini = min(arr[i] - k, arr[0] + k);
//       diff = min(diff, maxi - mini);
//     }
//     return diff;
// }