class Solution {
public:
    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    int maxFreqSum(string s) {
        vector<int>af(26);
        vector<int>vf(26);
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i]))
            vf[s[i]-'a']++;
            else
            af[s[i]-'a']++;
        }
        sort(af.begin(),af.end(),greater<int>());
        sort(vf.begin(),vf.end(),greater<int>());
        return af[0]+vf[0];
    }
};