// #include <iostream>
// using namespace std;
// int moves(int arr[],int n)
// {
//     int i=0,j=n-1;
//     int count =0;
    
//     while(i<j)
//     {
//          if(arr[i]==arr[j])
//          {
//              i++;
//              j--;
//          }
//          else if(arr[i] <arr[j])
//          {
//              arr[i+1] = arr[i+1] +arr[i];
//              i++;
//              count++;
//          }
//          else if(arr[i] > arr[j])
//          {
//              arr[j-1]=arr[j-1] +arr[j];
//              j--;
//              count++;
//          }
         
        
//     }
//     return count;
// }
// int main() {
//    int arr[] ={4,2,1,5,1};
//    int n= 5;
//    cout<<moves(arr,n);
// 	return 0;
// }