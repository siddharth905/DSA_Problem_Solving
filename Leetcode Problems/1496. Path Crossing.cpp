class Solution {
public:
    bool isPathCrossing(string path) {
       // vector<vector<int>> temp(0);
      /* vector<vector<int>> temp(100,vector<int>(100));
        cout<<temp[5][5];
        cout<<temp[0].size();
        int row=50;
        int col=50;
        temp[row][col]=1;
        for(int i=0;i<path.size();i++){
            if(path[i] == 'N'){
                row=row-1;
                temp[row][col]=temp[row][col] +1;
            }
            else if(path[i] == 'S'){
                row=row+1;
                temp[row][col]=temp[row][col] +1;
            }
            else if(path[i] == 'E'){
                   col=col + 1;
                temp[row][col]=temp[row][col] +1;
            }
            else if(path[i] == 'W'){
                col=col-1;
                temp[row][col]=temp[row][col] +1;
            }
        }
        for(int i=0;i<temp.size();i++){
            for(int j=0;j<temp[0].size();j++){
                if(temp[i][j]>1){
                    return true;
                }
            }
        }
        return false;
        */
        unordered_map<char, pair<int, int>> moves;
        moves['N'] = {0, 1};
        moves['S'] = {0, -1};
        moves['W'] = {-1, 0};
        moves['E'] = {1, 0}; 
        
        unordered_set<string> visited;
        visited.insert("0,0");
        
        int x = 0;
        int y = 0;
        
        for (char c : path) {
            pair<int, int> curr = moves[c];
            int dx = curr.first;
            int dy = curr.second;
            
            x += dx;
            y += dy;
            
            string hash = to_string(x) + "," + to_string(y);
            
            if (visited.find(hash) != visited.end()) {
                return true;
            }
            
            visited.insert(hash);
        }
        
        return false;
    }
};
