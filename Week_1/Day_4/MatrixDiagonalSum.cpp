class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
      
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j||i+j==n-1){
                    sum+=mat[i][j];//you can it cunt entral element one time because at 1,1 both condition is tre and there is single sum statement
                }
            }
        }
        
        return sum;

    }
};
