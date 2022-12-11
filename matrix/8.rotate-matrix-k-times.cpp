// https://www.codingninjas.com/codestudio/problems/rotate-matrix-k-times_893398?leftPanelTab=2
// void reverse(vector<int>&temp ,int i,int j)
// {
//     while(i<j)
//     {
//         swap(temp[i],temp[j]);
//         i++;
//         j--;
//     }
// }
// void rightshift(vector<int> &temp ,int n , int k)
// {
//    reverse(temp , n-k ,n-1 );
//    reverse(temp , 0, n-k-1);
//    reverse(temp , 0,n-1);
// }
// vector<vector<int>> solve(vector<vector<int>> &matrix, int k)
// {  
//   int n= matrix.size();
//    k = k%n;
//    for(int i =0;i<n;i++)
//    {  
//       rightshift(matrix[i] ,n ,k);
//    }
//  return matrix;
// }