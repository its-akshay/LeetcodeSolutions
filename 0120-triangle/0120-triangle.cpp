class Solution {
public:
    int sol(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>&dp){
      
        if(dp[i][j]!=-1){return dp[i][j];}
        if(i==triangle.size()-1){
            return triangle[i][j];
        }
        int down = triangle[i][j]+sol(i+1,j,triangle,dp);
        int diag = triangle[i][j]+sol(i+1,j+1,triangle,dp);
        dp[i][j] = min(down,diag);
        return dp[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int x = sol(0,0,triangle,dp);
        return x;

    }
};