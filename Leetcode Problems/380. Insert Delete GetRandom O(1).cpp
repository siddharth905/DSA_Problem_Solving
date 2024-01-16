class RandomizedSet {
    private:
        vector<int>nums;
        unordered_map<int,int>mp;

public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end()){
            return false;
        }
       else{
            nums.push_back(val);
             mp[val]=nums.size()-1;
             return true;
       } 
    }
    
    bool remove(int val) {
         if(mp.find(val) == mp.end()){
             return false;
         }
         else{
             int last=nums.back();
             int index=mp[val];
             nums[index]=nums.back();
             nums.pop_back();

             mp[last]=index;
             mp.erase(val);
             return true;
         }
    }
    
    int getRandom() {
        return nums[rand()%nums.size()];  
    }
};
/*
    Time Complexity:- O(1);
    Space Complexity:- O(N);
*/

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
