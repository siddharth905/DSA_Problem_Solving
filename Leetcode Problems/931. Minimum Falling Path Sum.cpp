class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        //DP question
        int n=matrix.size();
        int row=n;
        int col=n;
        int dp[n][n];
        for(int j=0;j<col;j++){
            dp[0][j]=matrix[0][j];
        }
        for(int i=1;i<row;i++){
            for(int j=0;j<col;j++){
                int min_value=INT_MAX;
                if((i-1) >=0){
                     min_value=min(min_value,dp[i-1][j]);
                }
                if((i-1) >=0 && j+1 < n){
                    min_value=min(min_value,dp[i-1][j+1]);
                }
                if((i-1) >=0 && j-1 >=0){
                    min_value=min(min_value,dp[i-1][j-1]);
                }
                dp[i][j]= matrix[i][j] + min_value;
                cout<<dp[i][j];
                
            }
        }
        int final_min=dp[n-1][0];
        for(int j=1;j<n;j++){
            final_min=min(final_min,dp[n-1][j]);
        }
        return final_min;
    }
};
/*
n=row;
m=col;
   Time Complexity:- O((n-1) * m)
   Space Complexity:- O(n)
*/
