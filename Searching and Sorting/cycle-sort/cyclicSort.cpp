#include<iostream>
#include<vector>
using namespace std;
void cyclicSort(vector<int> & arr,int n)
{
    int i=0;
    while(i<n)
    {
      int correctIndex = arr[i]-1;
      if(arr[correctIndex] != arr[i])
       {
        swap(arr[correctIndex],arr[i]);
       }
       else{
        i++;
       }
  
  
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n;i++)
    {
        cin>>arr[i];
    }
    cyclicSort(arr,n);
    for(int i =0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}