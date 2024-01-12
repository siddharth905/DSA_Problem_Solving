class Solution {
public:
    bool halvesAreAlike(string s) {
        int length=s.size();
        int grp1=(length/2) -1;
        int grp2=length -1;
        int count1=0;
        int count2=0;
        for(int i=0;i<length/2;i++){
            if(s[grp1]=='a' || s[grp1]=='e'|| s[grp1]=='i' ||s[grp1]=='o' ||s[grp1]=='u' || s[grp1]=='A' ||s[grp1]=='E' ||s[grp1]=='I' ||s[grp1]=='O' ||s[grp1]=='U'){
                count1++;
            }
                if(s[grp2]=='a' ||s[grp2]=='e'|| s[grp2]=='i' ||s[grp2]=='o' ||s[grp2]=='u' || s[grp2]=='A' ||s[grp2]=='E' ||s[grp2]=='I' ||s[grp2]=='O' ||s[grp2]=='U'){
                count2++;
            }
            grp1--;
            grp2--;
        }
        if(count1 == count2){
            return true;
        }
        return false;
    }
};
/*
Time Complexity:- O(N/2)
Space Complexity:- O(1)
*/
