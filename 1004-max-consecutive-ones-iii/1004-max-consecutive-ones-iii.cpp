class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int len=0;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }
            if(zero>k){
                if(nums[l]==0)
                zero--;
                l++;
            }
            len=max(len,i-l+1);
        }
        return len;
    }
};