class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        for(int i=0;i<g.size();i++){
            int j=0;
            while(j < s.size()){
                if(g[i] <= s[j]){
                    count++;
                    s[j]=-s[j];
                    break;
                }
                j++;
            }
            } 
         /*   for(int j=0; count < g.size() && j < s.size();j++){
                if(g[count] <=s[j] ){
                    count++;
                }//    gives an error if g[2,2] s[2]..then wrong output 2 insted of 1
            } */  
               return count;
        }
     

    
};
