class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        return false;
        vector<int>fs1(26,0);
        vector<int>fs2(26,0);
        for(int i=0;i<s1.size();i++){
            fs1[s1[i]-'a']++;
            fs2[s2[i]-'a']++;
        }
        if(fs1==fs2)
        return true;
        int l=0;
        for(int i=s1.size();i<s2.size();i++){
            fs2[s2[l]-'a']--;
            l++;
            fs2[s2[i]-'a']++;
            if(fs1==fs2)
            return true;
        }
        return false;
    }
};