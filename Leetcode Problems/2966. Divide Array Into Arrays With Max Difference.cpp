class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
          int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<vector<int>>empty;

        for(int i=0;i<=n-3;i=i+3){  //for(int i=0;i<=n-3;i+3)..not update value of i 
                                       // so TLE(Time Limit Exceeds) Error
            if(nums[i+2] <= (nums[i]+k)){
                ans.push_back({nums[i],nums[i+1],nums[i+2]});
            }
            else{
                return empty;
            }
        }
        return ans;
        /*
        Time Complexity:- O(N/3)..O(N)
        Space Complexity:- O(N^2) or O(n * m)..Not sure
        */

       /*  This is also Correct Code
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<vector<int>>empty;
        for(int i=0;i<=n-3;i=i+3){
             vector<int>temp;
             temp.push_back(nums[i]);
             int count=2;
             for(int j=i+1;j<n;j++){
                 if((nums[j] <= nums[i]+k) ){
                     temp.push_back(nums[j]);
                     count--;
                     if(count==0){
                         break;
                     }
                 }
                 
             }
             if(count > 0){
                 return empty;
             }
             ans.push_back(temp);
        }
        return ans;
        */
    }
};
