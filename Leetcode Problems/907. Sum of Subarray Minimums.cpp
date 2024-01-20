using ll = long long;
const int MOD = 1e9 + 7;
class Solution {
public:
    // int findMin(vector<int>& arr,int start,int end){
    //    int min_value=INT_MAX;
    //     for(int i=start;i<=end;i++){
    //         min_value=min(min_value,arr[i]);
           
    //     }
    //      cout<<min_value;
    //      cout<<" ";
    //     return min_value;
    // }
    int sumSubarrayMins(vector<int>& nums) {
        /* O(n^3)..71/83 Passed 
        long total=0;
        int length=arr.size();
        for(int i=0;i<length;i++){
            total=total+arr[i];
        }
        for(int i=1;i<=length-1;i++){
            for(int j=0;j<length-i;j++){
                int min=findMin(arr,j,j+i);
                total=total+min;
            }
        }
        int mod=1e9+7;
        return total%mod;
        */
         int length = nums.size();
        vector<int> left(length, -1);
        vector<int> right(length, length);
        stack<int> stk;

        for (int i = 0; i < length; ++i) {
            while (!stk.empty() && nums[stk.top()] >= nums[i]) {
                stk.pop();
            }
            if (!stk.empty()) {
                left[i] = stk.top();
            }
            stk.push(i);
        }

        stk = stack<int>();

        for (int i = length - 1; i >= 0; --i) {
            while (!stk.empty() && nums[stk.top()] > nums[i]) {
                stk.pop();
            }
            if (!stk.empty()) {
                right[i] = stk.top();
            }
            stk.push(i);
        }

        ll sum = 0;

        for (int i = 0; i < length; ++i) {
            sum += static_cast<ll>(i - left[i]) * (right[i] - i) * nums[i] % MOD;
            sum %= MOD;
        }

        return sum;
    }
};
