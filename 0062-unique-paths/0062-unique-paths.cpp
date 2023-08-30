class Solution {
public:
    int solve(int i,int j,vector<vector<int>>&dp){
        if(i==0 && j==0){
            return 1;
        }
        if(i<0||j<0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int left = solve(i-1,j,dp);
        int right =solve(i,j-1,dp);
        dp[i][j]= left+right;
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int x = solve(m-1,n-1,dp);
        return x;
    }
};