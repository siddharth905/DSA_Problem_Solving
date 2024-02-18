class Solution {
public:
  

    int furthestBuilding(vector<int>& h, int bricks, int ladders) {
           
        priority_queue<int>q;
        int i=0;
        for(i;i<h.size()-1;i++){
            
            if(h[i+1] <= h[i]){
                continue;
            }
            int diff= h[i+1] - h[i];
            if(diff <= bricks){
                bricks=bricks - diff;
                q.push(diff);
            }
            else if(ladders > 0){
                if( q.size())
                {
                      int x=q.top();
                  if(x >= diff){
                    bricks=bricks + x;  //Restore the value
                    q.pop();
                    q.push(diff);
                    bricks=bricks-diff;
                }
                 
                }
                 ladders--; 
                
               
            }
            else break;
        }
        return i;
    //Time Complexity:- O(nlogn)
    //Space Complexity:- O(n)

        /* 
        62/78 passed
        int length=heights.size();
        int ans=0;
        for(int i=0;i<length-1;i++){
            bool flag=true;
            int curr=heights[i];
            int next=heights[i+1];
            if(next <= curr){
                ans=i+1;
                flag=false;
            }
            else{
                int diff=next -curr;
                if(bricks > 0 && bricks >= diff){
                    bricks =bricks - diff;
                    ans=i+1;
                    flag=false;
                }
                else if(ladders > 0){
                    ladders = ladders - 1;
                    ans=i+1;
                    flag=false;
                }
            }
            if(flag){
                break;
            }
        }
        return ans;
        */
    }
};
