class Solution {
public:
    int maxPower(string s) {
        int c=1;
        int maxi=1;
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i]){
                c++;
            }
            else{
                c=1;
            }
            maxi=max(maxi,c);
        }
        return maxi;
    }
};