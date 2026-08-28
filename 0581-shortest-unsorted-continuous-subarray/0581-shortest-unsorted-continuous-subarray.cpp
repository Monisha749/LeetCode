class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = -1;
        int right = n;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                left = i-1;
                break;
            }
        }
        for(int i=n-1;i>0;i--){
            if(nums[i]<nums[i-1]){
                right = i;
                break;
            }
        }
        if(left==-1)
        return 0;

        int maxi=nums[left];
        int mini=nums[right];
        for(int i=left;i<=right;i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        while(left>0 && nums[left-1]>mini){
            left--;
        }
        while(right<n-1 && nums[right+1]<maxi){
            right++;
        }
        
        return right-left+1;
    }
};