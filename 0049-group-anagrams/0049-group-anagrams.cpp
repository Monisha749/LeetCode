class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>>mp;
        for(int i=0;i<strs.size();i++){
            string word=strs[i];
            sort(word.begin(),word.end());
            mp[word].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto it : mp){
            vector<string>sub;
            for(auto it1:it.second){
                sub.push_back(strs[it1]);
            }
            ans.push_back(sub);
        }
        return ans;
    }
};