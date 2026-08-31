class Solution {
public:
    bool selfdividing(int n){
        int temp=n;
        while(n){
            int rem=n%10;
            if(rem==0)
            return false;
            if(temp%rem!=0 ){
                return false;
            }
            n=n/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(selfdividing(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};