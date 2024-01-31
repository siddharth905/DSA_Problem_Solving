class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
         int length=temperatures.size();
          stack<int>st;
          vector<int>ans(length);
          for(int i=length-1;i>=0;i--){
              while(!st.empty() && temperatures[i] >= temperatures[st.top()]){
                    st.pop();
              }
              if(st.empty()){
                  ans[i]=0;
              }
              else{
                  ans[i]=st.top() - i;
              }
              st.push(i);
          } 
          return ans;
          /*
          Time Complexity:- O(N*2) ..Inner while me har element ek hi bar
                                    push and pop hota he.. so 2 bar visit hota he..
                                    so it's N*2 ..not N^2  
          Space Complexity:- O(N)
          */
       
       /*  47 passed outoff 48
           //Time Limit Exceeds
        int length=temperatures.size();
        vector<int> ans;
        for(int i=0;i<length-1;i++){
            bool flag=true;
           
             for(int j=i+1;j<length;j++){
                 // int count=0;
                  if(temperatures[j] > temperatures[i]){
                      flag=false;
                      int count= j-i;
                      ans.push_back(count);
                      break;
                  }
             }
             if(flag){
                 ans.push_back(0);
             }
        }
        ans.push_back(0);
        return ans;
        */
    }
};
