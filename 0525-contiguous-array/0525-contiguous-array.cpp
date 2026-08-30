class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            nums[i]=-1;
        }
        vector<int>prefix(nums.size());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            prefix[i]=sum;
        }
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[prefix[i]].push_back(i);
        }
        int maxi=0;
        for(auto it:mp){
            if(it.first==0){
                maxi=max(maxi,it.second.back()+1);
            }
            if(it.second.size()>=2){
                maxi=max(maxi, it.second.back()-it.second.front());
            }
        }return maxi;
    }
};