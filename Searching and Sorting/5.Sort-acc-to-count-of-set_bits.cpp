// https://practice.geeksforgeeks.org/problems/sort-by-set-bit-count1153/1
//stable_sort keep the relative order of equivalent elements in sorting

//  int count(int n)
// {
//         int c =0;
//         while(n>0)
//         {
//             n = n & (n-1);
//             ++c;
//         }
//         return c;
// }
//    bool comp(int a ,int b){  //comp bol raha hai a ko b se pehle rakhdu
//        if(count(a) < count(b))  //agar b me set bits a se jyada to mat swap kar
//        return false;
//        else if(count(a) >count(b)) //agar a me set bit jyada to ha rakhde
//        return true;
//     }
// class Solution{
   
//     public:
   
//     void sortBySetBitCount(int arr[], int n)
//     {
//        stable_sort(arr,arr+n ,comp);
//     }
// };