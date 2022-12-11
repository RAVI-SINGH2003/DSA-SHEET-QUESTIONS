// EFFICENT : tc: (n^2)
    //  vector<vector<int>> threeSum(vector<int>& nums) {
        
    //     sort(nums.begin(),nums.end());
    //     vector<vector<int>> ans;
        
    //     for(int i=0;i<nums.size()-2;i++)
    //     {
            
    //         if(i==0 || (nums[i]!=nums[i-1]))
    //         {  
    //             int low =i+1,high = nums.size()-1,wantedSum = (0-nums[i]);
              
    //             while(low<high)
    //             {
    //                 int sum = nums[low] + nums[high];
    //                 if(sum==wantedSum)
    //                 {
    //                      ans.push_back({nums[i],nums[low],nums[high]});
    //                      low++;
    //                      high--;
    //                 }
    //                 else if(sum > wantedSum)
    //                 {
    //                      high--;
                        
                        
    //                 }
                      
    //                 else
    //                 {
    //                     low ++;
                       
    //                 }
    //                  while(low!=i+1 && low <high && nums[low]==nums[low-1])
    //                  low++;
    //                  while(high!=nums.size()-1&& low <high && nums[high]==nums[high+1])
    //                  high--;

    //             }
    //         }
    //     }
       
    // return ans;
    // }

// Brue force : something like TC : O(N^3LOGM) LOGM FOR SET wbecause we want uniwue pairs M for no of pairs with sum=0;
//  SC: O(M) M IS the no of pairs stored
//     vector<vector<int>> threeSum(vector<int>& nums) {
//       //brute force :
//          set<vector<int>> s;
//          for(int i =0;i<n;i++)
//          {
//              for(int j=i+1;j<n;j++)
//              {
//                  for(int k=j+1;k<n;k++)
//                  {
//                    if(nums[i] +nums[j] +nums[k]==0)
//                    {
//                        s.insert({nums[i],nums[j],nums[k]});
//                    }

//                 }
//             }
//         }

//     }
//

// BETTER. TC : O(N^2 LOG M) + O(nLOGN) O(NLOG) FOR MAP SC : O(M) +O(N) O(N ) FOR  ELEMENTS IN MAP
//     vector<vector<int>> threeSum(vector<int>& nums) {
//       //better  :
//          map<int> mpp;
//          for(int i =0;i<n;i++)
//          {
//              mpp[nums[i]]++;
//          }
//          set<vector<int>> s;
//          for(int i =0;i<n;i++)
//          {   mpp[nums[i]]--;
//              if(mpp[nums[i]] ==0 )
//               mpp.erase(nums[i]);
//              for(int j=i+1;j<n;j++)
//              {  mpp[nums[j]]--
//                 if(mpp[nums[i]] ==0 )
//                  mpp.erase(nums[i]);
//                  if(mpp.find(-(nums[i]+nums[j]))!=mpp.find())
//                  {
//                       s.insert({nums[i],nums[j],-(nums[i]+nums[j])});
//                   }
//                     mpp[nums[j]]++;
//             }
//              mpp[nums[i]]++;
//         }
//   }