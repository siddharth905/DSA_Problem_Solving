class Solution {
    pair<int,int> countRow(int i, int j, vector<vector<int>>& grid ){
        int row=grid.size();
         int col=grid[0].size();
         int onesRow=0;
         int zeroRow=0;
         pair<int,int> rowinfo;
        for(int j=0;j<col;j++)
        {
            if(grid[i][j]==1){
                 onesRow++;
            }
            else{
                zeroRow++;
            }
        }
        rowinfo.first=onesRow;
        rowinfo.second=zeroRow;
        return rowinfo;
    }
    pair<int,int> countCol(int i,int j,vector<vector<int>>& grid){
         int row=grid.size();
         int col=grid[0].size();
         int onesCol=0;
         int zeroCol=0;
         pair<int,int> colinfo;
        for(int i=0;i<row;i++){
             if(grid[i][j]==1){
                 onesCol++;
            }
            else{
                zeroCol++;
            }
        }
        colinfo.first=onesCol;
        colinfo.second=zeroCol;
        return colinfo;
    }
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
         
         int row=grid.size();
         int col=grid[0].size();

         vector<vector<int>> ans;
         for(int i=0;i<row;i++){
             vector<int>v1;
             for(int j=0;j<col;j++){
                 int value=0;
                 int onesRow=0; int onesCol=0; int zerosRow=0; int zerosCol=0;
                  pair<int ,int> rowinfo=countRow(i,j,grid);
                  onesRow=rowinfo.first;
                  zerosRow=rowinfo.second;

                  pair<int, int >colinfo=countCol(i,j,grid);
                  onesCol=colinfo.first;
                  zerosCol=colinfo.second;

                 value= onesRow + onesCol - zerosRow - zerosCol;
                 v1.push_back(value);
             }
             ans.push_back(v1);
         }
     
       return ans;
     /*   int m = grid.size();
        int n = grid[0].size();

        vector<int> rowOnes(m, 0);
        vector<int> colOnes(n, 0);

        // Count ones in each row and column
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                rowOnes[i] += grid[i][j];
                colOnes[j] += grid[i][j];
            }
        }

        // Calculate the difference matrix
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                grid[i][j] = 2 * (rowOnes[i] + colOnes[j]) - m - n;
            }
        }

        return grid; */
    }
};
