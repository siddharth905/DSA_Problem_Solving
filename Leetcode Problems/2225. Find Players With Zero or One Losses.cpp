class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       
        int row=matches.size();
        int col=0;
        vector<vector<int>> ans(2);

        vector<int>v1;
        
        map<int, int>map;
        for(int i=0;i<row;i++){
            map[matches[i][1]]++;

        }
      int prev=-1;
      for(int i=0;i<row;i++){
          v1.push_back(matches[i][0]);
      }
      sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++){
            int temp=v1[i];
            
            if(map.find(temp) == map.end()  && temp != prev){
              // v1.push_back(temp);
               // ans[0][col]=temp;
                //col++;
                prev=temp;
                ans[0].push_back(temp);
            } 
        }
      
         int col2=0;
         for(auto it=map.begin();it != map.end();it++){
            
             if(it->second == 1){
                 int temp=it->first;
                  
                //  ans[1][col2]=temp;
                //  col2++;
                ans[1].push_back(temp);
             }
         }
         sort(ans[0].begin(),ans[0].end());
         sort(ans[1].begin(),ans[1].end());
         return ans;
         //Time Complexity:- O(nlogn)
         //Space Complexity:- O(n)
/*
    map<int,int>mp1;
    map<int,int>mp2;
    vector<vector<int>> ans(2);
    int row=matches.size();
    for(int i=0;i<row;i++){
            mp1[matches[i][0]]+=0;
            mp1[matches[i][1]]++;

        }
        for(auto it=mp1.begin();it != mp1.end();it++){
            if(it->second ==0){ 
                ans[0].push_back(it->first);
            }
            if(it->second == 1){
                ans[1].push_back(it->first);
            }
        }
        return ans;

  */
    }
};
