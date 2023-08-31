class Solution {
public:
    int sol(int n,int m,vector<vector<int>>& grid,vector<vector<int>>&dp){
         if(n<0||m<0){
            return 1e9;
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        if(n==0&&m==0){
            return grid[0][0];
        }
        int up = grid[n][m]+sol(n-1,m,grid,dp);
        int left = grid[n][m]+sol(n,m-1,grid,dp);
        dp[n][m] = min(up,left);
        return dp[n][m];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int x = sol(n-1,m-1,grid,dp);
        return x;
    }
};