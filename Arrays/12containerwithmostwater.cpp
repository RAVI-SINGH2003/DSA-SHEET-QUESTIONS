// brute force
//    int n =height.size();
//         int ans=0;
        
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                ans = max(ans,min(height[j] ,height[i])*(j-i)); 
//             }
//         }
//         return ans;      
//     }

//Approach -2  : 2 pointers approach 
// int maxArea(vector<int>& height) {
//         int n =height.size();
//         int ans=0;
//         int i =0, j=n-1;
//         while(i<j)
            
//         {
//              ans = max(ans, min(height[i],height[j])* (j-i));
//              if(height[i] <height[j])
//                  i++;
//              else
//                 j--;

//         }
            
//        return ans;
        
//     }
//idea : we have to make a container taking  any two lines and calulate the max area
// so we start making bucket from last and then we will decrease the width of bucket
// if i selected a bucket the amount of water it will hold will depend on min height line
// i then have to decrease the width of bucket from left or right
//if height[i] < height[j] i++;
// else height[i] <height[j] j--;
// else height[i]==height[j] do i++ or j--;
//explanation for i++ or j--
//jis taraf ki line height kam hai us taraf se bucket ki width kam kar rahe .
//see pepcoding video .