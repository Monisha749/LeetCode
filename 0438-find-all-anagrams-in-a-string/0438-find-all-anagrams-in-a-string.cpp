class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(p.size()>s.size())
        return ans;
        vector<int>freqP(26,0);
        vector<int>freqS(26,0);
        for(int i=0;i<p.size();i++){
            freqS[s[i]-'a']++;
            freqP[p[i]-'a']++;
        }
        
        if(freqS==freqP)
        ans.push_back(0);
        int l=0;
        for(int i=p.size();i<s.size();i++){
            freqS[s[l]-'a']--;
            l++;
            freqS[s[i]-'a']++;
            if(freqS==freqP)
            ans.push_back(l);
        }
        
        return ans;
    }
};