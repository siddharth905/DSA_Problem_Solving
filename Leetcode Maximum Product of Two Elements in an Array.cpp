class Solution {
public:
    int maxProduct(vector<int>& nums) {
        /* sort(nums.begin(),nums.end());
         int length=nums.size();
         int max_first=nums[length-1];
         int max_second=nums[length-2];
         return ((max_first - 1) * (max_second - 1));
         */
         int max1 = INT_MIN;
         int max2 = INT_MIN;
         for(int num :nums){
             if(num >= max1){
                 max2=max1;
                 max1=num;
             }
             else if(num > max2){
                 max2 =num;
             }
         }
         return ((max1 - 1) * (max2 - 1));
         
    }
};
