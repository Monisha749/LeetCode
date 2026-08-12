class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxlen=INT_MIN;
        int l=0;
        int r=0;
        unordered_map<int,int>mp;
        while(l<nums.size() && r<nums.size()){
            mp[nums[r]]++;
            while(mp[nums[r]]>k){
                mp[nums[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};