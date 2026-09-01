class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxsum=sum;
        int l=0;
        int r=k-1;
        for(int i=1;i<=nums.size()-k;i++){
            sum=sum - nums[l];
            l++;
            r++;
            sum=sum + nums[r];

            maxsum=max(maxsum,sum);
        }
        return (double)maxsum/k;
    }
};