class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>presum;
        vector<int>sufsum(n);
        
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            presum.push_back(sum);
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=nums[i];
            sufsum[i]=sum;
        }
        if(sufsum[0]-nums[0]==0)
        return 0;
        for(int i=1;i<n-1;i++){
            if(presum[i]==sufsum[i]){
                return i;
            }
        }
        if(presum[n-1]-nums[n-1]==0)
        return n-1;
        return -1;
    }
};