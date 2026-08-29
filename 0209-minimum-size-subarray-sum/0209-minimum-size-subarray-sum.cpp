class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long sum=0;
        int mini=INT_MAX;
        int l=0;
        int r=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum<target)
        return 0;
        sum=0;
        
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>=target){
                mini=min(mini,r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
            
        }
        return mini;
    }
};