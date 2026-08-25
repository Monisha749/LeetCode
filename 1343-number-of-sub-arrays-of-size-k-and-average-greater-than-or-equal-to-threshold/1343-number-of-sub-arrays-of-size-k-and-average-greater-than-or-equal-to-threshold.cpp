class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0;
        int c=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if((float)sum/k >=threshold)
        c++;
        int l=0;
        int r=k-1;
        int n=arr.size();
        for(int i=k;i<n;i++){
            sum-=arr[l];
            l++;
            r++;
            sum+=arr[r];
            if((float)sum/k >= threshold)
            c++;
        }
        return c;
    }
};