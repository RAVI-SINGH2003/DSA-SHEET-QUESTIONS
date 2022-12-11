//  long long int count =0;
//      void merge(long long arr[] ,long long l,long long m ,long long r)
//     {   
//        long long length1= m -l +1,length2= r-m;
//       vector<long long > arr1(length1),arr2(length2);
//       long long k=l;
//       for (int i=0;i<length1;i++)
//       {
//           arr1[i] = arr[k++];
//       }
//       k = m+1;
//       for (int i=0;i<length2;i++)
//       {
//           arr2[i] = arr[k++];
//       }
//        int i = 0, j= 0;
//       k =l;
//       while(i<length1 && j < length2)
//       {
//           if(arr1[i] <=arr2[j])
//           {
//               arr[k++] = arr1[i++];
//           }
//           else
//           {  count = count + (m-i+1); // if arr[i] >arr[j] se to i aur uske age ke sare elements mid tak (kyunki pehle array me index st se mid tak ke elemts hai) arr[j] se bade honge to arr[i] ke sath wo sabhi elemnts inversion form kar sakte hai to sabko count karo from i to mid.
//               arr[k++] = arr2[j++];
              
//           }
//       }
//       while(i<length1)
//       {
//           arr[k++] = arr1[i++];
//       }
//        while(j<length2)
//       {
//           arr[k++] = arr2[j++];
//       }
//     //   delete []arr1;
//     //   delete []arr2;
//     //   return count;
        
//     }
//     void mergesort(long long arr[] ,long long st,long long end)
//     {
//         if(st < end)
//         {
//             long long mid =(st + end)/2;
//             mergesort(arr,st,mid);
//             mergesort(arr,mid+1,end);
//             merge(arr,st ,mid,end);
//         }
//     }
//     long long int inversionCount(long long arr[], long long N)
//     {
//     //   long long count =0;
//        mergesort(arr,0,N-1);
//        return count;// Your Code Here
//     }