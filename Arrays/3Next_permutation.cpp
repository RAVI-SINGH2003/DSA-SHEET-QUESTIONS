/* https://leetcode.com/problems/next-permutation/
void nextPermutation(vector<int>& nums) {
        
    // algoritm :
    // 1. traverse array from back and find index i such that arr[i] < arr[i+1] now index1= i;
    // if index1 is not found then it means the array is something like 5 4 3 2 1 where arr[i] is not less than arr[i+1] if we traverse from last so in this case just reverse the array to get the next permutation ie 1 2 3 4 5 .IF INDEX 1 is found then only go go step 2
    // 2. traverse array from back and find arr[j] > arr[index1] mark j==index2
    // 3.swap(arr[index1] ,arr[index2])
    // 4. reverse the array from index1 +1 pos to end
      int i =0,j=0,n= nums.size();
        for( i = n-2;i>=0;i--)
        {
            if(nums[i] < nums[i+1])
                break;
        }
        if(i<0)
        {
            reverse(begin(nums),end(nums));
        } else{
            for( j = n-1 ; j> i;j--)
            {
                if(nums[j] > nums[i])
                    break;
            }
            swap(nums[i],nums[j]);  reverse(begin(nums)+ i+ 1,end(nums));
        }
    }
*/