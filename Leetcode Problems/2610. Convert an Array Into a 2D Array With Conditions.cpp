class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        unordered_map<int,int>map;
        for(auto i: nums){
            map[i]++;
        }
         while(!map.empty()){
             vector<int>temp;
             for(auto it=map.begin(); it != map.end();){
                 if(it->second >0){
                     temp.push_back(it->first);
                     it->second--;
                 }
                 if(it->second == 0){
                    it= map.erase(it); //it now points to the element after the erased one
                  }
                  else{
                      it++;
                  }
             }
             ans.push_back(temp);
         }
     return ans;
        
    }
};
/*
Time Complexity:- O(N^2)
Space Complexity:- O(N);
*/
