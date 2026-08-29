class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        int left=0;
        int right=left;
        map<char,int>freq;
        while(left<s.size() && right<s.size()){
            freq[s[right]]++;
            while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};