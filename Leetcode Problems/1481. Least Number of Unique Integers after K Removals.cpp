class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        //updated code
        unordered_map<int,int>map;
        for(auto i:arr){
            map[i]++;
        }
        multimap<int,int>mm;
        for(auto it=map.begin();it != map.end();it++){
            mm.insert({it->second,it->first});
        }
        int count=0;
         for(auto it=mm.begin();it != mm.end();it++){
            k = k - it->first;
        
            if(k < 0){
                return mm.size() - count;
            } 
            count++;
        }
        return 0;
    }
};
/*
Time Complexity:- O(nlogn)
Space Complexity:- O(n)
*/
