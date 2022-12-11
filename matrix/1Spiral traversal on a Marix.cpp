// vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
//     {
//        int rs = 0 , re= r-1,cs=0,ce=c-1;
//        vector<int> ans;
//        while(rs<=re && cs<=ce)
//        {
//            for(int i =cs;i<=ce;i++)
//            {
//                ans.push_back(matrix[rs][i]);
//            }
//            rs++;
//            for(int i= rs ;i<=re; i++)
//            {
//                ans.push_back(matrix[i][ce]);
//            }
//            ce--;
//            after these operations rs maybe > re or csmay be > ce so we are also checking
//            these conditions in the loop
//            for(int i = ce; i>=cs && rs<=re;i--)
//            {
//                ans.push_back(matrix[re][i]);
//            }
//            re--;
//            for(int i=re ;i>=rs && cs<=ce ;i--)
//            {
//                ans.push_back(matrix[i][cs]);
               
//            }
//            cs++;
           
//        }
//        return ans;
//     }