class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int length=nums.size();
        int ans=length/2;
        sort(nums.begin(),nums.end());
        return nums[ans];
    }
};
/*
Time Complexity:- O(n logn)
Space Complexity:- O(1)
*/
