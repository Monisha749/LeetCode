class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int len=0;
        int maxlen=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                maxlen=max(len,maxlen);
                len=0;
            }
            else{
                len++;
            }
        }
        maxlen=max(len,maxlen);
        return maxlen;
    }
};