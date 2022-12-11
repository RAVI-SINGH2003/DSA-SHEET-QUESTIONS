//TC :  O(logbase2(2^32) * r *log(C)) = O(32 * r * log(c))
// int median(vector<vector<int>> &matrix, int r, int c){     
//        int startVal = 0 , endVal = 2000 ;
//        int n = r*c;
//        while(startVal <=endVal)
//        {
//            int midVal = startVal +(endVal- startVal)/2;
//            int count = 0;  //count for storing how many elements are <=midVal )
//            /* below for loop runs for each row to count the elements  <=midVal in that row*/
//            for(int i=0;i<r;i++) 
//            {
//                int low = 0,high = c-1;
//                while(low<=high)
//                {
//                    int mid2 = low+ (high - low )/2;
//                    if(matrix[i][mid2]<= midVal) 
//                     low= mid2+1;
//                     else
//                     high = mid2-1;
//                }
//                count+=low;  
               
//            }
        
//           if(count <= n/2)
//            {
//                startVal = midVal+1;
//            }
//            else if(count > n/2)
//            {
//                endVal=midVal-1;
//            }
//        }
     
//      return startVal;
// }