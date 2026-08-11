class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>target)
            return 0;
            if(nums[i]==target)
            return i;
            if(i<nums.size()-1 && nums[i+1]>target){
                return i+1;
            }
            else if(i==nums.size()-1){
                ans = nums.size();
            }
        }
        return ans;
    }
};