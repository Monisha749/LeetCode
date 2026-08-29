class Solution {
public:
int postsum(vector<int>&code, int start,int k){
    int n=code.size();
    int sum=0;
    for(int i=1;i<=k;i++){
        sum+=code[(start+i)%n];
    }
    return sum;
}
int presum(vector<int>&code, int start,int k){
    int n=code.size();
    int sum=0;
    for(int i=1;i<=k;i++){
        sum+=code[(start-i+n)%n];
    }
    return sum;
}
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>ans(n,0);
        if(k>0){
            for(int i=0;i<n;i++){
                ans[i]=postsum(code,i,k);
            }
        }
        else if(k<0){
            for(int i=0;i<n;i++){
                ans[i]=presum(code,i,-k);
            }
        }
        return ans;
    }
};