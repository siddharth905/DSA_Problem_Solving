class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        //int count=0;
        int ans=0;
        cout<<row<<" "<<col;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j] == 1){
                    int count=0;
                    bool flag=true;
                    for(int jj=0; jj<col && flag==true; jj++){
                        if(mat[i][jj] != 0){
                            count++;
                        }
                        if(count >= 2){
                             flag=false;
                            break;
                        }

                    }
                    if(flag==true){
                        count=0;
                       // int jj_col=0;
                        for(int ii=0; ii<row && flag==true; ii++){
                            if(mat[ii][j] != 0){
                                 count++;
                            }
                            if(count >= 2){
                             flag=false;
                            break;
                        }
                        }
                    }
                    if(flag == true){
                        ans++;
                    }
                    


                }
            }
        }
        return ans;
    }
};
