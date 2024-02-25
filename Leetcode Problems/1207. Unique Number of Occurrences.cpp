class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int ,int>map;
        set<int>s;
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }
        for(auto it=map.begin();it != map.end();it++){
            int frqn=it->second;
            if(s.find(frqn) != s.end()){
                return false;
            }
            else{
                  s.insert(frqn);
            }
        }
        return true;
        // if(map.size() == s.size()){
        //     return true;
        // }
       // return false;
    }
};
/*
   Time complexity=O(N);  //Time complexity of find() function??
   Space Complexity=O(N);
*/
