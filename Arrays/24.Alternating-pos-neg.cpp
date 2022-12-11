// approach 1: use space; -> relative  order of elemets is maintained maintanied

// approach 2 : o(n) time and o(1) space ->order is not maintained  this approach is similar to https://practice.geeksforgeeks.org/problems/even-and-odd/1 approach
// for (int i = 0; i < n; i++)
// {
//     if (i % 2 == 0 && arr[i] < 0)
//     {
//         while (oddpos < n && arr[oddpos] < 0)
//         {
//             oddpos += 2;
//         }
//         if (oddpos >= n)
//             break;
//         swap(arr[i], arr[oddpos]);
//     }
//     else if (i % 2 != 0 && arr[i] >= 0)
//     {
//         while (evenpos < n && arr[evenpos] >= 0)
//         {
//             evenpos += 2;
//         }
//         if (evenpos >= n)
//             break;
//         swap(arr[i], arr[evenpos]);
//     }
// }

// NOTE : this is not possible to arrange negative and pos no in alternaye fasishon in o(n) tc and o(1) extra space while maintaing the order

// approach 3 : order is maintained but O(n^2) TC AND O(1) space idea is to use right rotate instead of swapping the unmatched pairs;
// The idea is to process array from left to right. While processing, find the first out of place element in the remaining unprocessed array. An element is out of place if it is negative and at odd index (0 based index), or it is positive and at even index (0 based index) . Once we find an out of place element, we find the first element after it with opposite sign. We right rotate the subarray between these two elements (including these two).
//    void rightshift(int  arr[] ,int outofplace,int curr)
//      {
//          int currelem = arr[curr];
//          for(int i=curr ;i>outofplace ;i--)
//          {
//              arr[i]=arr[i-1];
//          }
//          arr[outofplace]=  currelem;
//      }
//  	void rearrange(int arr[], int n) {

// 	   for(int i=0;i<n;i++)
// 	   {
// 	       if(i%2==0 && arr[i] <0)
// 	       { int index=i+1;
// 	          while(index <n &&arr[index] <0)
// 	          index++;
// 	          if(index>=n)
// 	           break;
// 	         rightshift(arr,i,index);

// 	       }
// 	      else if(i%2!=0 && arr[i] >=0)
// 	       {  int index =i+1;
// 	           while(index <n &&arr[index]>=0) index++;
// 	            if(index>=n)

// 	           break;
// 	           rightshift(arr ,i ,index);

// 	       }
// 	   }

// 	}
