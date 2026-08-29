class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi=INT_MIN;
        int left=0;
        int right=left;
        int maxfreq=INT_MIN;
        map<char,int>mp;
        while(left<s.size() && right<s.size()){
            
            mp[s[right]]++;
            maxfreq=max(maxfreq,mp[s[right]]);

            if(right-left+1-maxfreq > k){
                mp[s[left]]--;
                left++;
                
            }
            maxi=max(maxi,right-left+1);
            right++;
            
        }
        return maxi;
    }
};