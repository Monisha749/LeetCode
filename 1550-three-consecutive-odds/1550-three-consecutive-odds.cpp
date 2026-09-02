class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int c;
        if(arr[0]%2==0)
        c=0;
        else
        c=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]%2!=0){
                c++;
                 if(c==3){
                return true;
            }
            }
            else{
                c=0;
            }
           
        }
        return false;
    }
};