#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //    sort(strs.begin(),strs.end());
          vector<vector<string>> ans;
       // cout<<strs[0];
      //  cout<<strs[1];

        // for(auto i:strs){
        //     cout<<i;
        // }
        // vector<string> temp;
        // for(int i=0;i<strs.size();i++){
        //     string s=strs[i];
        //     sort(s.begin(),s.end());
        //     temp.push_back(s);
        // }
       // cout<<temp[0];
        // for(int i=0; i<temp.size();i++){
        //     ans[i].push_back(temp[i]);
        //    for(int j=i+1;j<temp.size();j++){
        //          if(temp[i]==temp[j]){
                       
        //          }
        //    }
        // }
        unordered_map<string,vector<string>> map;
        for(auto x:strs){
            string word=x;
            sort(word.begin(),word.end());
            map[word].push_back(x);
        }
        for(auto x:map){
            ans.push_back(x.second);
        }

        return ans;
    }
};
