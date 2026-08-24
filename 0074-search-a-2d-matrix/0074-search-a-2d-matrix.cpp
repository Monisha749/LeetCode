class Solution {
public:
    bool bs(vector<int>nums,int target){
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return true;
            }
            if(target<nums[mid])
            high=mid-1;
            else
            low=mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0;
        int high=matrix.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            bool check=bs(matrix[mid],target);
            if(check){
                return true;
            }
            else{
                int start=matrix[mid][0];
                int end=matrix[mid][n-1];
                if(target<start)
                high=mid-1;
                else
                low=mid+1;
            }
        }
        return false;
    }
};