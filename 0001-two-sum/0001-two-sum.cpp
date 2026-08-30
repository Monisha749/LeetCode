class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int ,int>m;
        vector<int>A;
        for(int i=0;i<nums.size();i++)
        {
            int moreneeded=target-nums[i];
            if(m.find(moreneeded)!=m.end()){
                return {m[moreneeded],i};
            }
                m[nums[i]]=i;
            
        }
        return {-1,-1};
    }
};