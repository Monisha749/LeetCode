class Solution {
public:
    int maximum(vector<int>&nums, int i){
        int maxi=nums[0];
        for(int j=1;j<=i;j++){
            maxi=max(maxi,nums[j]);
        }
        return maxi;
    }
    int minimum(vector<int>&nums, int i){
        int mini=nums[i];
        for(int j=i+1;j<nums.size();j++){
            mini=min(mini,nums[j]);
        }
        return mini;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int small=INT_MAX;
        for(int i=0;i<n;i++){
            int maxi=maximum(nums,i);
            int mini=minimum(nums,i);
            int ins=maxi-mini;
            if(ins<=k){
                return i;
            }
        }
        return -1;
    }
};