// suppose two strings x =303 y=3
// x+y= 3033
// y+x =3303
// bool compare(string x,string y) sort  bola ki mai x pehle rakhunga aur y bad me , comparator agar true return kata hai to matlab aisa hi ho jaega
// 	{                           lekin agar comparator ne false return kiya to matlab swap karo numbers ka order
// 	   if(x+y > y+x)   x+y> y+x means number x is bigger than y so to make big number overall in our ans x should be before y aur hum true return kara ke yahi keh rahe hai
// 	   {
// 	       return true;
// 	   }
// 	   else  if y+x > x+y means y > x to y ko pehle rakhna padega aur x ko bad me taki bada number bane to hum return karene false matlx x y ko swap karo aur y x banao
// 	   return false;
// 	}
// class Solution{
// public:
// 	 The main function that returns the arrangement with the largest value as
// 	 string.
// 	 The function accepts a vector of strings

// 	string printLargest(vector<string> &arr) {
// 	   sort(arr.begin() ,arr.end(),compare);
// 	   string ans = "";
// 	  for(string s : arr)
// 	  ans+=s;
//    while(s[0]=='0' &&s.size() > 1 ) // railing zeros at begin;
//                                     // size>a1 because if str is 0000 the n we have to remove all zeros exccept the last one
//                                     // to get result as 0 or if str = 0 then we dont want to remove this zero
//     {
//           s.erase(0, 1);
//     }
// 	   return ans;

// 	}
// };

// without using space by type-casting
//  bool order(int num1 ,int num2 ){
//     string n1 = to_string(num1);
//      string n2=to_string(num2);
//     if(n1+ n2 > n2+n1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// class Solution {
// public:
//     string largestNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end(),order);
//         string str="";
//         for(int i : nums)
//         {
//             str+=to_string(i);
//         }
//         while(str[0]=='0' &&str.size() > 1 )
//         {
//               str.erase(0, 1);
//         }

//         return str;
//     }
// };

// approach 3 : using lambda function instead of bool function
// string largestNumber(vector<int> &nums)
// {
//     sort(nums.begin(), nums.end(), [](int num1, int num2)
//          {
//     string n1 = to_string(num1);
//     string n2=to_string(num2);
//     if(n1+ n2 > n2+n1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     } });
//     string str = "";
//     for (int i : nums)
//     {
//         str += to_string(i);
//     }
//     while (str[0] == '0' && str.size() > 1)
//     {
//         str.erase(0, 1);
//     }

//     return str;
// }