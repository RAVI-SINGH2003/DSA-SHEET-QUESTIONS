// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
// XOR-APPROACH
// int *findTwoElement(int *A, int n) {
        
//      int xor1n = 0,xorgiven =0;
//      //1.xor numbers from  to n
//      for(int i =1;i<=n;i++)
//      {
//          xor1n ^= i;
//      }
//      //2xor the numbers in array
//      for(int i= 0;i <n;i++)
//       xorgiven^=A[i];
//       //3. newxor is the xor of missing and repeating number
//       int newxor =xor1n ^ xorgiven; 
//      int pos =0;  //according to 0 indexinng
//      //4. getting position of right most set bit in newxor because yahi wo poisition hogi missing and repeating no me jaha
//      // bits differnt hogi tabhi newxor me is  pe 1 hai.
//         while((newxor&1)!=1)
//        {
//           newxor>>=1;
//             pos++;
//         }

//       //5. i. xor elements having 1 at the position 
//       //  xors elemenst do not having 1 at pos
//       int xorbasket1ofgivenarrray=0,xorbasket2ofgivenarrray =0;
//       for(int i=0;i<n;i++)
//       {
//           if(getbit(A[i] , pos))
//           {
//               xorbasket1ofgivenarrray^=A[i];
              
//           }
//           else
//           {
//               xorbasket2ofgivenarrray^=A[i];
//           }
//       }
      
//       // 6.i. xor elements having 1 at the position 
//       // ii. xor elements do not having 1 at pos
//       int xorbasket1_1ton = 0,xorbasket2_1ton =0;
//       for(int i =1;i<=n;i++)
//       {
//           if(getbit(i , pos))
//           {
//               xorbasket1_1ton^=i;
              
//           }
//           else
//           {
//               xorbasket2_1ton^=i;
//           }
//       }
//       int a  = xorbasket1ofgivenarrray^xorbasket1_1ton;
//       int b  = xorbasket2ofgivenarrray^xorbasket2_1ton;
      
//       int missing ,repeating;
//       int count1 =0 ,count2=0;
//       for(int i=0;i<n;i++)
//       {
//           if(A[i]==a)
//           {
//               count1++;
//           }
//           else if(A[i]==b)
//           { 
//               count2++;
//           }
//       }
//       if(count1==0)
//       {
//           missing = a;
//           repeating =b;
//       }
//       else
//       {
//           missing = b;
//           repeating =a;
//       }
      
//       int ans [2]= {repeating ,missing};

//       int *p = ans;
//       return p;
      
//     }


//other approaches : frequency array
// summation approach :
//find sum of 1ton = S1
//find sum of array =S2;
// IF X is the missing number and Y is  the repeating number
//S1 - S2 = X-Y  
//find sum of SQUARES OF 1ton = S3
//find sum of square of elements of array =S4;
// IF X^2 is the square missing number and Y^2 is  the square of repeating number
//S1 - S2 = X-Y  S3- S4 = X^2 -  Y^2;
//now from above X+Y = (S3 - S4)/(S1 - S2) = S5
// now you have value of X+Y and X-Y solve for x and y
// X IS THE MISSING NUMBER AND Y IS THE REPEATING NUMBER