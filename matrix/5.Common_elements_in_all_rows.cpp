// #include<map>
// vector<int> findCommonElements(vector<vector<int>> &mat)
// {  const int N = 1e9+1;
//     map<int,int> freq;
//     int n = mat.size();
//     int m = mat[0].size();
//     for(int i=0;i<n;i++){
//        map<int,int> temp; //this map is help in ensuring that due to duplicate values in each row freq is not updated infreq map
//         for(int j=0;j<m;j++)
//         {
//           if(temp.find(mat[i][j])==temp.end())  
//           {
//               freq[mat[i][j]]++;
//               temp[mat[i][j]]++;
//           }
//         }
     
//     }
//     vector<int> ans;
//     for(pair<int,int> i : freq)
//     {
//         if(i.second==n)
//         {
//             ans.push_back(i.first);
//         }
//     }
//     return ans;
// }
