class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>umap;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
            
        }
        for(auto x:umap){
            cout<<x.first <<"  "<< x.second;
            cout<< endl;
        }
      // umap<int,int>::iterator it=umap.begin();
       for(auto x:umap){
           int temp=x.second;
           if((temp % 3)==0){
                ans=ans + temp/3;
               // x.second=-1;
               umap[x.first]=0;
              cout<<ans;
           }
           else if( ( (temp % 3) == 1) && (temp != 1)) {
               int rem=temp % 3;
               int qu= (temp/3) - rem;
               ans = ans + qu;
               umap[x.first]= temp - (qu * 3);
               cout<<ans;
           }
           else if((temp % 3) == 2){
               int rem=temp % 3;
               int qu=temp/3;
               ans = ans + qu;
               umap[x.first]=temp - (qu * 3);
               cout<<ans;
           }
           
       }
        for(auto x:umap){
           int temp=x.second;
           if((temp % 2)==0){
                ans=ans + temp/2;
               // umap[x.first]=-1;
               cout<<ans;
           }
       }
       for(auto x:umap){
           int temp=x.second;
           //cout<<temp;
             if(((temp % 3) != 0 && (temp % 2) != 0)){
                 return -1;
             }
            // if(temp > 0 ){
            //     return -1;
            // }
       }

       return ans;
    }
};
