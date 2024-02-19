class Solution {
public:
    bool isPowerOfTwo(int n) {
    /*   int ans =1;
       // int flag=0;
        for(int i=0;i<=30;i++)
        {
            if(ans==n)
            {
                return true;
                //flag=1;
             }
            if(ans < INT_MAX/2)
            ans=ans*2;
        }
       return false;
       // if(flag==1)
         //   return true;
         */
         if(n == 0 || n<0){
             return false;
         }
         if((n & n-1) == 0){
             return true;
         }
         else{
             return false;
         }
    }
};
/*
Time complexity:- O(1)
Space complexity:- O(1)
*/
