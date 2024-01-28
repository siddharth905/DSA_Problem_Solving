class Solution {
public:
       //DP Problem *
     int solve(string& a,string& b,int i,int j,vector<vector<int>> &dp){
         if(i==a.length()){
             return 0;
         }
         if(j==b.length()){
             return 0;
         }
         if(dp[i][j] != -1){  //Memorization Step 3 Check answer is present into vector or not ... so reduced Time Limit Exceeded error( because of Memorization)
             return dp[i][j];
         }
         int ans=0;
         if(a[i]==b[j]){
             ans=1 + solve(a,b,i+1,j+1,dp);
         }
         else{
             ans=max(solve(a,b,i+1,j,dp),solve(a,b,i,j+1,dp));
         }
         return dp[i][j]=ans;   //Memorization Step 2 Store answer into vector
     }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.length(),vector<int>(text2.length(),-1));
         //Memorization Step 1:- create 2Dvector
        return solve(text1,text2,0,0,dp);
    }
};
