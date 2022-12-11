	
    //Method -1 tc :n^2
    // int minSwaps(vector<int>&nums)
	// {
	//     int count =0,n=nums.size();
	//     for(int i =0;i<n;i++)
	//     {
	//         int mini = nums[i],minIndex = i;
	//         for(int j=i+1;j<n;j++)
	//         {
	//             if(nums[j] < mini)
	//             {
	//                 mini = nums[j];
	//                 minIndex = j;
	//             }
	//         }
	//         if(minIndex!=i)
	//         {
	//             swap(nums[i],nums[minIndex]);
	//             count++;
	//         }
	//     }
	//     return count;
	// }