// approach 1 :
// find intersection of two arrys using 2 pointers and sTore it in an array and then
// find its intersection with third array

// NOTE : here arrays are already sorted
// approach -2 2 pointers tc: o(n1+n2+n2)
// vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
// {  
//     vector<int> ans;
//     int i = 0, j = 0, k = 0;
//     int last = INT_MIN;
//     while (i < n1 && j < n2 && k < n3)
//     {
//         if (A[i] == B[j] and A[i] == C[k] and A[i] != last)
//         {
//             ans.push_back(A[i]);
//             last = A[i];
//             i++;
//             j++;
//             k++;
//         }

//         else if (min({A[i], B[j], C[k]}) == A[i])
//             i++;
//         else if (min({A[i], B[j], C[k]}) == B[j])
//             j++;
//         else
//             k++;
//     }
//     return ans;
// }