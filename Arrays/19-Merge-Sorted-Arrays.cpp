// Approach 1 : combine two sorted arrays and just sort it
// Approach 2: o(n*m)
// void merge(long long arr1[], long long arr2[], int n, int m)
// {
//     int j;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr1[i] > arr2[0])
//             swap(arr1[i], arr2[0]);

//         long long first = arr2[0];
//         for (j = 1; j < m; j++)
//         {
//             if (arr2[j] < first)
//             {
//                 arr2[j - 1] = arr2[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         arr2[j - 1] = first;
//     }
// }
// APpproach 3 : gap method till gap>0
// void merge(long long arr1[], long long arr2[], int n, int m)
// {
//     int gap = ceil((m + n) / 2.0);
//     while (gap > 0)
//     {
//         int i = 0, j = gap;
//         while (j < (m + n))
//         {
//             if (i < n && j < n && arr1[i] > arr1[j])
//             {
//                 swap(arr1[i], arr1[j]);
//             }
//             else if (i < n && j >= n && arr1[i] > arr2[j - n])
//             {
//                 swap(arr1[i], arr2[j - n]);
//             }
//             else if (i >= n && j > n && arr2[i - n] > arr2[j - n])
//             {
//                 swap(arr2[j - n], arr2[i - n]);
//             }

//             i++;
//             j++;
//         }
//         if (gap == 1)
//             gap = 0;
//         else
//             gap = ceil(gap / 2.0);
//     }
// }