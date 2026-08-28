class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(k==0)
        return nums;
        int n=nums.size();
        vector<int>ans(n,-1);
        
        long long sum=0;
        if(2*k+1 > n)
        return ans;
        for(int i=0;i<(2*k)+1;i++){
            sum+=nums[i];
        }
        int left=0;
        
        for(int i=k;i<n-k;i++){
            ans[i]=sum/(2*k+1);
            sum-=nums[left];
            left++;
            int right=i+k+1;
            if(right<n){
                sum+=nums[right];
            }
        }
        return ans;
    }
};