class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        long long total=0;
        for(auto i:nums){
            total=total + i; 
            cout<<i;
        }
        cout<<total;
       long long index=-1;
        for(int i=0;i<nums.size();i++){
              long long temp=nums[i];
               long long check=total;
               for(int j=0;j<=i;j++){
                    check=check-nums[j];
               }
               if(check > temp){
                   index=i;
                    break;
               }
              
        }
        if(index==-1){
            return -1;
        }
        long long ans=0;
        for(int i=index; i<nums.size();i++){
             ans=ans + nums[i];
        }
        return ans;
    }
};
/*
Time Complexity:- O(n^2)
Space Complexity:- O(1)
*/
