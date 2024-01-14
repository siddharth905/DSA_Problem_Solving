class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> v1(26,0),v2(26,0), v3(26,0), v4(26,0);
        //v1,v2 used to check Frequency
        //v3,v4 used to check character is same or not
        for(auto a:word1){
            v1[a-'a']++;
            v3[a-'a']=1;
        }
        for(auto a:word2){
            v2[a-'a']++;
            v4[a-'a']=1;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

        return v1==v2 && v3==v4;
    }
    /*
    Time Complexity:- O(N)
    Space Complexity:- O(N)
    */
};
