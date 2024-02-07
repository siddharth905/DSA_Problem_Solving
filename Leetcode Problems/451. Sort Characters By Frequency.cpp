class Solution {
public:
    string frequencySort(string s) {
        map<char,int> counter;
        for(int i=0;i<s.size();i++){
            counter[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it=counter.begin(); it != counter.end(); it++){
            pq.push({it->second,it->first});
        }
        string ans="";
        while(!pq.empty()){
         //   auto [occ,ch] = pq.top();
         pair<int,char> p1=pq.top();
            
            pq.pop();
            int occ=p1.first;
            char ch=p1.second;
            ans.append(occ,ch);
        }
       return ans;
    
    } 
};
