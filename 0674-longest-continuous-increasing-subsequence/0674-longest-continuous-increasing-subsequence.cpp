class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int c=1;
        int maxi=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                c++;
                maxi=max(maxi,c);
            }
            else{
                maxi=max(maxi,c);
                c=1;
            }
        }
        return maxi;
    }
};