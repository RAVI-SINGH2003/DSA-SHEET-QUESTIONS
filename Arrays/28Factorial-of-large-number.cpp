/*  vector<int> factorial(int N){
     vector<int> ans;
     ans.push_back(1); // initially 1 hi late hai multiply karte waqt
      
      for(int i=2;i<=N;i++)  // traverse from 2->N ,1 pehle hi le liya
      {
         int carr=0;  
         for(int j=0;j<ans.size();j++) // hum jo apna i number hai use ans me store number ke sare digits se multiply karte hue chalenge                               // lie 120 *6 karte waqt hum 6 ko 0 2 1 teeno se multiply karet hai na phir hi answer aata hai
         {
              // man le jo number store tha ans me wo tha 723 to actually aise store hoga aaray me ->3 2 7
              //lets say i = 6
             
              
             int val = ans[j] * i + carr;    //so when j=0 we multiply do 3*6+ 0 (carry) = 18
             ans[j] = val%10; //so store ans[0] = last digit of of multiplication that is 2 so vector look like 8 2 7
             carr = val/10;  // carry = 18/10 = 1
             //now  j==1
             //our array look like 8 2 7
             // we will multiply i=6 with 2, 2*6 +1= 13
             //we do ans[1] = 12%10 =2; array become 8 3 7
            //  car = 12/10 = 1;
            
            // j==2
            //our array look like 8 3 7
            //now val = 7* 6 + 1(carry from prevois iteration)= 43
            //ans[2] = 43%10 = 3; array is like 8 3 3
            // carry - 43/10 =4;
            
         }
         //now array llook like 8 3 3 
         while(carr!=0) // now carry is remained which is 4 but carry 2-3 4- digit ki bhi ho sakti thi isliye humne loop
             //lagaya hai har digit ko as it is store karane ke lye
         {
             ans.push_back(carr%10); // ans[3] = 4(carr)%10 =4 array become 8 3 3 4  
             carr/=10;
        }
      }
      reverse(ans.begin(),ans.end());// reverse array 4 3 23 8 and it is the answer
      return ans;
    }
*/