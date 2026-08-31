class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rows=mat.size();
        int cols=mat[0].size();
        int sum=0;
        //principal diagonal
        for(int i=0;i<rows;i++){
            sum+=mat[i][i];
        }
        int j=cols-1;
        for(int i=0;i<rows;i++){
            sum+=mat[i][j];
            j--;
        }
        if(rows%2!=0){
            int mid=(rows-1)/2;
            sum-=mat[mid][mid];
        }
        return sum;
    }
};