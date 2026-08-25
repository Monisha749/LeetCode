class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int maxc=INT_MIN;
        int c=0;
        for(int i=0;i<k;i++){
            if(isvowel(s[i]))
            c++;
        }
        maxc=max(maxc, c);
        int l=0;
        for(int r=k;r<s.size();r++){
            if(isvowel(s[l]))
            c--;
            l++;
            if(isvowel(s[r]))
            c++;
            maxc=max(maxc,c);
        }
        return maxc;
    }
};