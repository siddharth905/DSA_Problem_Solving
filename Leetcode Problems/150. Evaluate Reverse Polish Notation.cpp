class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int>ans;
        for(int i=0;i<tokens.size();i++){
      if( (tokens[i] != "+") && (tokens[i] != "-") && (tokens[i] != "*") && (tokens[i] != "/") ){
               // char s = char(tokens[i]);
                //int x=int(s - "0");
                int x=stoi(tokens[i]);
                ans.push_back(x);
            }
            else if(tokens[i] == "+"){
                int length=ans.size()-1;
                int a=ans[length];
                int b=ans[length-1];
                int c=a+b;
                ans.pop_back();
                ans.pop_back();
                ans.push_back(c);
            }
            else if(tokens[i] == "-"){
                int length=ans.size()-1;
                int a=ans[length];
                int b=ans[length-1];
                int c=b-a;
                ans.pop_back();
                ans.pop_back();
                ans.push_back(c);
            }
            else if(tokens[i] == "*"){
                int length=ans.size()-1;
                int a=ans[length];
                int b=ans[length-1];
                int c=a*b;
                ans.pop_back();
                ans.pop_back();
                ans.push_back(c);
            }
            else if(tokens[i] == "/"){
                int length=ans.size()-1;
                int a=ans[length];
                int b=ans[length-1];
                int c=b/a;
                ans.pop_back();
                ans.pop_back();
                ans.push_back(c);
            }
        }
        return ans[0];
    }
};
/*
Time Complexity:- O(N)
Space Complexity:- O(N)
*/
